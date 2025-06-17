from setuptools import find_packages
from setuptools import setup

setup(
    name='ledctrl_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('ledctrl_interfaces', 'ledctrl_interfaces.*')),
)
