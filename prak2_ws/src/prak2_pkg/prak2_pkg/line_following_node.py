#!/usr/bin/env python3

import cv2
import rclpy
from rclpy.node import Node
from cv_bridge import CvBridge
from sensor_msgs.msg import Image
import time
import numpy as numpy
from geometry_msgs.msg import Twist, Vector3


class LineFollower(Node):
  def __init__(self):
        super().__init__("line_follower")
        self.camera_sub = self.create_subscription(Image, "/Spot/kinect_color/image_color", self.camera_cb, 10)

        cv2.namedWindow("Gripper Img", cv2.WINDOW_NORMAL)
        cv2.namedWindow("Red Mask", cv2.WINDOW_NORMAL)

        cv2.moveWindow("Gripper Img", 800, 900)
        cv2.moveWindow("Red Mask", 1300, 900)

        cv2.resizeWindow("Gripper Img", 400, 300)
        cv2.resizeWindow("Red Mask", 400, 300)


  def convert_to_hsv_colorspace(self, image):
      original = image.copy()
      image = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)

      return image, original
  
  def filter_red_from_hsv_image(self, image):
      
      # Hue, Saturation, Value
      # 330-360 degrees -> 233-255 (255/360*330 =~= 233) Upperbound Hue
      # 40%-100% -> 255/100*40 = 102 (Saturation and Value)
      red_lower_hsv = numpy.array([0, 102, 102], dtype="uint8")
      red_upper_hsv = numpy.array([10, 255, 255], dtype="uint8")
      red_mask0 = cv2.inRange(image, red_lower_hsv, red_upper_hsv)
 
      red_lower_hsv = numpy.array([233, 102, 102], dtype="uint8")
      red_upper_hsv = numpy.array([255, 255, 255], dtype="uint8")
      red_mask1 = cv2.inRange(image, red_lower_hsv, red_upper_hsv)

      red_mask = red_mask0 + red_mask1

      return red_mask

  def filter_and_mark_red_contours(self, image, red_mask):
    """
    Filters and marks red contours in the given image based on the provided red mask.
    This function finds contours in the red mask, draws small rectangles within the contours,
    and determines the position of the anchor points (left, middle, right) based on the 
    location of the rectangles.
    Args:
      image (numpy.ndarray): The input image on which the contours will be marked.
      red_mask (numpy.ndarray): The binary mask where the red regions are highlighted.
    Returns:
      tuple: A tuple containing:
        - image (numpy.ndarray): The image with marked contours.
        - red_contours (list): A list of detected red contours.
        - int: An integer indicating the position of the anchor:
          - 0: Middle anchor found (straight ahead).
          - 1: Left anchor found (go to the left).
          - 2: Right anchor found (go to the right).
          - 4: Both left and right anchors found.
          - -1: No anchor found.
    """

    
    # Find contours in the red mask
    red_contours = cv2.findContours(red_mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    red_contours = red_contours[0] if len(red_contours) == 2 else red_contours[1]

    # Define the size of the small rectangles
    rect_size = 4 # 4 is a good value it seems to fill the contours almost perfectly without much excess
    left_anchor = False
    middle_anchor = False
    right_anchor = False

    for c in red_contours:
        # Get the bounding box of the contour
        x, y, w, h = cv2.boundingRect(c)

        # Skip contours that are smaller than rect_size x rect_size
        if w < rect_size or h < rect_size:
            continue
        
        closest_polygon = (0, 0)

        # Loop through the bounding box area in steps of rect_size
        for i in range(x, x + w, rect_size):
            if(middle_anchor):
                break
            for j in range(y, y + h, rect_size):
                # Check if the rectangle (i, j, rect_size, rect_size) is within the contour
                if cv2.pointPolygonTest(c, (i + rect_size // 2, j + rect_size // 2), False) >= 0:
                    # Draw the 10x10 rectangle within the contour
                    cv2.rectangle(image, (i, j), (i + rect_size, j + rect_size), (36, 255, 12), -1)
                
                # picture max value x-axis is H_RES, max value y-axis is V_RES
                # bottom left corner equals 0, V_RES
                # bottom middle equals H_RES_HALF, V_RES
                # bottom right corner equals H_RES, V_RES
                # wit a margin of 1% pixels in both directions,
                # the line-anchor candidate polygon has to be between H_RES_HALF*0.99 and H_RES_HALF*1.01 in x-axis (i value)
                #                                         and between V_RES*0.99 and V_RES*1.01 in y-axis (j value)

                    pol_centr = ((i+i + rect_size)/2, (j+j + rect_size)/2)
                    print(pol_centr)
                    
                    if(abs(self.image_height - pol_centr[1]) < abs(self.image_height - closest_polygon[1])):
                        closest_polygon = pol_centr
                        # print(f"Comparing pol_centr: {pol_centr} with ranges x: [155, 165], y: [180, 190]")
                        if pol_centr[0] >= self.image_width/2*0.99 and pol_centr[0] <= self.image_width/2*1.01 and pol_centr[1] >= self.image_height*0.99 and pol_centr[1] <= self.image_height*1.01:
                          middle_anchor = True
                          break
                        elif pol_centr[0] >= self.image_width/2*0.99 and pol_centr[0] <= self.image_width/2*1.01: #here we can skip the y-axis check, because we are already in the x-axis range that isnt a middle_anchor candidate
                          right_anchor = True
                          left_anchor = True

                        elif i > self.image_width/2*1.01:
                          right_anchor = True
                          left_anchor = False

                        elif i < 155:
                          right_anchor = False
                          left_anchor = True
                    
    if middle_anchor:
        print(f"Middle Anchor found at {closest_polygon}") #start line following mode ?
        return image, red_contours, 0
    elif left_anchor and right_anchor:
        print(f"Both anchors found at {closest_polygon}") #go straight ahead ?
        return image, red_contours, 4
    elif left_anchor:
        print(f"Left anchor found at {closest_polygon}") #go to the left ?
        return image, red_contours, 1
    elif right_anchor:
        print(f"Right anchor found at {closest_polygon}") #go to the right ?
        return image, red_contours, 2
    
    print("No anchor found") #turn 360° ?
    return image, red_contours, -1
  

  def send_twist_cmd(self, twist_cmd):
      print("Sending Twist Command: ", twist_cmd)
      # self.cmd_publisher = self.create_publisher(Twist, "/cmd_vel", 10)
      # self.cmd_publisher.publish(twist_cmd)
  

  def line_following_mode(self, red_mask, red_contours):
      # twist_cmd = Twist()
      # twist_cmd.linear = Vector3(x=0.0, y=0.0, z=0.0)
      # twist_cmd.angular = Vector3(x=0.0, y=0.0, z=0.0)
      print("Line following mode activated")
        # = cv2.fitLine(red_contours, cv2.DIST_L2, 0, 0.01, 0.01)


  def main_algorythm(self, red_mask):
      
      #search current picture for the closest occurence of a red contour
      self.spot_gripper_img, red_contours, found_achor_direction = self.filter_and_mark_red_contours(self.spot_gripper_img, red_mask)


      #if no contour is found start to turn 360° clockwise
      if(found_achor_direction == -1):
          twist_cmd = Twist()
          twist_cmd.linear = Vector3(x=-0.1, y=0.0, z=0.0)
          twist_cmd.angular = Vector3(x=0.0, y=0.0, z=-0.4)
          self.send_twist_cmd(twist_cmd)
          return
      #(normally one would implement a scouting algorithm at this point i guess)
      #also one would filter out too big contours (red walls e.g.), we gotta approximate a line from given contours


      #if closest contour is on the left side of the image, turn left
      if(found_achor_direction == 1):
          twist_cmd = Twist()
          twist_cmd.linear = Vector3(x=0.0, y=0.0, z=0.0)
          twist_cmd.angular = Vector3(x=0.0, y=0.0, z=0.4)
          self.send_twist_cmd(twist_cmd)
          return
      
      #if closest contour is on the right side of the image, turn right
      if(found_achor_direction == 2):
          twist_cmd = Twist()
          twist_cmd.linear = Vector3(x=0.0, y=0.0, z=0.0)
          twist_cmd.angular = Vector3(x=0.0, y=0.0, z=-0.4)
          self.send_twist_cmd(twist_cmd)
          return
      
      #if closest contour is in the middle, go straight ahead
      if(found_achor_direction == 0):
          twist_cmd = Twist()
          twist_cmd.linear = Vector3(x=0.1, y=0.0, z=0.0)
          twist_cmd.angular = Vector3(x=0.0, y=0.0, z=0.0)
          self.send_twist_cmd(twist_cmd)
          return
      
      
      #if contour is in the bottom middle of the image, activate line following mode
      self.line_following_mode(red_mask, red_contours)
      return
      


  def camera_cb(self, msg):
      #convert from ROS msg to OpenCV image
      self.spot_gripper_img = CvBridge().imgmsg_to_cv2(msg, desired_encoding='bgr8') #bgr8 is OpenCV’s default color format
      self.image_width, self.image_height, _ = self.spot_gripper_img.shape

      hsv_converted_image = self.convert_to_hsv_colorspace(self.spot_gripper_img)
      red_mask = self.filter_red_from_hsv_image(hsv_converted_image[0])

      self.main_algorythm(red_mask)

      self.image_height, self.image_width, _ = self.spot_gripper_img.shape
      print(f"Image Width: {self.image_width}, Image Height: {self.image_height}")


      cv2.imshow("Gripper Img", self.spot_gripper_img)
      cv2.imshow("Red Mask", red_mask)
      print("\n")

      cv2.waitKey(1)
      # while(1):
      #     pass








def main(args = None):
    rclpy.init(args=args)
    node = LineFollower()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()