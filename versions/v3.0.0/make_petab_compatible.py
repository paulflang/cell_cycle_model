import os
from model_tools import make_petab_compatible

# in_file = os.path.join('results', 'cell_cycle_v3.0.0', '2020-11-13_22-20-23', 'cell_cycle_v3.0.0_sbml.xml')
# out_file = os.path.join('cell_cycle_v3.0.0_sbml.xml')

in_file = os.path.join('results', 'cell_cycle_v3.0.0', '2021-12-27_20-21-23', 'cell_cycle_v3.0.0_sbml.xml')
out_file = os.path.join('PEtab', 'cell_cycle_v3.0.0_sbml.xml')

make_petab_compatible(in_file, out_file)
