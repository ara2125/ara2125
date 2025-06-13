from pymtl3 import *
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts, run_test_vector_sim

from ..CalcShift import CalcShift

def test_happy_cases(cmdline_opts):
    run_test_vector_sim( CalcShift(), [
        ('in_   out*'),
        # [0b00000000000000000000000000000001, 0],  no shift is undefined
        [0b00000000000000000000000000000010, 1],
        [0b00000000000000000000000000000100, 2],
        [0b10000000000000000000000000000000, 31],
        [0b00000000000000000000000000000000, 0], # maybe this should be considered undefined behavior
    ], cmdline_opts )
