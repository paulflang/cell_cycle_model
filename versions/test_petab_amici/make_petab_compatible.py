import os
from model_tools import make_petab_compatible

in_file = os.path.join('results', 'cell_cycle_v3.0.0_simple', '2021-10-27_00-28-56', 'cell_cycle_v3.0.0_simple_sbml.xml')
out_file = os.path.join('PEtab_cc300_simple', 'cell_cycle_v3.0.0_simple_sbml.xml')

make_petab_compatible(in_file, out_file)
