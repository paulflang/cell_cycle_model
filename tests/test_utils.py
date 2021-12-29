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
import pandas as pd
import shutil
import tempfile
import unittest
# from unittest.mock import patch
from pandas._testing import assert_frame_equal

FIXTURES = os.path.join(os.path.dirname(__file__), 'fixtures')

class UtilsTestCase(unittest.TestCase):

    def setUp(self):
        self.tmp_dir = tempfile.mkdtemp()

    def tearDown(self):
        shutil.rmtree(self.tmp_dir)

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

    def test_make_petab_compatible(self):
        from model_tools import make_petab_compatible

        file_in = os.path.join(FIXTURES, 'in_make_petab_compatible.xml')
        out_file_gold = os.path.join(FIXTURES, 'out_make_petab_compatible.xml')
        
        tmp_file_in = os.path.join(self.tmp_dir, 'test_in.xml')
        tmp_file_out = os.path.join(self.tmp_dir, 'test_out.xml')
        shutil.copy2(file_in, tmp_file_in)

        make_petab_compatible(tmp_file_in, tmp_file_out)
        self.assertEqual(open(tmp_file_out,'r').read(), open(out_file_gold,'r').read())


    def test_get_periods(self):
        from model_tools import get_periods

        res = np.array([[11,22,33],[1,2,3],[11,22,33],[111,222,333],[11,22,33],[1,2,3]])
        idx_true = [1, 5]
        idx = get_periods(res)
        self.assertTrue(np.array_equal(idx, idx_true))

    def test_get_drift(self):
        from model_tools import get_drift

        delta_true = np.array([[0,1e-6],[0,0]])
        res = np.array([[0,1],[1,1+1e-6],[1,2],[1,1]])
        delta = get_drift(res)
        self.assertTrue(np.array_equal(delta_true, delta_true))

    def test_evaluate_drift(self):
        from model_tools import evaluate_drift

        index = [0, 1, 2, 'slope', 'intercept', 'rvalue', 'pvalue', 'stderr']
        columns = ['S1', 'S2']
        data = np.array([[0.,0.,0.,0.,0.,0.,1.,0.], [0.,0.,0.,0.,0.,0.,1.,0.]]).transpose()
        df_true = pd.DataFrame(index=index, columns=columns, data=data)
        df = evaluate_drift(os.path.join(FIXTURES, 'mock.cdat'))
        assert_frame_equal(df, df_true)
