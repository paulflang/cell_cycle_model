#
# cell_cycle_model setuptools script
#
# This file is part of cell_cycle_model.
#  Copyright (c) 2020, University of Oxford.
#  For licensing information, see the LICENSE file distributed with the cell_cycle_model
#  software package.
#
from setuptools import setup, find_packages

# Load text for description and license
with open('README.md') as f:
    readme = f.read()


# Read version number from file
def load_version():
    try:
        import os
        root = os.path.abspath(os.path.dirname(__file__))
        with open(os.path.join(root, 'model_tools', '_version.py'), 'r') as f:
            version = f.read().split('\n')[0].split('=')[-1].strip(' ').strip('"')
        return version
    except Exception as e:
        raise RuntimeError('Unable to read version number (' + str(e) + ').')


# Go!
setup(
    # Module name (lowercase)
    name='cell_cycle_model',
    version=load_version(),

    # Description
    description='A collection of mathematical cell cycle models',
    long_description=readme,
    long_description_content_type='text/markdown',

    # License name
    license='MIT',

    # Maintainer information
    author='Paul F Lang',
    author_email='paul.lang@wolfson.ox.ac.uk',
    url='https://github.com/paulflang/cell_cycle_model',

    # Packages to include
    packages=find_packages(include=('model_tools', 'model_tools.*')),

    # Include non-python files (via MANIFEST.in)
    include_package_data=True,

    # List of dependencies
    install_requires=[
        'amici',
        'numpy',
    ],
    extras_require={
        'docs': [
            'sphinx',     # For doc generation
        ],
        'dev': [
            'flake8>=3',            # For code style checking
        ],
    },
    python_requires='>=3.8',
)
