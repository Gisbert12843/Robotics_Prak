from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'prak2_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*.py'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='gisbert12843',
    maintainer_email='gisbert12843@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'aruco_marker_detection_node = prak2_pkg.nodes.aruco_marker_detection_node:main',
            'line_following_node = prak2_pkg.nodes.line_following_node:main',
            'speed_controller_node = prak2_pkg.controllers.speed_controller:main',
        ],
    },
)
