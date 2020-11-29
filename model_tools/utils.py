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
import re
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
        # solver.setAbsoluteTolerance(1e-12)
        # solver.setRelativeTolerance(1e-8)
        solver.setMaxSteps(int(1e7))
        print('tolerances:')
        print(solver.getAbsoluteTolerance())
        print(solver.getRelativeTolerance())
        print(solver.getMaxSteps())
        # sdf
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

def make_petab_compatible(path_in, path_out):
    """Replaces PEtab incopatible characters in SBML
    
    Args:
        path (:obj:`str`): path to SBML file
    """
    with open(path_in, 'r') as file:
        text = file.read()

    text = re.sub('[^<]'+'!', lambda matchobj: matchobj.group(0)[0]+'_', text)
    text = re.sub('<model id="[a-zA-Z_0-9.]+">', lambda matchobj: re.sub('v[0-9].[0-9].[0-9]', lambda matchobj: matchobj.group(0).replace('.', '_'), matchobj.group(0)), text)
    text = text.replace('()', '').replace('@', '_').replace('::', '__')\
            .replace(').', ')_').replace('(', '_').replace(')', '_')\
            .replace(',', '_').replace('~', '')

    # text = text.split(os.linesep)
    # for i_line in range(len(text)):
    #     if text[i_line].strip().startswith('<species id="'):
    #         id = text[i_line].strip().split(' ')[1][4:-1]
    #         name = text[i_line].strip().split(' ')[-1][6:-3]
    #         text = text.replace(id, name)
    # text = os.linesep.join(text)

    text = text.split(os.linesep)
    id_to_name = {}
    for i_line in range(len(text)):
        if text[i_line].strip().startswith('<species id="'):
            id = text[i_line].strip().split(' ')[1][4:-1]
            name = text[i_line].strip().split(' ')[-1][6:-3]
            id_to_name[id] = name
    text = os.linesep.join(text)
    for id, name in id_to_name.items():
        text = text.replace('"'+id+'"', '"'+name+'"')
        text = text.replace('<ci> '+id+' </ci>', '<ci> '+name+' </ci>')

    with open(path_out, 'w') as file:
        file.write(text)
