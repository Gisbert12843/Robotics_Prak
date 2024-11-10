import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist, Vector3

class SpeedController(Node):

    def __init__(self, slowly_stop_on_timeout=False, time_slice=0.2):
        super().__init__('speed_controller')
        print("Speed Controller Init")

        self._stop_on_timeout = slowly_stop_on_timeout

        self.__latest_linear_speed_cmd = 0.0
        self.__latest_angular_speed_cmd = 0.0
        self.current_linear_speed = 0.0
        self.current_angular_speed = 0.0

        self.__linear_speed_buffer = []
        self.__angular_speed_buffer = []

        self._time_slice = time_slice
        self._timeout_counter = 0

        self.__publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        self.__subscriber = self.create_subscription(Twist, 'move_cmd', self.__move_cmd_callback, 10)

        # Start the timer to update speeds
        self.create_timer(self._time_slice, self.__update_speed)

    def __move_cmd_callback(self, msg):
        print("Move cmd callback")
        self.move(msg.linear.x, msg.angular.z)

    def __update_speed(self):
        print("Updating speed")
        # print(f"Linear Speed Buffer: {self.__linear_speed_buffer}")
        # print(f"Angular Speed Buffer: {self.__angular_speed_buffer}")
        # print(f"Latest Linear Speed Cmd: {self.__latest_linear_speed_cmd}")
        # print(f"Latest Angular Speed Cmd: {self.__latest_angular_speed_cmd}")

        # Check if any new commands have been received
        if len(self.__linear_speed_buffer) == 0 and len(self.__angular_speed_buffer) == 0:
            self._timeout_counter += 1
            if self._timeout_counter >= 10:
                # No commands received for 10 time slices
                if self._stop_on_timeout:
                    desired_linear_speed = 0.0
                    desired_angular_speed = 0.0
                else:
                    desired_linear_speed = self.__latest_linear_speed_cmd
                    desired_angular_speed = self.__latest_angular_speed_cmd
            else:
                desired_linear_speed = self.__latest_linear_speed_cmd
                desired_angular_speed = self.__latest_angular_speed_cmd
        else:
            # New commands received, reset timeout counter
            self._timeout_counter = 0
            # Compute average of buffer
            desired_linear_speed = sum(self.__linear_speed_buffer) / len(self.__linear_speed_buffer)
            desired_angular_speed = sum(self.__angular_speed_buffer) / len(self.__angular_speed_buffer)
            self.__linear_speed_buffer.clear()
            self.__angular_speed_buffer.clear()

        # Adjust current speed towards desired speed by 10%
        alpha = 0.1  # 10% adjustment
        self.current_linear_speed += alpha * (desired_linear_speed - self.current_linear_speed)
        self.current_angular_speed += alpha * (desired_angular_speed - self.current_angular_speed)

        # Log the speeds
        self.get_logger().info(f'Linear Speed: {self.current_linear_speed}, Angular Speed: {self.current_angular_speed}')

        # Publish the updated speed
        twist = Twist()
        twist.linear.x = self.current_linear_speed
        twist.angular.z = self.current_angular_speed
        self.__publisher_.publish(twist)

    def move(self, linear_speed=0.0, angular_speed=0.0):
        print("Moving")
        self.__linear_speed_buffer.append(linear_speed)
        self.__angular_speed_buffer.append(angular_speed)
        self.__latest_linear_speed_cmd = linear_speed
        self.__latest_angular_speed_cmd = angular_speed
        self._timeout_counter = 0

def main(args=None):
    rclpy.init(args=args)
    controller = SpeedController()
    rclpy.spin(controller)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
