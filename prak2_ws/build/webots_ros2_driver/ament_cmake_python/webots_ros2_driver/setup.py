from setuptools import find_packages
from setuptools import setup

setup(
    name='webots_ros2_driver',
    version='2023.1.3',
    packages=find_packages(
        include=('webots_ros2_driver', 'webots_ros2_driver.*')),
)
