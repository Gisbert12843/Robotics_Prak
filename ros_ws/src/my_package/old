import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import math

class Circle_Commander(Node):
    def __init__(self):
        super().__init__('circle_commander')

        self.publisher1 = self.create_publisher(Twist, '/turtlesim1/turtle1/cmd_vel', 10)
        self.publisher2 = self.create_publisher(Twist, '/turtlesim2/turtle1/cmd_vel', 10)

        self.time_per_iteration = 0.1
        self.timer = self.create_timer(self.time_per_iteration, self.timer_callback)

        self.progress = 0.0
        self.linear_x = 2.0
        self.angular_z = 1.8
        self.time_fulllab = (self.linear_x / self.angular_z * 2 * math.pi / self.linear_x)

        self.start_time = self.get_clock().now().seconds_nanoseconds()[0]

        self.get_logger().info('Time for one lab: %f' % self.time_fulllab)

        # self.progress_step = self.time_per_iteration / self.time_fulllab * 100.0


    def timer_callback(self):

        current_time = self.get_clock().now().seconds_nanoseconds()[0]
        if current_time - self.start_time < self.time_fulllab - 1.0:
            twist_msg = Twist()
            twist_msg.linear.x = self.linear_x
            twist_msg.angular.z = self.angular_z
            # self.progress += self.progress_step
            self.get_logger().info(f'Publishing Twist: linear.x={self.linear_x}, angular.z={self.angular_z}')

            self.publisher1.publish(twist_msg)
            self.publisher2.publish(twist_msg)
        else:
            twist_msg = Twist()
            twist_msg.linear.x = self.linear_x
            twist_msg.angular.z = self.angular_z
            self.publisher1.publish(twist_msg)
            self.publisher2.publish(twist_msg)
            self.get_logger().info('!!Finished lab!!')
            self.destroy_node()
            


def main(args=None):
    rclpy.init(args=args)
    circle_commander = Circle_Commander()
    rclpy.spin(circle_commander)
    circle_commander.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
