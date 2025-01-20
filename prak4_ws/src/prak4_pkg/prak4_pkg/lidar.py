#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
import time
import numpy as np
from geometry_msgs.msg import Twist
from webots_spot_msgs.srv import SpotMotion
import math

from sensor_msgs.msg import LaserScan

from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy, DurabilityPolicy


class LidarStopNode(Node):
    def __init__(self):
        super().__init__("LidarStopNode")

        qos_profile = QoSProfile(
            history=HistoryPolicy.KEEP_LAST,  # Default to KEEP_LAST
            depth=10,  # Depth of 10 (reasonable assumption)
            reliability=ReliabilityPolicy.BEST_EFFORT,  # Match publisher's BEST_EFFORT
            durability=DurabilityPolicy.VOLATILE,  # Match publisher's VOLATILE
        )

        self.lidar_sub = self.create_subscription(
            LaserScan, "/scan", self.lidar_cb, qos_profile
        )

        self.conescan_publisher = self.create_publisher(
            LaserScan, "/cone_scan", 10  # Filtered scan topic
        )

        self.twist_publisher = self.create_publisher(
            Twist, "/cmd_vel", 10  # Filtered scan topic
        )

    def lidar_cb(self, msg: LaserScan):
        self.get_logger().info("Received LaserScan.")

        angle_min = -math.radians(20)
        angle_max = math.radians(20)

        self.get_logger().info("angle_min: " + str(angle_min))
        self.get_logger().info("angle_max: " + str(angle_max))

        self.filtered_scan = LaserScan()
        self.filtered_scan.header = msg.header
        self.filtered_scan.angle_min = angle_min
        self.filtered_scan.angle_max = angle_max
        self.filtered_scan.angle_increment = msg.angle_increment
        self.filtered_scan.time_increment = msg.time_increment
        self.filtered_scan.scan_time = msg.scan_time
        self.filtered_scan.range_min = msg.range_min
        self.filtered_scan.range_max = msg.range_max

        sum = 0.0
        i = 0
        count = 0
        for angle in np.arange(msg.angle_min, msg.angle_max, msg.angle_increment):
            if angle_min <= angle <= angle_max:
                count += 1
                if msg.ranges[i] == float("inf"):
                    sum += 1
                else:
                    sum += msg.ranges[i]
                self.filtered_scan.ranges.append(msg.ranges[i])
                self.get_logger().info("range: " + str(msg.ranges[i]))
            else:
                self.filtered_scan.ranges.append(float("inf"))
            i += 1

        self.conescan_publisher.publish(self.filtered_scan)

        self.get_logger().info("Proximity: " + str(sum / count))
        if (sum / count) < 1.2:
            twist = Twist()
            twist.linear.x = 0.0
            twist.angular.z = 0.0
            self.twist_publisher.publish(twist)
            self.get_logger().info("Wall found. Stopping robot.")
        else:
            twist = Twist()
            twist.linear.x = 1.0
            twist.angular.z = 0.0
            self.twist_publisher.publish(twist)


def main(args=None):
    rclpy.init(args=args)
    lidar = LidarStopNode()
    rclpy.spin(lidar)
    lidar.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
