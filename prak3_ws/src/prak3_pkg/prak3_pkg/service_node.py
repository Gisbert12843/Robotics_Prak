import rclpy
from rclpy.node import Node
from nav_msgs.msg import Path
from geometry_msgs.msg import Point, Pose, Twist, PoseStamped, Quaternion
import numpy as np
import tf2_ros
from copy import deepcopy
from std_srvs.srv import SetBool


import heapq
import math
import scipy.interpolate as si
import numpy as np


SPEED = 0.2
LOOKAHEAD_DISTANCE = 1.0
TARGET_ERROR = None


class SimplePurePursuit(Node):
    def __init__(self):
        super().__init__("path_follower")

        # Declare parameters
        self.declare_parameter("path_topic", "/simple_path")
        self.declare_parameter("cmd_vel_topic", "/cmd_vel")
        self.declare_parameter("robot_frame", "base_link")

        self.path_topic = (
            self.get_parameter("path_topic").get_parameter_value().string_value
        )
        self.cmd_vel_topic = (
            self.get_parameter("cmd_vel_topic").get_parameter_value().string_value
        )
        self.robot_frame = (
            self.get_parameter("robot_frame").get_parameter_value().string_value
        )

        self.twist_publisher = self.create_publisher(Twist, self.cmd_vel_topic, 1)
        self.path_subscriber = self.create_subscription(
            Path, self.path_topic, self.path_callback, 10
        )

        # Initialize the transform buffer and listener
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

        self.goal_pose_sub_ = self.create_subscription(
            PoseStamped, "/goal_pose", self.goal_pose_callback, 10
        )
        self.path_publisher = self.create_publisher(Path, self.path_topic, 10)

        self.create_timer(0.1, self.path_follower_timer_callback)

        self.srv = self.create_service(
            SetBool, "/navigation/follow_path", self.set_in_motion_callback
        )

        self.in_motion = False
        self.pursuit_index = 0
        self.current_path_world = []

    def goal_pose_callback(self, msg):
        # Callback to publish the path from the robot's current position to the goal pose
        self.get_logger().info(f"Received goal pose: {msg}")

        # ToDo: Lookup transform from to the robot's current position
        try:
            transform = self.tf_buffer.lookup_transform(
                "odom", self.robot_frame, rclpy.time.Time()
            )
            current_position = transform.transform.translation
            current_orientation = transform.transform.rotation
        except Exception as e:
            self.get_logger().error(f"Error transform: {e}")
            return

        # ToDo: Extract the position from the transform to create the start position as PoseStamped
        start_pose = PoseStamped()
        start_pose.header.frame_id = "odom"

        # Convert current_position (Vector3) to Point
        start_pose.pose.position = Point(
            x=current_position.x, y=current_position.y, z=current_position.z
        )
        start_pose.pose.orientation = current_orientation

        # ToDo: Create Goal PoseStamped with the received message
        goal_pose = PoseStamped()
        goal_pose.header.frame_id = "odom"
        goal_pose.pose = msg.pose

        self.get_logger().info(f"Start Pose: {start_pose.pose.position}")
        self.get_logger().info(f"Goal Pose: {goal_pose.pose.position}")

        # Create a Path message with the start and goal poses
        path_msg = Path()
        path_msg.header.frame_id = "odom"
        path_msg.poses.append(start_pose)
        path_msg.poses.append(goal_pose)

        # Publish the path
        self.get_logger().info("Published path from base_link to goal_pose\n")
        self.path_publisher.publish(path_msg)

    def set_in_motion_callback(self, request, response):
        # ToDo: Service callback to set the in_motion flag to execute the path follower
        # if true start the motion
        # if false stop the motion
        self.in_motion = request.data
        response.success = True
        response.message = (
            "Path follower is in motion"
            if self.in_motion
            else "Path follower is not in motion"
        )
        return response

    def path_callback(self, msg):
        # Callback to receive the path from the topic
        # ToDo: Store the poses position in the a class variable current_path_world
        self.current_path_world = []
        for pose in msg.poses:
            self.current_path_world.append(
                [pose.pose.position.x, pose.pose.position.y, pose.pose.position.z]
            )

    def path_follower_timer_callback(self):
        # Timer callback to follow the path

        # ToDo: Check if the robot is in motion otherwise stop
        if not self.in_motion:
            self.get_logger().info("Path follower is not in motion.")
            twist = Twist()
            twist.linear.x = 0.0
            twist.angular.z = 0.0
            self.twist_publisher.publish(twist)
            return

        if not self.current_path_world:
            self.get_logger().error("No path received.")
            return

        # ToDo: Check if the path is empty
        if len(self.current_path_world) == 0:
            self.get_logger().error("Path is empty")
            return

        # ToDo: Lookup transform from odom to base_link to get the robot's position and orientation
        try:
            transform = self.tf_buffer.lookup_transform(
                "odom", self.robot_frame, rclpy.time.Time()
            )
        except Exception as e:
            self.get_logger().error(f"Failed to get transform: {e}")
            return

        # ToDo: Extract the robot's position and orientation in the "odom" frame
        self.x = transform.transform.translation.x
        self.y = transform.transform.translation.y
        self.z = transform.transform.translation.z

        # ToDo: Use yaw from quaternion to get the robot's yaw
        self.robot_yaw = self.yaw_from_quaternion(
            transform.transform.rotation.x,
            transform.transform.rotation.y,
            transform.transform.rotation.z,
            transform.transform.rotation.w,
        )

        # Call the pure pursuit algorithm to get the twist commands
        linear_velocity, angular_velocity, self.pursuit_index = self.pure_pursuit(
            self.x,
            self.y,
            self.robot_yaw,
            self.current_path_world,
            self.pursuit_index,
            SPEED,
            LOOKAHEAD_DISTANCE,
        )

        # ToDo: Check if the robot has reached the target
        # pure_pursuit returns the index of the last point in the path
        # math.hypot calculates the distance between two points
        if self.pursuit_index >= len(self.current_path_world) - 1:
            distance_to_goal = math.hypot(
                self.current_path_world[-1][0] - self.x,
                self.current_path_world[-1][1] - self.y,
            )
            if distance_to_goal < 0.1:
                self.get_logger().info("Goal reached, stopping motion. Yey!")
                twist = Twist()
                twist.linear.x = 0.0
                twist.angular.z = 0.0
                self.twist_publisher.publish(twist)
                self.in_motion = False
                return
            else:
                self.get_logger().info(f"Distance to goal: {distance_to_goal}")

        # ToDo: Publish the twist commands on cmd_vel topic
        twist = Twist()
        twist.linear.x = linear_velocity
        twist.angular.z = angular_velocity
        self.twist_publisher.publish(twist)

    def yaw_from_quaternion(self, x, y, z, w):
        siny_cosp = 2 * (w * z + x * y)
        cosy_cosp = 1 - 2 * (y * y + z * z)
        yaw = math.atan2(siny_cosp, cosy_cosp)
        return yaw

    def pure_pursuit(
        self,
        current_x,
        current_y,
        current_heading,
        path,
        index,
        speed,
        lookahead_distance,
        forward=True,
    ):
        closest_point = None
        for i in range(index, len(path)):
            x = path[i][0]
            y = path[i][1]
            distance = math.hypot(current_x - x, current_y - y)
            if lookahead_distance < distance:
                closest_point = (x, y)
                index = i
                break
        if closest_point is not None:

            # Calculate the lookahead point
            lookahead_angle = math.atan2(
                closest_point[1] - current_y, closest_point[0] - current_x
            )

            # Calculate the angle difference
            angle_diff = lookahead_angle - current_heading
            angle_diff = (angle_diff + math.pi) % (
                2 * math.pi
            ) - math.pi  # Normalize to [-pi, pi]

            # Decide the direction
            forward = abs(angle_diff) < math.pi / 2

            if forward:
                v = speed  # Set the speed to a negative value to make the robot go in reverse
            else:
                v = (
                    -speed
                )  # Set the speed to a negative value to make the robot go in reverse

            if forward:
                target_heading = math.atan2(
                    closest_point[1] - current_y, closest_point[0] - current_x
                )
            else:
                target_heading = math.atan2(
                    current_y - closest_point[1], current_x - closest_point[0]
                )  # Reverse the atan2 arguments
            desired_steering_angle = target_heading - current_heading
        else:
            if forward:
                target_heading = math.atan2(
                    path[-1][1] - current_y, path[-1][0] - current_x
                )
            else:
                target_heading = math.atan2(
                    current_y - path[-1][1], current_x - path[-1][0]
                )  # Reverse the atan2 arguments
            desired_steering_angle = target_heading - current_heading
            index = len(path) - 1

            # Ensure v is assigned even if closest_point is None
            v = speed if forward else -speed

        if desired_steering_angle > math.pi:
            desired_steering_angle -= 2 * math.pi
        elif desired_steering_angle < -math.pi:
            desired_steering_angle += 2 * math.pi
        if (
            desired_steering_angle > math.pi / 6
            or desired_steering_angle < -math.pi / 6
        ):
            sign = 1 if desired_steering_angle > 0 else -1
            desired_steering_angle = sign * math.pi / 4
            v = 0.0
        return v, desired_steering_angle, index


def main(args=None):
    rclpy.init()

    path_follower = SimplePurePursuit()

    rclpy.spin(path_follower)

    path_follower.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
