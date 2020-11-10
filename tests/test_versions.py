#
# Tests model versions.
#
# This file is part of cell_cycle_model
# (https://github.com/paulflang/cell_cycle_model) which is
# released under the MIT license. See accompanying LICENSE 
# file for copyright notice and full license details.
#
import numpy as np
import os
import unittest

VERSIONS = os.path.join(os.path.dirname(__file__), '..', 'versions')

class V3_0_0_TestCase(unittest.TestCase):

    def test_equal_to_v2_1_4(self):
        from model_tools import simulate_sbml
        v2_1_4_xml = os.path.join(VERSIONS, 'v2.1.4', 'model_cell_cycle_v2.1.4.xml')
        v3_0_0_xml = os.path.join(VERSIONS, 'v3.0.0', 'results', 'cell_cycle_v3.0.0',
                                  '2020-11-10_17-27-39', 'cell_cycle_v3.0.0_sbml.xml')
        v2_1_4 = simulate_sbml(v2_1_4_xml)['x']
        v3_0_0 = simulate_sbml(v3_0_0_xml)['x']
        np.testing.assert_allclose(v2_1_4, v3_0_0/6.022e23, atol=1e-5, rtol=1e-5)
