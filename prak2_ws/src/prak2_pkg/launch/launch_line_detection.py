from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess
from launch.substitutions import LaunchConfiguration
import launch_ros.actions

def generate_launch_description():
    return LaunchDescription([

        launch_ros.actions.Node(
            namespace= "prak2_pkg",
            package='prak2_pkg',
            executable='line_following_node',
            output='screen',
            additional_env={'PYTHONUNBUFFERED': '1'},
            ),
    ])