#=========================================================================
# IntMulBase_test
#=========================================================================
import pytest

from pymtl3.stdlib.test_utils import run_sim

from lab1_imul.test.IntMulFL_test import TestHarness, test_case_table

from lab1_imul.IntMulBase import IntMulBase

@pytest.mark.parametrize( **test_case_table )
def test( test_params, cmdline_opts ):

  th = TestHarness( IntMulBase() )

  th.set_param("top.src.construct",
    msgs=test_params.msgs[::2],
    initial_delay=test_params.src_delay+3,
    interval_delay=test_params.src_delay )

  th.set_param("top.sink.construct",
    msgs=test_params.msgs[1::2],
    initial_delay=test_params.sink_delay+3,
    interval_delay=test_params.sink_delay )

  run_sim( th, cmdline_opts, duts=['imul'] )

