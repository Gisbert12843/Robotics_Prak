from setuptools import find_packages, setup
import os
from glob import glob


package_name = "prak4_pkg"

setup(
    name=package_name,
    version="0.0.0",
    packages=find_packages(exclude=["test"]),
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
        (
            os.path.join("share", package_name, "launch"),
            glob(os.path.join("launch", "*.py")),
        ),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="gisbert12843",
    maintainer_email="kai.oestreich@ælumni.fh-aachen.de",
    description="TODO: Package description",
    license="TODO: License declaration",
    tests_require=["pytest"],
    entry_points={
        "console_scripts": [
            "push_ups = prak4_pkg.push_ups:main",
            "lidar = prak4_pkg.lidar:main",
            "goal_situps = prak4_pkg.goal_situps:main",
        ],
    },
)
