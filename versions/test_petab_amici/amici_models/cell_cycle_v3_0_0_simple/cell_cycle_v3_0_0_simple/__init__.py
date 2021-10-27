"""AMICI-generated module for model cell_cycle_v3_0_0_simple"""

import amici

# Ensure we are binary-compatible, see #556
if '0.11.8' != amici.__version__:
    raise RuntimeError('Cannot use model cell_cycle_v3_0_0_simple, generated with AMICI '
                       'version 0.11.8, together with AMICI version'
                       f' {amici.__version__} which is present in your '
                       'PYTHONPATH. Install the AMICI package matching the '
                       'model version or regenerate the model with the AMICI '
                       'currently in your path.')

from cell_cycle_v3_0_0_simple._cell_cycle_v3_0_0_simple import *

__version__ = '0.1.0'
