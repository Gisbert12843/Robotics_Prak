import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
import math

class CircleCommander(Node):
    def __init__(self):
        super().__init__('circle_commander')

        self.publisher = self.create_publisher(Twist, '/turtlesim1/turtle1/cmd_vel', 10)

        self.start_pose = None
        self.start_pose_recorded = False
        self.current_pose = None

        # subscribe to turtle pose
        self.subscription = self.create_subscription(
            Pose,
            '/turtlesim1/turtle1/pose',
            self.pose_callback,
            10)

        self.linear_x = 6.0
        self.angular_z = 6.0
        self.time_per_iteration = 0.1

        #publisher timer
        self.timer = self.create_timer(self.time_per_iteration, self.timer_callback)

        self.start_time = self.get_clock().now().seconds_nanoseconds()[0]
        self.get_logger().info('Circle Commander started')

    def pose_callback(self, msg):
        # Update current pose
        self.current_pose = msg

        # record the starting pose only once
        if not self.start_pose_recorded:
            self.start_pose = msg
            self.start_pose_recorded = True
            self.get_logger().info('recorded initial starting pose for the turtle')

    def timer_callback(self):

        if not self.start_pose_recorded:
            self.get_logger().info('waiting for starting pose...')
            return

        # move the turtle
        twist_msg = Twist()
        twist_msg.linear.x = self.linear_x
        twist_msg.angular.z = self.angular_z
        self.publisher.publish(twist_msg)

        # calculate distance to starting position
        distance = math.hypot(
            self.current_pose.x - self.start_pose.x,
            self.current_pose.y - self.start_pose.y)

        self.get_logger().info(f'Distance to starting position: {distance:.2f}')

        current_time = self.get_clock().now().seconds_nanoseconds()[0]
        elapsed_time = current_time - self.start_time

        minimal_time = 1.0  # Minimum time totherwise likely insta stop
        if elapsed_time > minimal_time and distance < 0.2:
            self.get_logger().info('!! FINISH !!')
            stop_msg = Twist()  # 0 0 to stop the turtle
            self.publisher.publish(stop_msg)
            self.destroy_node()

def main(args=None):
    rclpy.init(args=args)
    circle_commander = CircleCommander()
    rclpy.spin(circle_commander)
    circle_commander.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
