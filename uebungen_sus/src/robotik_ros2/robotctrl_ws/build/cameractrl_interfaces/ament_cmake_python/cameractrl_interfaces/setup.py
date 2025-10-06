from setuptools import find_packages
from setuptools import setup

setup(
    name='cameractrl_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('cameractrl_interfaces', 'cameractrl_interfaces.*')),
)
