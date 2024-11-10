import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/gisbert12843/Projects/Robotics_Prak/prak2_ws/install/webots_ros2_universal_robot'
