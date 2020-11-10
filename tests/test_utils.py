#
# Tests utility functions.
#
# This file is part of cell_cycle_model
# (https://github.com/paulflang/cell_cycle_model) which is
# released under the MIT license. See accompanying LICENSE 
# file for copyright notice and full license details.
#
import numpy as np
import os
import unittest
# from unittest.mock import patch

FIXTURES = os.path.join(os.path.dirname(__file__), 'fixtures')

class UtilsTestCase(unittest.TestCase):

    def test_simulate_sbml(self):
        from model_tools import simulate_sbml

        rdata_x = simulate_sbml(os.path.join(FIXTURES, '_model_vX.X.xml'),
                                time = [0, 1])['x']
        rdata_x_gold = np.array([[1, 0],
                                 [0.36652472, 0.63347528]])
        np.testing.assert_allclose(rdata_x, rdata_x_gold)

    # @patch('model_tools.utils.simulate_sbml', return_value={'x': np.array([0, 1])})
    # def test_models_are_equal(self, mock_simulate):
    #     from model_tools import models_are_equal
    #     path = os.path.join(FIXTURES, '_model_vX.X.xml')
    #     self.assertTrue(models_are_equal(path, path))
