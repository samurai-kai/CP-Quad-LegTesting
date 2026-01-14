from setuptools import find_packages
from setuptools import setup

setup(
    name='quadruped_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('quadruped_msgs', 'quadruped_msgs.*')),
)
