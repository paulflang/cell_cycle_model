#
# Functions for analysing cell cycle model
#
# This file is part of cell_cycle_model
# (https://github.com/paulflang/cell_cycle_model) which is
# released under the MIT license. See accompanying LICENSE file for
# copyright notice and full license details.
#

import amici
import numpy as np
import os
import sys
from tempfile import TemporaryDirectory


def simulate_sbml(path, time=np.linspace(0, 70500, 101)):
    """Simulates SBML models using amici
    
    Args:
        path (:obj:`str`): SBML model
        time (:obj:`numpy.ndarray`, optional): output time points
    
    Returns:
        :obj:`dict`: simulation results (key 'x' contains time-course)
    """
    sbmlImporter = amici.SbmlImporter(path)
    module_name = os.path.splitext(
        os.path.basename(path))[0].replace('.', '_')
    with TemporaryDirectory() as temp_dir:
        sbmlImporter.sbml2amici(model_name=module_name, output_dir=temp_dir)
        sys.path.insert(0, temp_dir)
        model_module = amici.import_model_module(module_name=module_name,
                                                 module_path=temp_dir)
        model = model_module.getModel()
        model.setTimepoints(time)
        solver = model.getSolver()
        rdata = amici.runAmiciSimulation(model, solver)
        return rdata

def model_is_equal(path_1, path_2, scaling_factor=1):
    """Checks model simulations for equality
    
    Args:
        path_1 (:obj:`string`): SBML model
        path_2 (:obj:`string`): SBML model
        scaling_factor (int, optional): scaling factor
    
    Returns:
        :obj:`bool`: if model simulations are equal
    """
    rdata_x_1 = simulate_sbml(path_1)['x']
    rdata_x_2 = simulate_sbml(path_2)['x'] * scaling_factor
    return np.allclose(rdata_x_1, rdata_x_2, atol=1e-5, rtol=1e-5)
