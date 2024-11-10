#!/usr/bin/env python3

import cv2
import rclpy
from rclpy.node import Node
from cv_bridge import CvBridge
from sensor_msgs.msg import Image
import time
import numpy as np
from geometry_msgs.msg import Twist
import math
from screeninfo import get_monitors


class LineFollower(Node):
    def __init__(self):
        super().__init__('line_follower')

        self.image_sub = self.create_subscription(
            Image,
            '/Spot/kinect_color/image_color',
            self.image_callback,
            10)
        self.move_publisher = self.create_publisher(
            Twist,
            'cmd_vel',
            10)

        self.bridge = CvBridge()

        for monitor in get_monitors():
            if monitor.is_primary:
                main_monitor = monitor
                break

        main_x = main_monitor.x
        main_y = main_monitor.y

        cv2.namedWindow("Camera View", cv2.WINDOW_NORMAL)
        cv2.moveWindow("Camera View", main_x + 400, main_y + 100)
        cv2.waitKey(1)

        cv2.namedWindow("Red Mask1", cv2.WINDOW_NORMAL)
        cv2.moveWindow("Red Mask1", main_x + 802, main_y + 100)
        cv2.waitKey(1)

        cv2.namedWindow("Red Mask Adjusted", cv2.WINDOW_NORMAL)
        cv2.moveWindow("Red Mask Adjusted", main_x + 1204, main_y + 100)
        cv2.waitKey(1)

        self.cv_image = None

        self.line_following_mode = False

        self.current_nav_point = [[0,0],time.time()]

        self.current_linear_speed = 0.0
        self.current_angular_speed = 0.0

        self.prev_error = 0.0
        self.integral = 0.0
        self.prev_time = None

        self.ErrorResponseGain = 0.005 #strength of the response to the current error
        self.DerivativeResponseGain = 0.0025 #strength of the response to the rate of change of the error (how strong the system reacts the error change)

        self.reached_goal = False


    def print_thread(self):
        while True:
            print("print_thread() is running")
            time.sleep(1)
    
    def convert_to_hsv_colorspace(self, image):
        original = image.copy()
        image = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)
        return image, original

    def filter_red_from_hsv_image(self, hsv_image):
        lower_red1 = np.array([0, 50, 50])
        upper_red1 = np.array([10, 255, 255])
        red_mask1 = cv2.inRange(hsv_image, lower_red1, upper_red1)

        lower_red2 = np.array([150, 50, 50])
        upper_red2 = np.array([180, 255, 255])
        red_mask2 = cv2.inRange(hsv_image, lower_red2, upper_red2)

        red_mask = red_mask1 | red_mask2
        return red_mask

    def image_callback(self, msg):
        self.cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        self.image_height, self.image_width, _ = self.cv_image.shape
        self.image_process()
        

    def image_process(self):
        hsv_image, _ = self.convert_to_hsv_colorspace(self.cv_image)

        red_mask = self.filter_red_from_hsv_image(hsv_image)
        cv2.imshow("Red Mask1", red_mask)

        red_mask = cv2.erode(red_mask, None, iterations=2)
        red_mask = cv2.dilate(red_mask, None, iterations=14)
        red_mask = cv2.erode(red_mask, None, iterations=10)

        cv2.imshow("Red Mask Adjusted", red_mask)

        if self.reached_goal:
            return

        bottom_region = red_mask[-int(self.image_height // 2.5):, :]

        contours, _ = cv2.findContours(
            bottom_region.copy(),
            cv2.RETR_EXTERNAL,
            cv2.CHAIN_APPROX_SIMPLE)


        timeout = self.calc_timeout()

        if contours:
            largest_contour = max(contours, key=cv2.contourArea)

            largest_contour[:, :, 1] += self.image_height - int(self.image_height // 2.5)

            M = cv2.moments(largest_contour)

            if M['m00'] > 0:
                cx = int(M['m10'] / M['m00'])
                cy = int(M['m01'] / M['m00'])

                cv2.circle(self.cv_image, (cx, cy), 5, (0, 255, 0), -1)
                self.current_nav_point = [[cx,cy], time.time()]
                
                error = cx - self.image_width / 2 #error equals the x-distance between the centroid and the bottom center of the image


                current_time = time.time()
                if self.prev_time is not None:
                    delta_time = current_time - self.prev_time   #time since last update to evaluate derivative
                else:
                    delta_time = 0.1
                if delta_time > 0:
                    derivative_prediction = (error - self.prev_error) / delta_time   #predict future error based on rate of change
                else:
                    derivative_prediction = 0.0

                output = self.ErrorResponseGain * error + self.DerivativeResponseGain * derivative_prediction

                twist = Twist()
                twist.linear.x = 0.4
                twist.angular.z = -output

                self.prev_error = error

                self.prev_time = current_time

                self.move(twist)

                self.line_following_mode = True
            else:
                print("No centroid found")
                if(self.line_following_mode and time.time() - self.current_nav_point[1] > timeout):
                    print(f"No centroid found for {timeout} seconds. Stopping")
                    twist = Twist()
                    twist.linear.x = 0.0
                    twist.angular.z = 0.0
                    self.move(twist)
                    self.current_nav_point = [[0,0],time.time()]
                    self.reached_goal = True

                else:
                    print(f"No centroid found for less than {timeout} seconds. Continuing")
                    twist = Twist()
                    twist.linear.x = self.current_linear_speed
                    twist.angular.z = self.current_angular_speed
                    self.move(twist)

        else:
            print("No contours found")
            if(self.line_following_mode and time.time() - self.current_nav_point[1] > timeout):
                print(f"No contours found for {timeout} seconds. Stopping")
                twist = Twist()
                twist.linear.x = 0.0
                twist.angular.z = 0.0
                self.move(twist)
                self.reached_goal = True
                #shutdown node
            elif(self.line_following_mode):
                print(f"No contours found for less than {timeout} seconds. Continuing")
                twist = Twist()
                twist.linear.x = self.current_linear_speed
                twist.angular.z = self.current_angular_speed
                self.move(twist)
            else:
                print("No contour found yet. Rotatiing")
                twist = Twist()
                twist.linear.x = 0.0
                twist.angular.z = 1.0
                self.move(twist)

        cv2.imshow("Camera View", self.cv_image)
        cv2.waitKey(1)

    def move(self, twist: Twist):
        self.current_linear_speed = twist.linear.x
        self.current_angular_speed = twist.angular.z
        print(f"Linear Speed: {self.current_linear_speed}, Angular Speed: {self.current_angular_speed}")
        self.move_publisher.publish(twist)

    def calc_timeout(self):
        if(self.current_linear_speed == 0):
            return 2
        return 1 / self.current_linear_speed

def main(args=None):
    rclpy.init(args=args)
    line_follower = LineFollower()
    try:
        rclpy.spin(line_follower)
    except KeyboardInterrupt:
        pass
    finally:
        line_follower.destroy_node()
        rclpy.shutdown()
        cv2.destroyAllWindows()

if __name__ == '__main__':
    main()
