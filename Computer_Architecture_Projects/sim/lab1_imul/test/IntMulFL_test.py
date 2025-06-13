#=========================================================================
# IntMulFL_test
#=========================================================================

import pytest

from random import randint

from pymtl3 import *
from pymtl3.stdlib.test_utils import mk_test_case_table, run_sim
from pymtl3.stdlib.stream import StreamSourceFL, StreamSinkFL

from lab1_imul.IntMulFL import IntMulFL

#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------

class TestHarness( Component ):

  def construct( s, imul ):

    # Instantiate models

    s.src  = StreamSourceFL( Bits64 )
    s.sink = StreamSinkFL( Bits32 )
    s.imul = imul

    # Connect

    s.src.ostream  //= s.imul.istream
    s.imul.ostream //= s.sink.istream

  def done( s ):
    return s.src.done() and s.sink.done()

  def line_trace( s ):
    return s.src.line_trace() + " > " + s.imul.line_trace() + " > " + s.sink.line_trace()

#-------------------------------------------------------------------------
# mk_imsg/mk_omsg
#-------------------------------------------------------------------------

# Make input message, truncate ints to ensure they fit in 32 bits.

def mk_imsg( a, b ):
  return concat( Bits32( a, trunc_int=True ), Bits32( b, trunc_int=True ) )

# Make output message, truncate ints to ensure they fit in 32 bits.

def mk_omsg( a ):
  return Bits32( a, trunc_int=True )

#----------------------------------------------------------------------
# Test Case: small positive * positive
#----------------------------------------------------------------------

small_pos_pos_msgs = [
  mk_imsg(  2,  3 ), mk_omsg(   6 ),
  mk_imsg(  4,  5 ), mk_omsg(  20 ),
  mk_imsg(  3,  4 ), mk_omsg(  12 ),
  mk_imsg( 10, 13 ), mk_omsg( 130 ),
  mk_imsg(  8,  7 ), mk_omsg(  56),
]

#----------------------------------------------------------------------
# Test Case: small positive * negative
#----------------------------------------------------------------------

small_pos_neg_msgs = [
  mk_imsg(  2,  -3 ), mk_omsg(   -6 ),
  mk_imsg(  4,  -5 ), mk_omsg(  -20 ),
  mk_imsg(  3,  -4 ), mk_omsg(  -12 ),
  mk_imsg( 10, -13 ), mk_omsg( -130 ),
  mk_imsg(  8,  -7 ), mk_omsg(  -56),
]

#----------------------------------------------------------------------
# Test Case: small negative * positive
#----------------------------------------------------------------------

small_neg_pos_msgs = [
  mk_imsg(  -2,  3 ), mk_omsg(   -6 ),
  mk_imsg(  -4,  5 ), mk_omsg(  -20 ),
  mk_imsg(  -3,  4 ), mk_omsg(  -12 ),
  mk_imsg( -10, 13 ), mk_omsg( -130 ),
  mk_imsg(  -8,  7 ), mk_omsg(  -56),
]
#----------------------------------------------------------------------
# Test Case: small negative * negative
#----------------------------------------------------------------------

small_neg_neg_msgs = [
  mk_imsg(  -2,  -3 ), mk_omsg(   6 ),
  mk_imsg(  -4,  -5 ), mk_omsg(  20 ),
  mk_imsg(  -3,  -4 ), mk_omsg(  12 ),
  mk_imsg( -10, -13 ), mk_omsg( 130 ),
  mk_imsg(  -8,  -7 ), mk_omsg(  56),
]

#----------------------------------------------------------------------
# Test Case: large positive * positive
#----------------------------------------------------------------------

large_pos_pos_msgs = [
  mk_imsg(  21,  13 ), mk_omsg(   273 ),
  mk_imsg(  12,  17 ), mk_omsg(  204 ),
  mk_imsg(  31,  14 ), mk_omsg(  434 ),
  mk_imsg( 55, 132 ), mk_omsg( 7260 ),
  mk_imsg(  89,  17 ), mk_omsg(  1513),
]

#----------------------------------------------------------------------
# Test Case: large positive * negative
#----------------------------------------------------------------------

large_pos_neg_msgs = [
  mk_imsg(  21,  -13 ), mk_omsg(   -273 ),
  mk_imsg(  12,  -17 ), mk_omsg(  -204 ),
  mk_imsg(  31,  -14 ), mk_omsg(  -434 ),
  mk_imsg( 55, -132 ), mk_omsg( -7260 ),
  mk_imsg(  89,  -17 ), mk_omsg(  -1513),
]

#----------------------------------------------------------------------
# Test Case: large negative * positive
#----------------------------------------------------------------------

large_neg_pos_msgs = [
  mk_imsg(  -21,  13 ), mk_omsg(   -273 ),
  mk_imsg(  -12,  17 ), mk_omsg(  -204 ),
  mk_imsg(  -31,  14 ), mk_omsg(  -434 ),
  mk_imsg( -55, 132 ), mk_omsg( -7260 ),
  mk_imsg(  -89,  17 ), mk_omsg(  -1513),
]

#----------------------------------------------------------------------
# Test Case: large negative * negative
#----------------------------------------------------------------------

large_neg_neg_msgs = [
  mk_imsg(  -21,  -13 ), mk_omsg(   273 ),
  mk_imsg(  -12,  -17 ), mk_omsg(  204 ),
  mk_imsg(  -31,  -14 ), mk_omsg(  434 ),
  mk_imsg( -55, -132 ), mk_omsg( 7260 ),
  mk_imsg(  -89,  -17 ), mk_omsg(  1513),
]

#----------------------------------------------------------------------
# Test Case: masked bits
#----------------------------------------------------------------------

masked_bits = [
  mk_imsg(  0x00003333,  0x00002222), mk_omsg( 0x06D392C6),
  mk_imsg( 0x00009090, 0x00000404  ), mk_omsg( 0x02448240 ),
  mk_imsg(  0x50000000, 0x00000002  ), mk_omsg( 0xA0000000 ),
  mk_imsg(  0xFFFFFFFF, 0xFFFFFFFF ), mk_omsg( 0x00000001 ),
  mk_imsg(  0x0000000F, 0x0000000F), mk_omsg( 0x000000E1 ),
  mk_imsg(  0x00001100, 0x00001100), mk_omsg( 0x01210000 ),
]

#----------------------------------------------------------------------
# Test Case: zero, 1, -1
#----------------------------------------------------------------------

combo_zero_one_negone = [
  mk_imsg( 0, 0 ), mk_omsg( 0 ),
  mk_imsg(  -1,  -1 ), mk_omsg(   1 ),
  mk_imsg(  -1,  0 ), mk_omsg(  0),
  mk_imsg(  0,  -1 ), mk_omsg(  0 ),
  mk_imsg(  1,  1 ), mk_omsg(  1),
  mk_imsg(  1,  0 ), mk_omsg(  0),
  mk_imsg(  0,  1 ), mk_omsg(  0),
]

#----------------------------------------------------------------------
# Test Case: small random numbers
#----------------------------------------------------------------------

def small_random_test():
  a = randint(-10, 10)
  b = randint(-10, 10)
  c = a*b
  return mk_imsg(a, b), mk_omsg(c)

num_small_random = 100
small_random_msgs = [x for xs in [small_random_test() for _ in range(num_small_random)] for x in xs]

#----------------------------------------------------------------------
# Test Case: large random numbers
#----------------------------------------------------------------------

def large_random_test():
  a = randint(-1000, 1000)
  b = randint(-1000, 1000)
  c = a*b
  return mk_imsg(a, b), mk_omsg(c)

num_large_random = 100
large_random_msgs = [x for xs in [large_random_test() for _ in range(num_large_random)] for x in xs]

#-------------------------------------------------------------------------
# Test Case Table
#-------------------------------------------------------------------------

test_case_table = mk_test_case_table([
  (                      "msgs                   src_delay sink_delay"),
  [ "small_pos_pos",     small_pos_pos_msgs,     0,        0          ],
  [ "small_pos_neg",     small_pos_neg_msgs,     0,        0          ],
  [ "small_neg_pos",     small_neg_pos_msgs,     0,        0          ],
  [ "small_neg_neg",     small_neg_neg_msgs,     0,        0          ],
  [ "large_pos_pos",     large_pos_pos_msgs,     0,        0          ],
  [ "large_pos_neg",     large_pos_neg_msgs,     0,        0          ],
  [ "large_neg_pos",     large_neg_pos_msgs,     0,        0          ],
  [ "large_neg_neg",     large_neg_neg_msgs,     0,        0          ],
  [ "combo_zero_one",    combo_zero_one_negone,     0,        0          ],
  [ "small_random",      small_random_msgs,      0,        0          ],
  [ "large_random",      large_random_msgs,      0,        0          ],
  [ "src_delay_1",      small_pos_pos_msgs,     1,        0          ],
  [ "src_delay_5",      small_pos_pos_msgs,     5,        0          ],
  [ "sink_delay_1",     small_pos_pos_msgs,     0,        1          ],
  [ "sink_delay_5",     small_pos_pos_msgs,     0,        5          ],
  [ "sink_delay_35",     small_pos_pos_msgs,     0,        35          ],
  [ "src_delay_35",     small_pos_pos_msgs,     35,        0          ],
  [ "masked_bits",     masked_bits,     0,        0          ],
])

#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------

@pytest.mark.parametrize( **test_case_table )
def test( test_params, cmdline_opts ):

  th = TestHarness( IntMulFL() )

  th.set_param("top.src.construct",
    msgs=test_params.msgs[::2],
    initial_delay=test_params.src_delay+3,
    interval_delay=test_params.src_delay )

  th.set_param("top.sink.construct",
    msgs=test_params.msgs[1::2],
    initial_delay=test_params.sink_delay+3,
    interval_delay=test_params.sink_delay )

  run_sim( th, cmdline_opts, duts=['imul'] )