#imports
import cv2
import rclpy
from rclpy.node import Node
from cv_bridge import CvBridge
from sensor_msgs.msg import Image
import time
import numpy as numpy

#Aruco Detector Node
class ArucoDetect(Node):
    def __init__(self):

        #init node
        super().__init__("aruco_node")

        #load dictionary for aruco marker in 6x6_50 format
        ar_dict = cv2.aruco.getPredefinedDictionary(cv2.aruco.DICT_6X6_50)
        self.aruco_detector = cv2.aruco.ArucoDetector(ar_dict)

        # TODO: create a subscriber for gripper camera image (sensor_msgs/Image) and connect to camera_cb
        self.camera_sub = self.create_subscription(Image, "/SpotArm/gripper_camera/image_color", self.camera_cb, 10)


    def camera_cb(self, msg):
        #convert from ROS msg to OpenCV image
        spot_gripper_img = CvBridge().imgmsg_to_cv2(msg, desired_encoding='bgr8')

        #performs marker detection, returns coordinates of corner points
        (corners, ids, rejected) = self.aruco_detector.detectMarkers(spot_gripper_img)
        if len(corners) > 0:  #only if marker detected
            corners=corners[0].squeeze()
            ptA, ptB, ptC, ptD = corners
            ptB = (int(ptB[0]), int(ptB[1]))
            ptC = (int(ptC[0]), int(ptC[1]))
            ptD = (int(ptD[0]), int(ptD[1]))
            ptA = (int(ptA[0]), int(ptA[1]))

            # TODO: draw a coloured bounding box around the marker

            print("Marker detected")
            print("ptA: ", ptA)
            print("ptB: ", ptB)
            print("ptC: ", ptC)
            print("ptD: ", ptD)

            highest_x = max(ptA[0], ptB[0], ptC[0], ptD[0])
            lowest_x = min(ptA[0], ptB[0], ptC[0], ptD[0])
            highest_y = max(ptA[1], ptB[1], ptC[1], ptD[1])
            lowest_y = min(ptA[1], ptB[1], ptC[1], ptD[1])

            print ("highest_x: ", highest_x)
            print ("lowest_x: ", lowest_x)
            print ("highest_y: ", highest_y)
            print ("lowest_y: ", lowest_y)

            cv2.rectangle(spot_gripper_img, (lowest_x-2, lowest_y-2), (highest_x+2, highest_y+2), (0, 255, 0), 2, cv2.LINE_AA, 0)

            
            
            # TODO: resize image for display
            cropped_img = spot_gripper_img[lowest_y-10:highest_y+10, lowest_x-10:highest_x+10]


            # TODO: display image
            cv2.imshow("Test Window", cropped_img)


            while(cv2.waitKey(1)):
                pass

            self.destroy_node()


            
        else:
            print("No marker detected")

        time.sleep(1)


def main(args = None):
    rclpy.init(args=args)
    node = ArucoDetect()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()