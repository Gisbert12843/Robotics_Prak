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

        cv2.namedWindow("Red Mask", cv2.WINDOW_NORMAL)
        cv2.moveWindow("Red Mask", main_x + 802, main_y + 100)
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
        self.integral_error = 0.0
        

        self.prev_time = None

        self.ErrorResponseGain = 0.01 #strength of the response to the current error
        self.DerivativeResponseGain = 0.008 #strength of the response to the rate of change of the error (how strong the system reacts the error change)
        self.IntegralResponseGain = 0.02 #strength of the response to the sum of all errors (how strong the system reacts to the accumulated error)

        self.reached_goal = False


    def print_thread(self):
        while True:
            print("print_thread() is running")
            time.sleep(1)
    
    def convert_to_hsv_colorspace(self, image):
        original = image.copy()
        image = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)
        return image, original

    def redmask_from_hsv(self, hsv_image):
        lower_red1 = np.array([0, 100, 50])
        upper_red1 = np.array([4, 255, 255])
        red_mask1 = cv2.inRange(hsv_image, lower_red1, upper_red1)

        lower_red2 = np.array([150, 100, 50])
        upper_red2 = np.array([180, 255, 255])
        red_mask2 = cv2.inRange(hsv_image, lower_red2, upper_red2)

        red_mask = red_mask1 | red_mask2
        return red_mask
    

    def preprocess_red_mask(self, red_mask): 
        #we first dilate the red mask to fill in gaps and then erode it to remove noise
        #dilation adds pixels to the boundaries of objects in an image (if any neibooring pixel is white, the pixel is set to white)
        #erosion removes pixels on object boundaries (if any neibooring pixel is black, the pixel is removed)
        red_mask = cv2.dilate(red_mask, None, iterations=2)
        red_mask = cv2.erode(red_mask, None, iterations=1)
        return red_mask

    def image_callback(self, msg):
        self.cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        self.image_height, self.image_width, _ = self.cv_image.shape
        self.image_process()
        
    def image_process(self): #this can potentially be a separate "async" thread
        hsv_image, _ = self.convert_to_hsv_colorspace(self.cv_image)

        red_mask = self.redmask_from_hsv(hsv_image)
        cv2.imshow("Red Mask", red_mask)

        red_mask = self.preprocess_red_mask(red_mask)
        cv2.imshow("Red Mask Adjusted", red_mask)

        #yey we won, but we still want to see stuff right?
        if self.reached_goal:
            cv2.imshow("Camera View", self.cv_image)        
            cv2.waitKey(1)
            return
        
        timeout = self.calc_timeout() #calculate the timeout based on the current linear speed (so that that the robot stops at the goal, camera view does not align with proper positioning)

        max_iterations = 3 #this splits the image into {max_iterations} regions to scan for contours, enabling us to stay closer to the line

        for i in range(1,max_iterations+1):
            print(f"Iteration {i}")
            region = red_mask[-int(self.image_height // max_iterations * i):, :] #define the region to scan for contours (1.0 full size, 2.0 only the bottom half)
            contours, _ = cv2.findContours(
                    region.copy(),
                    cv2.RETR_EXTERNAL,
                    cv2.CHAIN_APPROX_SIMPLE) #find contours in the image inside of the region specified

            if contours:
                largest_contour = max(contours, key=cv2.contourArea) #find the largest contour in the image (good preprocessing of the redmask is important for that)
                largest_contour[:, :, 1] += self.image_height - int(self.image_height // max_iterations * i) #shift equal to region divider

                if cv2.contourArea(largest_contour) > 100: #if the contour is bigger than 100 pixels total
                    rect = cv2.minAreaRect(largest_contour) #find the minimum area rectangle that encloses the contour
                    box = cv2.boxPoints(rect) #get the 4 corners of the rectangle
                    box = np.int0(box) #convert the corners to integers
                    cv2.drawContours(self.cv_image, [box], 0, (255, 0, 255), 3)
                    width = rect[1][0]
                    height = rect[1][1]
                    #calculate the aspect ratio of the rectangle, if the aspect ratio is too low, the contour is not a line
                    aspect_ratio = float(width) / height if width > height else float(height) / width 
                    print(f"Aspect Ratio: {aspect_ratio}")

                    if aspect_ratio > 4 or self.line_following_mode: #if the aspect ratio is greater than 4, the contour is a line
                        pass
                    else:
                        print("Contour does not represent a line")
                        if(not self.line_following_mode):
                            print("Searching for line")
                            twist = Twist()
                            twist.linear.x = 0.0
                            twist.angular.z = 1.0
                            self.move(twist)
                        cv2.imshow("Camera View", self.cv_image)        
                        cv2.waitKey(1)
                        continue
                else:
                    print("Contour is too small")
                    if(not self.line_following_mode):
                        print("Searching for line")
                        twist = Twist()
                        twist.linear.x = 0.0
                        twist.angular.z = 1.0
                        self.move(twist)
                    
                    cv2.imshow("Camera View", self.cv_image)        
                    cv2.waitKey(1)
                    continue




                M = cv2.moments(largest_contour) #moments are statistical properties of an image, we use them to find the centroid of the contour

                if M['m00'] > 0:
                    cx = int(M['m10'] / M['m00'])
                    cy = int(M['m01'] / M['m00'])

                    cv2.circle(self.cv_image, (cx, cy), 5, (0, 255, 0), -1) #show centroid on image
                    self.current_nav_point = [[cx,cy], time.time()]
                    
                    error = cx - self.image_width / 2 #error equals the x-distance between the centroid and the bottom center of the image
                    self.integral_error += error #accumulate error over time


                    current_time = time.time()
                    if self.prev_time is not None:
                        delta_time = current_time - self.prev_time   #time since last update to evaluate derivative
                    else:
                        delta_time = 0.1

                    if delta_time > 0:
                        derivative_prediction = (error - self.prev_error) / delta_time   #predict future error based on rate of change
                    else:
                        derivative_prediction = 0.0

                    new_angular = self.ErrorResponseGain * error
                    + self.DerivativeResponseGain * derivative_prediction
                    + self.IntegralResponseGain * self.integral_error #calculate new angular speed based on error, derivative and integral

                    #Construct Twist Message 
                    #negative angular values equal a natural right turn
                    twist = Twist()
                    twist.linear.x = 0.4
                    twist.angular.z = -new_angular
                    self.move(twist)

                    self.prev_error = error #save current error for next iteration

                    self.prev_time = current_time #save current time for next iteration

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
                break

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
                    print("No contour found yet. Rotating")
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

    def calc_timeout(self): #calculate the timeout based on the current linear speed (so that that the robot stops at the goal, camera view does not align with proper positioning)
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
