#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from nav2_msgs.action import NavigateToPose
from rclpy.action import ActionClient

from webots_spot_msgs.srv import SpotMotion


class SubscriberClientNodeAsync(Node):
    def __init__(self):
        super().__init__("sub_client_node")
        self.sit_cli = self.create_client(SpotMotion, "/Spot/lie_down")
        self.stand_cli = self.create_client(SpotMotion, "/Spot/stand_up")

        while not self.stand_cli.wait_for_service(1):
            self.get_logger().warn("waiting for stand service")

        while not self.sit_cli.wait_for_service(1):
            self.get_logger().warn("waiting for lie_down service")

        self.result_subscription = self.create_subscription(
            NavigateToPose.Result,
            "/navigate_to_pose/_action/result",
            self.goal_callback,
            10,
        )

        self.req = SpotMotion.Request()
        self.is_sitting = False

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
    rclpy.spin(pushupcli)
    pushupcli.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
