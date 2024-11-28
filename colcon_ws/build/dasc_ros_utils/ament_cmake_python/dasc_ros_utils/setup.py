import os
from setuptools import find_packages
from setuptools import setup

setup(
    name='dasc_ros_utils',
    version='0.0.0',
    packages=find_packages(
        include=('dasc_ros_utils', 'dasc_ros_utils.*')),
)
