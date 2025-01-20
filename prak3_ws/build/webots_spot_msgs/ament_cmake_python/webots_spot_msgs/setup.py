from setuptools import find_packages
from setuptools import setup

setup(
    name='webots_spot_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('webots_spot_msgs', 'webots_spot_msgs.*')),
)
