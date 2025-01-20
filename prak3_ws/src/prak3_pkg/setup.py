from setuptools import find_packages, setup

package_name = "prak3_pkg"

setup(
    name=package_name,
    version="0.0.0",
    packages=find_packages(exclude=["test"]),
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
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
            "service_node = prak3_pkg.service_node:main",
        ],
    },
)
