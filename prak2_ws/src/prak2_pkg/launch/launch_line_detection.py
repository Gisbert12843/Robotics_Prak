from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess
from launch.substitutions import LaunchConfiguration
import launch_ros.actions


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='prak2_pkg',
            executable='line_following_node',
            name='line_follower',  # Change this if you run multiple instances
            output='screen',
            additional_env={'PYTHONUNBUFFERED': '1'},
        ),
        # Node(
        #     package='prak2_pkg',
        #     executable='speed_controller_node',
        #     name='speed_controller',  # Change this if you run multiple instances
        #     output='screen',
        #     additional_env={'PYTHONUNBUFFERED': '1'},
        # ),
    ])