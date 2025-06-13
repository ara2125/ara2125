#=========================================================================
# NetRouterRouteUnit_test
#=========================================================================

import pytest

from pymtl3 import *
from pymtl3.stdlib.test_utils import mk_test_case_table, run_sim
from pymtl3.stdlib.stream import StreamSourceFL, StreamSinkFL

from lab4_sys.NetMsg import mk_net_msg
from lab4_sys.NetRouterRouteUnit import NetRouterRouteUnit
import random

#-------------------------------------------------------------------------
# Message Types
#-------------------------------------------------------------------------

NetMsgType = mk_net_msg( 32 )

#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------

class TestHarness( Component ):

  def construct( s, router_id=0 ):

    # Instantiate models

    s.src   = StreamSourceFL( NetMsgType )
    s.runit = NetRouterRouteUnit( p_msg_nbits=44 )
    s.sinks = [ StreamSinkFL( NetMsgType ) for _ in range(3) ]

    # Connect

    s.runit.router_id  //= router_id
    s.src.ostream      //= s.runit.istream
    s.runit.ostream[0] //= s.sinks[0].istream
    s.runit.ostream[1] //= s.sinks[1].istream
    s.runit.ostream[2] //= s.sinks[2].istream

  def done( s ):
    return s.src.done() and s.sinks[0].done() and s.sinks[1].done() and s.sinks[2].done()

  def line_trace( s ):
    return s.src.line_trace()   + " > (" + \
           s.runit.line_trace() + ") > " + \
           s.sinks[0].line_trace() + "|" + \
           s.sinks[1].line_trace() + "|" + \
           s.sinks[2].line_trace()

#-------------------------------------------------------------------------
# test_basic
#-------------------------------------------------------------------------
# This is an example of a basic test. This test may not be valid
# depending on your routing algorithm. You are free to change this test.
# We will not test your route unit since its functionality depends on the
# chosen routing algorithm.

def test_basic( cmdline_opts ):
  # Test messages
  msgs = [
    #           src  dest opaq  payload
    NetMsgType( 0,   0,   0x10, 0x10101010 ),
    NetMsgType( 0,   1,   0x11, 0x11111111 ),
    NetMsgType( 0,   2,   0x12, 0x12121212 ),
    NetMsgType( 0,   3,   0x13, 0x13131313 ),
  ]

  # Test each router_id
  for router_id in range(4):

    th = TestHarness( router_id=router_id )

    th.set_param("top.src.construct", 
        msgs=msgs,
        interval_delay_mode = 'fixed',
        initial_delay      = 0,
        interval_delay     = 0 )
    
    # Set up sinks based on route direction
    th.set_param("top.sinks[0].construct",
        msgs                = [ m for m in msgs if determine_route(router_id, m.dest) == 0 ],
        interval_delay_mode = 'fixed',
        initial_delay       = 0,
        interval_delay      = 0 )

    th.set_param("top.sinks[1].construct",
        msgs                = [ m for m in msgs if determine_route(router_id, m.dest) == 1 ],
        interval_delay_mode = 'fixed',
        initial_delay       = 0,
        interval_delay      = 0 )

    th.set_param("top.sinks[2].construct",
        msgs                = [ m for m in msgs if determine_route(router_id, m.dest) == 2 ],
        interval_delay_mode = 'fixed',
        initial_delay       = 0,
        interval_delay      = 0 )

    th.elaborate()
    
    run_sim( th, cmdline_opts, duts=['runit'] )

#-------------------------------------------------------------------------
# Test Cases: Very Simple
#-------------------------------------------------------------------------
# These are examples of a simple tests using a test case table. These
# tests may not be valid depending on your routing algorithm. You are
# free to change these tests. We will not test your route unit since its
# functionality depends on the chosen routing algorithm.

one = [
  #           src  dest opaq  payload
  NetMsgType( 0,   0,   0x10, 0x10101010 ),
]

one_1 = [
  #           src  dest opaq  payload
  NetMsgType( 0,   1,   0x10, 0x10101010 ),
]

one_2 = [
  #           src  dest opaq  payload
  NetMsgType( 0,   2,   0x10, 0x10101010 ),
]

one_3 = [
  #           src  dest opaq  payload
  NetMsgType( 0,   3,   0x10, 0x10101010 ),
]

three = [
  #           src  dest opaq  payload
  NetMsgType( 0,   0,   0x10, 0x10101010 ),
  NetMsgType( 0,   1,   0x11, 0x11111111 ),
  NetMsgType( 0,   2,   0x12, 0x12121212 ),
  NetMsgType( 0,   3,   0x13, 0x13131313 ),
]

three_diff_src = [
  #           src  dest opaq  payload
  NetMsgType( 3,   0,   0x10, 0x10101010 ),
  NetMsgType( 2,   1,   0x11, 0x11111111 ),
  NetMsgType( 1,   2,   0x12, 0x12121212 ),
  NetMsgType( 0,   3,   0x13, 0x13131313 ),
]

four = [
  #           src  dest opaq  payload
  NetMsgType( 0,   0,   0x10, 0x10101010 ),
  NetMsgType( 0,   1,   0x11, 0x11111111 ),
  NetMsgType( 0,   2,   0x12, 0x12121212 ),
  NetMsgType( 0,   3,   0x13, 0x13131313 ),
]

four_diff_src = [
  #           src  dest opaq  payload
  NetMsgType( 3,   0,   0x10, 0x10101010 ),
  NetMsgType( 2,   1,   0x11, 0x11111111 ),
  NetMsgType( 1,   2,   0x12, 0x12121212 ),
  NetMsgType( 0,   3,   0x13, 0x13131313 ),
]

four_one_dest0 = [
  #           src  dest opaq  payload
  NetMsgType( 3,   0,   0x10, 0x10101010 ),
  NetMsgType( 2,   0,   0x11, 0x11111111 ),
  NetMsgType( 1,   0,   0x12, 0x12121212 ),
  NetMsgType( 0,   0,   0x13, 0x13131313 ),
]

four_one_dest1 = [
  #           src  dest opaq  payload
  NetMsgType( 3,   1,   0x10, 0x10101010 ),
  NetMsgType( 2,   1,   0x11, 0x11111111 ),
  NetMsgType( 1,   1,   0x12, 0x12121212 ),
  NetMsgType( 0,   1,   0x13, 0x13131313 ),
]

four_one_dest2 = [
  #           src  dest opaq  payload
  NetMsgType( 3,   2,   0x10, 0x10101010 ),
  NetMsgType( 2,   2,   0x11, 0x11111111 ),
  NetMsgType( 1,   2,   0x12, 0x12121212 ),
  NetMsgType( 0,   2,   0x13, 0x13131313 ),
]

four_one_dest3 = [
  #           src  dest opaq  payload
  NetMsgType( 3,   3,   0x10, 0x10101010 ),
  NetMsgType( 2,   3,   0x11, 0x11111111 ),
  NetMsgType( 1,   3,   0x12, 0x12121212 ),
  NetMsgType( 0,   3,   0x13, 0x13131313 ),
]

# All messages are from the destined for the same port 
four_same = [
  #           src  dest opaq  payload
  NetMsgType( 0,   0,   0x10, 0x10101010 ),
  NetMsgType( 0,   0,   0x11, 0x11111111 ),
  NetMsgType( 0,   0,   0x12, 0x12121212 ),
  NetMsgType( 0,   0,   0x13, 0x13131313 ),
]

#-------------------------------------------------------------------------
# Test Cases: Stream to One Port
#-------------------------------------------------------------------------

stream_to_dest0 = []
for i in range(16):
  msg = NetMsgType( src=0, dest=0, opaque=i, payload=i )
  stream_to_dest0.append( msg )

stream_to_dest1 = []
for i in range(16):
  msg = NetMsgType( src=0, dest=1, opaque=i, payload=i )
  stream_to_dest1.append( msg )

stream_to_dest2 = []
for i in range(16):
  msg = NetMsgType( src=0, dest=2, opaque=i, payload=i )
  stream_to_dest2.append( msg )

stream_to_dest3 = []
for i in range(16):
  msg = NetMsgType( src=0, dest=3, opaque=i, payload=i )
  stream_to_dest2.append( msg )

#-------------------------------------------------------------------------
# Test Cases: Stream to All Ports
#-------------------------------------------------------------------------

stream_to_all1 = []
for i in range(16):
  m0 = NetMsgType( src=0, dest=0, opaque=0x00+i, payload=0x0000+i )
  m1 = NetMsgType( src=0, dest=1, opaque=0x40+i, payload=0x1000+i )
  m2 = NetMsgType( src=0, dest=2, opaque=0x80+i, payload=0x2000+i )
  m3 = NetMsgType( src=0, dest=3, opaque=0xc0+i, payload=0x3000+i )
  stream_to_all1.extend([m0, m1, m2, m3])

stream_to_all2 = []
for i in range(16):
  m0 = NetMsgType( src=0, dest=3, opaque=0xc0+i, payload=0x3000+i )
  m1 = NetMsgType( src=0, dest=1, opaque=0x40+i, payload=0x1000+i )
  m2 = NetMsgType( src=0, dest=0, opaque=0x00+i, payload=0x0000+i )
  m3 = NetMsgType( src=0, dest=2, opaque=0x80+i, payload=0x2000+i )
  stream_to_all2.extend([m0, m1, m2, m3])

#-------------------------------------------------------------------------
# Random Test Cases
#-------------------------------------------------------------------------

# Random source: random messages with random source and fixed destination

random_src_dest0 = []
random_src_dest1 = []
random_src_dest2 = []
random_src_dest3 = []

for i in range(20):
    random_src_dest0.append(NetMsgType(random.randint(0,3), 0, random.randint(0,0xff), random.randint(0,0xffffffff)))
    random_src_dest1.append(NetMsgType(random.randint(0,3), 1, random.randint(0,0xff), random.randint(0,0xffffffff)))
    random_src_dest2.append(NetMsgType(random.randint(0,3), 2, random.randint(0,0xff), random.randint(0,0xffffffff)))
    random_src_dest3.append(NetMsgType(random.randint(0,3), 3, random.randint(0,0xff), random.randint(0,0xffffffff)))

# Random destination: random messages with fixed source and random destination

random_src0_dest = []
random_src1_dest = []
random_src2_dest = []
random_src3_dest = []

for i in range(20):
    random_src0_dest.append(NetMsgType(0, random.randint(0,3), random.randint(0,0xff), random.randint(0,0xffffffff)))
    random_src1_dest.append(NetMsgType(1, random.randint(0,3), random.randint(0,0xff), random.randint(0,0xffffffff)))
    random_src2_dest.append(NetMsgType(2, random.randint(0,3), random.randint(0,0xff), random.randint(0,0xffffffff)))
    random_src3_dest.append(NetMsgType(3, random.randint(0,3), random.randint(0,0xff), random.randint(0,0xffffffff)))

# Fully random: random messages with random source and destination

def generate_random_msgs(num_msgs):
    msgs = []
    for i in range(num_msgs):
        src = random.randint(0, 3)
        dest = random.randint(0, 3)
        opaque = random.randint(0, 0xff)
        payload = random.randint(0, 0xffffffff)
        msgs.append(NetMsgType(src, dest, opaque, payload))
    return msgs

fully_random = generate_random_msgs(50)

# Test Case Table
#-------------------------------------------------------------------------

test_case_table = mk_test_case_table([
  (                               "msgs          src_delay sink_delay delay_mode"),
  [ "one0",                        one,                 0,  0,  'fixed'  ],
  [ "one1",                        one_1,               0,  0,  'fixed'  ],
  [ "one2",                        one_2,               0,  0,  'fixed'  ],
  [ "one3",                        one_3,               0,  0,  'fixed'  ],
  [ "three",                       three,               0,  0,  'fixed'  ],
  [ "three_diff_src",              three_diff_src,      0,  0,  'fixed'  ],
  [ "four",                        four,                0,  0,  'fixed'  ],
  [ "four_diff_src",               four_diff_src,       0,  0,  'fixed'  ],
  [ "four_one_dest0",              four_one_dest0,      0,  0,  'fixed'  ],
  [ "four_one_dest1",              four_one_dest1,      0,  0,  'fixed'  ],
  [ "four_one_dest2",              four_one_dest2,      0,  0,  'fixed'  ],
  [ "four_one_dest3",              four_one_dest3,      0,  0,  'fixed'  ],
  [ "four_same",                   four_same,           0,  0,  'fixed'  ],

  [ "stream_to_dest0",             stream_to_dest0,     0,  0,  'fixed'  ],
  [ "stream_to_dest1",             stream_to_dest1,     0,  0,  'fixed'  ],
  [ "stream_to_dest2",             stream_to_dest2,     0,  0,  'fixed'  ],
  [ "stream_to_dest3",             stream_to_dest3,     0,  0,  'fixed'  ],
  
  [ "stream_to_all1",              stream_to_all1,      0,  0,  'fixed'  ],
  [ "stream_to_all2",              stream_to_all2,      0,  0,  'fixed'  ],
  
  [ "random_src_dest0",            random_src_dest0,    0,  0,  'fixed'  ],
  [ "random_src_dest1",            random_src_dest1,    0,  0,  'fixed'  ],
  [ "random_src_dest2",            random_src_dest2,    0,  0,  'fixed'  ],
  [ "random_src_dest3",            random_src_dest3,    0,  0,  'fixed'  ],
  [ "random_src0_dest",            random_src0_dest,    0,  0,  'fixed'  ],
  [ "random_src1_dest",            random_src1_dest,    0,  0,  'fixed'  ],
  [ "random_src2_dest",            random_src2_dest,    0,  0,  'fixed'  ],
  [ "random_src3_dest",            random_src3_dest,    0,  0,  'fixed'  ],
  [ "fully_random",                fully_random,        0,  0,  'fixed'  ],

  [ "stream_to_dest0_fixed_0x2",   stream_to_dest0,     0,  2,  'fixed'  ],
  [ "stream_to_dest0_fixed_2x0",   stream_to_dest0,     2,  0,  'fixed'  ],
  [ "stream_to_dest1_fixed_0x2",   stream_to_dest1,     0,  2,  'fixed'  ],
  [ "stream_to_dest1_fixed_2x0",   stream_to_dest1,     2,  0,  'fixed'  ],
  [ "stream_to_dest2_fixed_0x2",   stream_to_dest2,     0,  2,  'fixed'  ],
  [ "stream_to_dest2_fixed_2x0",   stream_to_dest2,     2,  0,  'fixed'  ],
  [ "stream_to_dest3_fixed_0x2",   stream_to_dest3,     0,  2,  'fixed'  ],
  [ "stream_to_dest3_fixed_2x0",   stream_to_dest3,     2,  0,  'fixed'  ],
  [ "stream_to_all_fixed_0x2",     stream_to_all1,      0,  2,  'fixed'  ],
  [ "stream_to_all_fixed_2x0",     stream_to_all1,      2,  0,  'fixed'  ],
  [ "random_src_dest0_fixed_0x2",  random_src_dest0,    0,  2,  'fixed'  ],
  [ "random_src_dest0_fixed_2x0",  random_src_dest0,    2,  0,  'fixed'  ],
  [ "random_src_dest1_fixed_0x2",  random_src_dest1,    0,  2,  'fixed'  ],
  [ "random_src_dest1_fixed_2x0",  random_src_dest1,    2,  0,  'fixed'  ],
  [ "random_src_dest2_fixed_0x2",  random_src_dest2,    0,  2,  'fixed'  ],
  [ "random_src_dest2_fixed_2x0",  random_src_dest2,    2,  0,  'fixed'  ],
  [ "random_src_dest3_fixed_0x2",  random_src_dest3,    0,  2,  'fixed'  ],
  [ "random_src_dest3_fixed_2x0",  random_src_dest3,    2,  0,  'fixed'  ],
  [ "fully_random_fixed_0x2",      fully_random,        0,  2,  'fixed'  ],
  [ "fully_random_fixed_2x0",      fully_random,        2,  0,  'fixed'  ],

  [ "stream_to_dest0_rand_delay",  stream_to_dest0,     3, 20,  'random'  ],
  [ "stream_to_dest1_rand_delay",  stream_to_dest1,     3, 20,  'random'  ],
  [ "stream_to_dest2_rand_delay",  stream_to_dest2,     3, 20,  'random'  ],
  [ "stream_to_dest3_rand_delay",  stream_to_dest3,     3, 20,  'random'  ],
  [ "stream_to_all_rand_delay",    stream_to_all1,      3, 20,  'random'  ],
  [ "random_src_dest0_rand_delay", random_src_dest0,    3, 20,  'random'  ],
  [ "random_src_dest1_rand_delay", random_src_dest1,    3, 20,  'random'  ],
  [ "random_src_dest2_rand_delay", random_src_dest2,    3, 20,  'random'  ],
  [ "random_src_dest3_rand_delay", random_src_dest3,    3, 20,  'random'  ],
  [ "fully_random_rand_delay",     fully_random,        3, 20,  'random'  ],

])

# Determine route direction
def determine_route(router_id, dest_id):
    """
    0: downward
    1: clockwise
    2: counter-clockwise
    """
    # Convert router_id and dest_id to integers
    rid = int(router_id)
    did = int(dest_id)
    
    # If the router and destination are the same, return downward
    if rid == did:
        return 0
        
    # Calculate clockwise and counterclockwise distances
    cw_dist = (did - rid) if did > rid else (4 + did - rid)
    ccw_dist = (rid - did) if did < rid else (4 + rid - did)
    
    # If counterclockwise distance is shorter, choose counterclockwise
    if ccw_dist < cw_dist:
        return 2
    # If clockwise distance is shorter or equal, choose clockwise
    else:
        return 1

#-------------------------------------------------------------------------
# test w/ router id 0
#-------------------------------------------------------------------------

@pytest.mark.parametrize( **test_case_table )
def test_router_id_0( test_params, cmdline_opts ):

  router_id = 0
  th = TestHarness( router_id=router_id )

  th.set_param("top.src.construct",
    msgs                = test_params.msgs,
    interval_delay_mode = test_params.delay_mode,
    initial_delay       = test_params.src_delay,
    interval_delay      = test_params.src_delay )

  # Set up sinks based on route direction
  th.set_param("top.sinks[0].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 0 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay )

  th.set_param("top.sinks[1].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 1 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay )

  th.set_param("top.sinks[2].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 2 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay )

  th.elaborate()

  run_sim( th, cmdline_opts, duts=['runit'] )

#-------------------------------------------------------------------------
# test w/ router id 1
#-------------------------------------------------------------------------

@pytest.mark.parametrize( **test_case_table )
def test_router_id_1( test_params, cmdline_opts ):

  router_id = 1
  th = TestHarness( router_id=1 )

  th.set_param("top.src.construct",
    msgs                = test_params.msgs,
    interval_delay_mode = test_params.delay_mode,
    initial_delay       = test_params.src_delay,
    interval_delay      = test_params.src_delay )

  # Set up sinks based on route direction
  th.set_param("top.sinks[0].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 0 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay )

  th.set_param("top.sinks[1].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 1 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay )

  th.set_param("top.sinks[2].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 2 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay )

  th.elaborate()

  run_sim( th, cmdline_opts, duts=['runit'] )

#-------------------------------------------------------------------------
# test w/ router id 1
#-------------------------------------------------------------------------

@pytest.mark.parametrize( **test_case_table )
def test_router_id_2( test_params, cmdline_opts ):

  router_id = 2
  th = TestHarness( router_id=2 )

  th.set_param("top.src.construct",
    msgs                = test_params.msgs,
    interval_delay_mode = test_params.delay_mode,
    initial_delay       = test_params.src_delay,
    interval_delay      = test_params.src_delay )

  # Set up sinks based on route direction
  th.set_param("top.sinks[0].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 0 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay )

  th.set_param("top.sinks[1].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 1 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay )

  th.set_param("top.sinks[2].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 2 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay )

  th.elaborate()

  run_sim( th, cmdline_opts, duts=['runit'] )

#-------------------------------------------------------------------------
# test w/ router id 3
#-------------------------------------------------------------------------

@pytest.mark.parametrize( **test_case_table )
def test_router_id_3( test_params, cmdline_opts ):

  router_id = 3
  th = TestHarness( router_id=3 )

  th.set_param("top.src.construct",
    msgs                = test_params.msgs,
    interval_delay_mode = test_params.delay_mode,
    initial_delay       = test_params.src_delay,
    interval_delay      = test_params.src_delay )

  # Set up sinks based on route direction
  th.set_param("top.sinks[0].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 0 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay )

  th.set_param("top.sinks[1].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 1 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay )

  th.set_param("top.sinks[2].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 2 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay )

  th.elaborate()

  run_sim( th, cmdline_opts, duts=['runit'] )