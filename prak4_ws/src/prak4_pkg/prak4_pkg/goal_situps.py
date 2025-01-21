#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from nav2_msgs.action import NavigateToPose
from rclpy.action import ActionClient
from geometry_msgs.msg import PoseStamped
from action_msgs.msg import GoalStatus

from webots_spot_msgs.srv import SpotMotion


class SubscriberClientNodeAsync(Node):
    def __init__(self):
        super().__init__("sub_client_node")

        self.action_client = ActionClient(self, NavigateToPose, "/navigate_to_pose")

        self.sit_cli = self.create_client(SpotMotion, "/Spot/lie_down")
        self.stand_cli = self.create_client(SpotMotion, "/Spot/stand_up")

        while not self.stand_cli.wait_for_service(1):
            self.get_logger().warn("waiting for stand service")

        while not self.sit_cli.wait_for_service(1):
            self.get_logger().warn("waiting for lie_down service")

        self.result_subscription = self.create_subscription(
            NavigateToPose.Result,
            "/navigate_to_pose",
            self.goal_callback,
            10,
        )

        self.req = SpotMotion.Request()
        self.is_sitting = False

    def send_goal(self):
        self.get_logger().info("Sending goal request")

        goal_msg = NavigateToPose.Goal()
        goal_msg.pose.header.frame_id = "map"
        goal_msg.pose.header.stamp = self.get_clock().now().to_msg()

        goal_msg.pose.pose.position.x = 7.1
        goal_msg.pose.pose.position.y = 1.1

        goal_msg.pose.pose.orientation.w = 1.0

        send_goal_future = self.action_client.send_goal_async(
            goal_msg, feedback_callback=None
        )
        send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info("Goal rejected :(")
            return

        self.get_logger().info("Goal accepted :)")

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.result_callback)

    def result_callback(self, future):
        goal_handle = future.result()
        if goal_handle.status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info("Goal succeeded!")
        else:
            self.get_logger().info("Goal failed!")
        self.get_logger().info("Result: {0}".format(goal_handle))
        self.do_situps()

    def do_situps(self):
        self.get_logger().info("Doing situps.")
        self.create_timer(3, self.spot_callback)

    def spot_callback(self):
        if self.is_sitting:
            self.future = self.stand_cli.call_async(self.req)
            self.is_sitting = False
        else:
            self.future = self.sit_cli.call_async(self.req)
            self.is_sitting = True

    def goal_callback(self, msg):
        if msg.status == 4:
            self.get_logger().info("Received Goal.")
            # self.future = self.sit_cli.call_async(self.req)
            self.create_timer(3, self.spot_callback)


def main(args=None):
    rclpy.init(args=args)
    pushupcli = SubscriberClientNodeAsync()

    pushupcli.send_goal()

    rclpy.spin(pushupcli)

    pushupcli.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
