import os
from model_tools import make_petab_compatible

in_file = os.path.join('results', 'cell_cycle_v3.0.0_partial', '2021-10-22_11-21-07', 'cell_cycle_v3.0.0_partial_sbml.xml')
out_file = os.path.join('PEtab_cc300', 'cell_cycle_v3.0.0_partial_works.xml')

make_petab_compatible(in_file, out_file)
