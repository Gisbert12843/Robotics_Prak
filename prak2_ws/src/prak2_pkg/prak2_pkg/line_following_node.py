#!/usr/bin/env python3

import cv2
import rclpy
from rclpy.node import Node
from cv_bridge import CvBridge
from sensor_msgs.msg import Image
import time
import numpy as numpy



class LineFollower(Node):
  def __init__(self):
      super().__init__("line_follower")
      self.camera_sub = self.create_subscription(Image, "/Spot/kinect_color/image_color", self.camera_cb, 10)




  def convert_to_hsv_colorspace(self, image):
      original = image.copy()
      image = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)

      return image, original
  
  def filter_red_from_hsv_image(self, image):
      

      red_lower_hsv = numpy.array([0, 130, 130], dtype="uint8")
      red_upper_hsv = numpy.array([10, 255, 255], dtype="uint8")
      red_mask0 = cv2.inRange(image, red_lower_hsv, red_upper_hsv)

      red_lower_hsv = numpy.array([170, 130, 130], dtype="uint8")
      red_upper_hsv = numpy.array([180, 255, 255], dtype="uint8")
      red_mask1 = cv2.inRange(image, red_lower_hsv, red_upper_hsv)

      red_mask = red_mask0 + red_mask1

      return red_mask
  
  def filter_yellow_from_hsv_image(self, image):
        
      yellow_lower_hsv = numpy.array([20, 100, 100], dtype="uint8")
      yellow_upper_hsv = numpy.array([30, 255, 255], dtype="uint8")
      yellow_mask = cv2.inRange(image, yellow_lower_hsv, yellow_upper_hsv)

      return yellow_mask

  def mark_yellow_contours(self, image, yellow_mask):
      
      yellow_contours = cv2.findContours(yellow_mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
      yellow_contours = yellow_contours[0] if len(yellow_contours) == 2 else yellow_contours[1]

      for c in yellow_contours:
          x,y,w,h = cv2.boundingRect(c)
          # print("h*w: "+str(h*w)+" x,y :"+str(x)+" "+str(y)) #debug printout - can be removed
          cv2.rectangle(image, (x, y), (x + w, y + h), (36,255,12), 2)


  def mark_red_contours(self, image, red_mask):
      red_contours = cv2.findContours(red_mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
      red_contours = red_contours[0] if len(red_contours) == 2 else red_contours[1]

      for c in red_contours:
          x,y,w,h = cv2.boundingRect(c) 
          # print("h*w: "+str(h*w)+" x,y :"+str(x)+" "+str(y)) #debug printout - can be removed
          cv2.rectangle(image, (x, y), (x + w, y + h), (36,255,12), 2)

  def send_cmd():
      


  def camera_cb(self, msg):
      #convert from ROS msg to OpenCV image
      spot_gripper_img = CvBridge().imgmsg_to_cv2(msg, desired_encoding='bgr8') #bgr8 is OpenCV’s default color format
      hsv_converted_image = self.convert_to_hsv_colorspace(spot_gripper_img)
      cv2.imshow("Test Window", hsv_converted_image[2])
      cv2.waitKey(1)



def main(args = None):
    rclpy.init(args=args)
    node = LineFollower()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()