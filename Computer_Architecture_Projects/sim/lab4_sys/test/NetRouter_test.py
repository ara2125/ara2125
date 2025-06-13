#=========================================================================
# NetRouter_test
#=========================================================================

import pytest

from pymtl3 import *
from pymtl3.stdlib.test_utils import mk_test_case_table, run_sim
from pymtl3.stdlib.stream import StreamSourceFL, StreamSinkFL

from lab4_sys.NetMsg import mk_net_msg
from lab4_sys.NetRouter import NetRouter
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

    s.srcs   = [ StreamSourceFL( NetMsgType ) for _ in range(3) ]
    s.router = NetRouter( p_msg_nbits=44 )
    s.sinks  = [ StreamSinkFL( NetMsgType ) for _ in range(3) ]

    # Connect

    s.router.router_id //= router_id
    for i in range(3):
      s.srcs[i].ostream   //= s.router.istream[i]
      s.router.ostream[i] //= s.sinks[i].istream

  def done( s ):
    for i in range(3):
      if not s.srcs[i].done() or not s.sinks[i].done():
        return False
    return True

  def line_trace( s ):
    srcs_str  = "|".join([ src.line_trace()  for src  in s.srcs  ])
    sinks_str = "|".join([ sink.line_trace() for sink in s.sinks ])
    return f"{srcs_str} > ({s.router.line_trace()}) > {sinks_str}"

#-------------------------------------------------------------------------
# test_basic
#-------------------------------------------------------------------------
# These is an example of a basic test. This tests may not be valid
# depending on your routing and arbitration algorithms. You are free to
# change this test. We will not test your router since its functionality
# depends on the chosen routing and arbitration algorithms.

def test_basic( cmdline_opts ):
  router_id = 0  # Test router 0
  th = TestHarness( router_id=router_id )

  msgs = [
    #           src  dest opaq  payload
    NetMsgType( 1,   0,   0x10, 0x10101010 ),  # From input 1 to dest 0, should go downward
    NetMsgType( 2,   1,   0x11, 0x11111111 ),  # From input 2 to dest 1, should go clockwise
    NetMsgType( 0,   2,   0x12, 0x12121212 ),  # From input 0 to dest 2, should go clockwise
  ]

  # Distribute messages to input ports based on source
  th.set_param("top.srcs[0].construct",  msgs=[ m for m in msgs if m.src == 0 ] )
  th.set_param("top.srcs[1].construct",  msgs=[ m for m in msgs if m.src == 1 ] )
  th.set_param("top.srcs[2].construct",  msgs=[ m for m in msgs if m.src == 2 ] )

  # Distribute messages to output ports based on routing algorithm
  th.set_param("top.sinks[0].construct", 
      msgs=[ m for m in msgs if determine_route(router_id, m.dest) == 0 ])  # Messages going downward
  th.set_param("top.sinks[1].construct", 
      msgs=[ m for m in msgs if determine_route(router_id, m.dest) == 1 ])  # Messages going clockwise
  th.set_param("top.sinks[2].construct", 
      msgs=[ m for m in msgs if determine_route(router_id, m.dest) == 2 ])  # Messages going counter-clockwise

  th.elaborate()
  run_sim( th, cmdline_opts, duts=['router'] )

#-------------------------------------------------------------------------
# Test Cases: Very Simple
#-------------------------------------------------------------------------
# These are examples of a simple tests using a test case table. These
# tests may not be valid depending on your routing and arbitration
# algorithms. You are free to change these tests. We will not test your
# switch unit since its functionality depends on the chosen routing and
# arbitration algorithms.

one = [
  #           src  dest opaq  payload
  NetMsgType( 0,   0,   0x10, 0x10101010 ),
]

rotate0 = [
  #           src  dest opaq  payload
  NetMsgType( 1,   0,   0x10, 0x10101010 ),
  NetMsgType( 2,   1,   0x11, 0x11111111 ),
  NetMsgType( 0,   2,   0x12, 0x12121212 ),
  NetMsgType( 0,   3,   0x13, 0x13131313 ),
]

rotate1 = [
  #           src  dest opaq  payload
  NetMsgType( 1,   3,   0x13, 0x13131313 ),
  NetMsgType( 2,   0,   0x10, 0x10101010 ),
  NetMsgType( 0,   1,   0x11, 0x11111111 ),
  NetMsgType( 0,   2,   0x12, 0x12121212 ),
]

rotate2 = [
  #           src  dest opaq  payload
  NetMsgType( 1,   2,   0x12, 0x12121212 ),
  NetMsgType( 2,   3,   0x13, 0x13131313 ),
  NetMsgType( 0,   0,   0x10, 0x10101010 ),
  NetMsgType( 0,   1,   0x11, 0x11111111 ),
]

rotate3 = [
  #           src  dest opaq  payload
  NetMsgType( 1,   1,   0x11, 0x11111111 ),
  NetMsgType( 2,   2,   0x12, 0x12121212 ),
  NetMsgType( 0,   3,   0x13, 0x13131313 ),
  NetMsgType( 0,   0,   0x10, 0x10101010 ),
]

all_to_dest0 = [
  #           src  dest opaq  payload
  NetMsgType( 1,   0,   0x10, 0x10101010 ),
  NetMsgType( 2,   0,   0x11, 0x11111111 ),
  NetMsgType( 0,   0,   0x12, 0x12121212 ),
]

all_to_dest1 = [
  #           src  dest opaq  payload
  NetMsgType( 1,   1,   0x10, 0x10101010 ),
  NetMsgType( 2,   1,   0x11, 0x11111111 ),
  NetMsgType( 0,   1,   0x12, 0x12121212 ),
]

all_to_dest2 = [
  #           src  dest opaq  payload
  NetMsgType( 1,   2,   0x10, 0x10101010 ),
  NetMsgType( 2,   2,   0x11, 0x11111111 ),
  NetMsgType( 0,   2,   0x12, 0x12121212 ),
]

all_to_dest3 = [
  #           src  dest opaq  payload
  NetMsgType( 1,   3,   0x10, 0x10101010 ),
  NetMsgType( 2,   3,   0x11, 0x11111111 ),
  NetMsgType( 0,   3,   0x12, 0x12121212 ),
]

#-------------------------------------------------------------------------
# Test Cases: same source to same destination
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
  stream_to_dest3.append( msg )

#-------------------------------------------------------------------------
# Test Cases: different source to same destination
#-------------------------------------------------------------------------

# Stream all to destination 0 with fixed sequence

stream_all_to_dest0 = []

for i in range(16):
  msg = NetMsgType( src=1, dest=0, opaque=0x00+i, payload=0x0000+i )
  stream_all_to_dest0.append(msg)

for i in range(16):
  msg = NetMsgType( src=2, dest=0, opaque=0x00+i, payload=0x0000+i )
  stream_all_to_dest0.append(msg)

for i in range(16):
  msg = NetMsgType( src=0, dest=0, opaque=0x00+i, payload=0x0000+i )
  stream_all_to_dest0.append(msg)

# Stream all to destination 1 with fixed sequence

stream_all_to_dest1 = []

for i in range(16):
  msg = NetMsgType( src=1, dest=1, opaque=0x00+i, payload=0x0000+i )
  stream_all_to_dest1.append(msg)

for i in range(16):
  msg = NetMsgType( src=2, dest=1, opaque=0x00+i, payload=0x0000+i )
  stream_all_to_dest1.append(msg)

for i in range(16):
  msg = NetMsgType( src=0, dest=1, opaque=0x00+i, payload=0x0000+i )
  stream_all_to_dest1.append(msg)

# Stream all to destination 2 with fixed sequence

stream_all_to_dest2 = []

for i in range(16):
  msg = NetMsgType( src=1, dest=2, opaque=0x00+i, payload=0x0000+i )
  stream_all_to_dest2.append(msg)

for i in range(16):
  msg = NetMsgType( src=2, dest=2, opaque=0x00+i, payload=0x0000+i )
  stream_all_to_dest2.append(msg)

for i in range(16):
  msg = NetMsgType( src=0, dest=2, opaque=0x00+i, payload=0x0000+i )
  stream_all_to_dest2.append(msg)

# Stream all to destination 3 with fixed sequence

stream_all_to_dest3 = []

for i in range(16):
  msg = NetMsgType( src=1, dest=3, opaque=0x00+i, payload=0x0000+i )
  stream_all_to_dest3.append(msg)

for i in range(16):
  msg = NetMsgType( src=2, dest=3, opaque=0x00+i, payload=0x0000+i )
  stream_all_to_dest3.append(msg)

for i in range(16):
  msg = NetMsgType( src=0, dest=3, opaque=0x00+i, payload=0x0000+i )
  stream_all_to_dest3.append(msg)

#-------------------------------------------------------------------------
# Test Cases: different source to different destinations
#-------------------------------------------------------------------------

# Stream to all 4 destinations with fixed sequence

stream_all_to_all = []
stream_all_to_all.extend( stream_all_to_dest0 )
stream_all_to_all.extend( stream_all_to_dest1 )
stream_all_to_all.extend( stream_all_to_dest2 )
stream_all_to_all.extend( stream_all_to_dest3 )

# Stream to all 4 destinations from same source 0

stream_src0_to_all = []

for i in range(16):
    msg1 = NetMsgType( src=0, dest=0, opaque=0x00+i, payload=0x0000+i )
    stream_src0_to_all.append(msg1)
    msg2 = NetMsgType( src=0, dest=1, opaque=0x00+i, payload=0x0000+i )
    stream_src0_to_all.append(msg2)
    msg3 = NetMsgType( src=0, dest=2, opaque=0x00+i, payload=0x0000+i )
    stream_src0_to_all.append(msg3)
    msg4 = NetMsgType( src=0, dest=3, opaque=0x00+i, payload=0x0000+i )
    stream_src0_to_all.append(msg4)

# Stream to all 4 destinations from same source 1

stream_src1_to_all = []

for i in range(16):
    msg1 = NetMsgType( src=1, dest=0, opaque=0x00+i, payload=0x0000+i )
    stream_src1_to_all.append(msg1)
    msg2 = NetMsgType( src=1, dest=1, opaque=0x00+i, payload=0x0000+i )
    stream_src1_to_all.append(msg2) 
    msg3 = NetMsgType( src=1, dest=2, opaque=0x00+i, payload=0x0000+i )
    stream_src1_to_all.append(msg3)
    msg4 = NetMsgType( src=1, dest=3, opaque=0x00+i, payload=0x0000+i )
    stream_src1_to_all.append(msg4)   

# Stream to all 4 destinations from same source 2

stream_src2_to_all = [] 

for i in range(16):
    msg1 = NetMsgType( src=2, dest=0, opaque=0x00+i, payload=0x0000+i )
    stream_src2_to_all.append(msg1)
    msg2 = NetMsgType( src=2, dest=1, opaque=0x00+i, payload=0x0000+i )
    stream_src2_to_all.append(msg2) 
    msg3 = NetMsgType( src=2, dest=2, opaque=0x00+i, payload=0x0000+i )
    stream_src2_to_all.append(msg3)
    msg4 = NetMsgType( src=2, dest=3, opaque=0x00+i, payload=0x0000+i )
    stream_src2_to_all.append(msg4)   

# Stream to all 4 destinations from different sources

stream_srcs_to_all = []

for i in range(16):
    msg1 = NetMsgType( src=0, dest=0, opaque=0x00+i, payload=0x0000+i )
    stream_srcs_to_all.append(msg1)
    msg2 = NetMsgType( src=1, dest=1, opaque=0x00+i, payload=0x0000+i )
    stream_srcs_to_all.append(msg2) 
    msg3 = NetMsgType( src=2, dest=2, opaque=0x00+i, payload=0x0000+i )
    stream_srcs_to_all.append(msg3)
    msg4 = NetMsgType( src=0, dest=3, opaque=0x00+i, payload=0x0000+i )
    stream_srcs_to_all.append(msg4)   

#-------------------------------------------------------------------------
# Test Cases: random test
#-------------------------------------------------------------------------

# Random source: random messages with random source and fixed destination

random_src_dest0 = []
random_src_dest1 = []
random_src_dest2 = []
random_src_dest3 = []

for i in range(20):
    random_src_dest0.append(NetMsgType(random.randint(0,2), 0, random.randint(0,0xff), random.randint(0,0xffffffff)))
    random_src_dest1.append(NetMsgType(random.randint(0,2), 1, random.randint(0,0xff), random.randint(0,0xffffffff)))
    random_src_dest2.append(NetMsgType(random.randint(0,2), 2, random.randint(0,0xff), random.randint(0,0xffffffff)))
    random_src_dest3.append(NetMsgType(random.randint(0,2), 3, random.randint(0,0xff), random.randint(0,0xffffffff)))

# Random destination: random messages with fixed source and random destination

random_src0_dest = []
random_src1_dest = []
random_src2_dest = []

for i in range(20):
    random_src0_dest.append(NetMsgType(0, random.randint(0,3), random.randint(0,0xff), random.randint(0,0xffffffff)))
    random_src1_dest.append(NetMsgType(1, random.randint(0,3), random.randint(0,0xff), random.randint(0,0xffffffff)))
    random_src2_dest.append(NetMsgType(2, random.randint(0,3), random.randint(0,0xff), random.randint(0,0xffffffff)))

# Random destination: random messages with fixed sequence source and random destination

random_srcs_dest = []

for i in range(20):
    random_srcs_dest.append(NetMsgType(0, random.randint(0,3), random.randint(0,0xff), random.randint(0,0xffffffff)))
    random_srcs_dest.append(NetMsgType(1, random.randint(0,3), random.randint(0,0xff), random.randint(0,0xffffffff)))
    random_srcs_dest.append(NetMsgType(2, random.randint(0,3), random.randint(0,0xff), random.randint(0,0xffffffff)))

# Random source: random messages with random source and fixed sequence destination

random_src_dests = []

for i in range(20):
    random_src_dests.append(NetMsgType(random.randint(0,2), 0, random.randint(0,0xff), random.randint(0,0xffffffff)))
    random_src_dests.append(NetMsgType(random.randint(0,2), 1, random.randint(0,0xff), random.randint(0,0xffffffff)))
    random_src_dests.append(NetMsgType(random.randint(0,2), 2, random.randint(0,0xff), random.randint(0,0xffffffff)))
    random_src_dests.append(NetMsgType(random.randint(0,2), 3, random.randint(0,0xff), random.randint(0,0xffffffff)))

# Fully random: random messages with random source and destination

def generate_random_msgs(num_msgs):
    msgs = []
    for i in range(num_msgs):
        src = random.randint(0, 2)
        dest = random.randint(0, 3)
        opaque = random.randint(0, 0xff)
        payload = random.randint(0, 0xffffffff)
        msgs.append(NetMsgType(src, dest, opaque, payload))
    return msgs

fully_random = generate_random_msgs(50)


#-------------------------------------------------------------------------
# Test Case Table
#-------------------------------------------------------------------------

test_case_table = mk_test_case_table([
  (                                  "msgs    src_delay sink_delay delay_mode ordered"),
  [ "one",                            one,                 0,  0,  'fixed',   True  ],
  [ "rotate0",                        rotate0,             0,  0,  'fixed',   True  ],
  [ "rotate1",                        rotate1,             0,  0,  'fixed',   True  ],
  [ "rotate2",                        rotate2,             0,  0,  'fixed',   True  ],
  [ "rotate3",                        rotate3,             0,  0,  'fixed',   True  ],
  [ "all_to_dest0",                   all_to_dest0,        0,  0,  'fixed',   True  ],
  [ "all_to_dest1",                   all_to_dest1,        0,  0,  'fixed',   True  ],
  [ "all_to_dest2",                   all_to_dest2,        0,  0,  'fixed',   True  ],
  [ "all_to_dest3",                   all_to_dest3,        0,  0,  'fixed',   True  ],
  [ "stream_to_dest0",                stream_to_dest0,     0,  0,  'fixed',   False ],
  [ "stream_to_dest1",                stream_to_dest1,     0,  0,  'fixed',   False ],
  [ "stream_to_dest2",                stream_to_dest2,     0,  0,  'fixed',   False ],
  [ "stream_all_to_dest0",            stream_all_to_dest0, 0,  0,  'fixed',   False ],
  [ "stream_all_to_dest1",            stream_all_to_dest1, 0,  0,  'fixed',   False ],
  [ "stream_all_to_dest2",            stream_all_to_dest2, 0,  0,  'fixed',   False ],
  [ "stream_all_to_dest3",            stream_all_to_dest3, 0,  0,  'fixed',   False ],
  [ "stream_all_to_all",              stream_all_to_all,   0,  0,  'fixed',   False ],
  [ "stream_src0_to_all",             stream_src0_to_all,  0,  0,  'fixed',   False ],
  [ "stream_src1_to_all",             stream_src1_to_all,  0,  0,  'fixed',   False ],
  [ "stream_src2_to_all",             stream_src2_to_all,  0,  0,  'fixed',   False ],
  [ "stream_srcs_to_all",             stream_srcs_to_all,  0,  0,  'fixed',   False ],
  
  [ "random_src_dest0",               random_src_dest0,    0,  0,  'fixed',   False ],
  [ "random_src_dest1",               random_src_dest1,    0,  0,  'fixed',   False ],
  [ "random_src_dest2",               random_src_dest2,    0,  0,  'fixed',   False ],
  [ "random_src_dest3",               random_src_dest3,    0,  0,  'fixed',   False ],
  [ "random_src0_dest",               random_src0_dest,    0,  0,  'fixed',   False ],
  [ "random_src1_dest",               random_src1_dest,    0,  0,  'fixed',   False ],
  [ "random_src2_dest",               random_src2_dest,    0,  0,  'fixed',   False ],
  [ "random_srcs_dest",               random_srcs_dest,    0,  0,  'fixed',   False ],
  [ "random_src_dests",               random_src_dests,    0,  0,  'fixed',   False ],
  [ "fully_random",                   fully_random,        0,  0,  'fixed',   False ],

  [ "stream_to_dest0_fixed_2x0",      stream_to_dest0,     2,  0,  'fixed',   False ],
  [ "stream_to_dest1_fixed_2x0",      stream_to_dest1,     2,  0,  'fixed',   False ],
  [ "stream_to_dest2_fixed_2x0",      stream_to_dest2,     2,  0,  'fixed',   False ],
  [ "stream_to_dest0_fixed_2x0",      stream_to_dest0,     2,  0,  'fixed',   False ],
  [ "stream_to_dest1_fixed_0x2",      stream_to_dest1,     2,  0,  'fixed',   False ],
  [ "stream_to_dest2_fixed_2x0",      stream_to_dest2,     2,  0,  'fixed',   False ],
  [ "stream_all_to_dest0_fixed_2x0",  stream_all_to_dest0, 2,  0,  'fixed',   False ],
  [ "stream_all_to_dest1_fixed_2x0",  stream_all_to_dest1, 2,  0,  'fixed',   False ],
  [ "stream_all_to_dest2_fixed_2x0",  stream_all_to_dest2, 2,  0,  'fixed',   False ],
  [ "stream_all_to_all_fixed_2x0",    stream_all_to_all,   2,  0,  'fixed',   False ],
  [ "stream_src0_to_all_fixed_2x0",   stream_src0_to_all,  2,  0,  'fixed',   False ],
  [ "stream_src1_to_all_fixed_2x0",   stream_src1_to_all,  2,  0,  'fixed',   False ],
  [ "stream_src2_to_all_fixed_2x0",   stream_src2_to_all,  2,  0,  'fixed',   False ],
  [ "stream_srcs_to_all_fixed_2x0",   stream_srcs_to_all,  2,  0,  'fixed',   False ],
  [ "random_src_dest2_fixed_2x0",     random_src_dest2,    2,  0,  'fixed',   False ],
  [ "random_src_dest3_fixed_2x0",     random_src_dest3,    2,  0,  'fixed',   False ],
  [ "random_src0_dest_fixed_2x0",     random_src0_dest,    2,  0,  'fixed',   False ],
  [ "random_src1_dest_fixed_2x0",     random_src1_dest,    2,  0,  'fixed',   False ],
  [ "random_src2_dest_fixed_2x0",     random_src2_dest,    2,  0,  'fixed',   False ],
  [ "random_srcs_dest_fixed_2x0",     random_srcs_dest,    2,  0,  'fixed',   False ],
  [ "random_src_dests_fixed_2x0",     random_src_dests,    2,  0,  'fixed',   False ],
  [ "fully_random_fixed_2x0",         fully_random,        2,  0,  'fixed',   False ],

  [ "stream_to_dest0_fixed_0x2",      stream_to_dest0,     0,  2,  'fixed',   False ],
  [ "stream_to_dest1_fixed_0x2",      stream_to_dest1,     0,  2,  'fixed',   False ],
  [ "stream_to_dest2_fixed_0x2",      stream_to_dest2,     0,  2,  'fixed',   False ],
  [ "stream_all_to_dest0_fixed_0x2",  stream_all_to_dest0, 0,  2,  'fixed',   False ],
  [ "stream_all_to_dest1_fixed_0x2",  stream_all_to_dest1, 0,  2,  'fixed',   False ],
  [ "stream_all_to_dest2_fixed_0x2",  stream_all_to_dest2, 0,  2,  'fixed',   False ],
  [ "stream_all_to_all_fixed_0x2",    stream_all_to_all,   0,  2,  'fixed',   False ],
  [ "stream_src0_to_all_fixed_0x2",   stream_src0_to_all,  0,  2,  'fixed',   False ],
  [ "stream_src1_to_all_fixed_0x2",   stream_src1_to_all,  0,  2,  'fixed',   False ],
  [ "stream_src2_to_all_fixed_0x2",   stream_src2_to_all,  0,  2,  'fixed',   False ],
  [ "stream_srcs_to_all_fixed_0x2",   stream_srcs_to_all,  0,  2,  'fixed',   False ],
  [ "random_src_dest0_fixed_0x2",     random_src_dest0,    0,  2,  'fixed',   False ],
  [ "random_src_dest1_fixed_0x2",     random_src_dest1,    0,  2,  'fixed',   False ],
  [ "random_src_dest2_fixed_0x2",     random_src_dest2,    0,  2,  'fixed',   False ],
  [ "random_src_dest3_fixed_0x2",     random_src_dest3,    0,  2,  'fixed',   False ],
  [ "random_src0_dest_fixed_0x2",     random_src0_dest,    0,  2,  'fixed',   False ],
  [ "random_src1_dest_fixed_0x2",     random_src1_dest,    0,  2,  'fixed',   False ],
  [ "random_src2_dest_fixed_0x2",     random_src2_dest,    0,  2,  'fixed',   False ],
  [ "random_srcs_dest_fixed_0x2",     random_srcs_dest,    0,  2,  'fixed',   False ],
  [ "random_src_dests_fixed_0x2",     random_src_dests,    0,  2,  'fixed',   False ],
  [ "fully_random_fixed_0x2",         fully_random,        0,  2,  'fixed',   False ],

  [ "stream_all_to_dest0_rand_delay", stream_all_to_dest0, 3, 20,  'random',  False ],
  [ "stream_all_to_dest1_rand_delay", stream_all_to_dest1, 3, 20,  'random',  False ],
  [ "stream_all_to_dest2_rand_delay", stream_all_to_dest2, 3, 20,  'random',  False ],
  [ "stream_all_to_all_rand_delay",   stream_all_to_all,   3, 20,  'random',  False ],
  [ "stream_src0_to_all_rand_delay",  stream_src0_to_all,  3, 20,  'random',  False ],
  [ "stream_src1_to_all_rand_delay",  stream_src1_to_all,  3, 20,  'random',  False ],
  [ "stream_src2_to_all_rand_delay",  stream_src2_to_all,  3, 20,  'random',  False ],
  [ "stream_srcs_to_all_rand_delay",  stream_srcs_to_all,  3, 20,  'random',  False ],
  [ "random_src_dest0_rand_delay",    random_src_dest0,    3, 20,  'random',  False ],
  [ "random_src_dest1_rand_delay",    random_src_dest1,    3, 20,  'random',  False ],
  [ "random_src_dest2_rand_delay",    random_src_dest2,    3, 20,  'random',  False ],
  [ "random_src_dest3_rand_delay",    random_src_dest3,    3, 20,  'random',  False ],
  [ "random_src0_dest_rand_delay",    random_src0_dest,    3, 20,  'random',  False ],
  [ "random_src1_dest_rand_delay",    random_src1_dest,    3, 20,  'random',  False ],
  [ "random_src2_dest_rand_delay",    random_src2_dest,    3, 20,  'random',  False ],
  [ "random_srcs_dest_rand_delay",    random_srcs_dest,    3, 20,  'random',  False ],
  [ "random_src_dests_rand_delay",    random_src_dests,    3, 20,  'random',  False ],
  [ "fully_random_rand_delay",        fully_random,       3, 20,  'random',   False ],
])

# Determine route direction
def determine_route(router_id, dest_id):
    """
    0: downward
    1: clockwise
    2: counter-clockwise
    """
    # Convert Bits to integers for calculation
    rid = int(router_id)
    did = int(dest_id)
    
    if rid == did:
        return 0
        
    # Calculate distances using the same logic as RTL
    # For clockwise: if dest > router_id, direct distance
    # if dest < router_id, need to go through remaining positions
    cw_dist = (did - rid) if did > rid else (4 + did - rid)
    
    # For counter-clockwise: if dest < router_id, direct distance
    # if dest > router_id, need to go through remaining positions
    ccw_dist = (rid - did) if did < rid else (4 + rid - did)
    
    # Choose clockwise if distance is shorter or equal
    return 1 if cw_dist <= ccw_dist else 2

#-------------------------------------------------------------------------
# test w/ router id == 0
#-------------------------------------------------------------------------

@pytest.mark.parametrize( **test_case_table )
def test_router_id_0( test_params, cmdline_opts ):
  router_id = 0
  th = TestHarness( router_id=router_id )

  th.set_param("top.srcs[0].construct",
      msgs                = [ m for m in test_params.msgs if m.src == 0 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.src_delay,
      interval_delay      = test_params.src_delay )

  th.set_param("top.srcs[1].construct",
      msgs                = [ m for m in test_params.msgs if m.src == 1 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.src_delay,
      interval_delay      = test_params.src_delay )

  th.set_param("top.srcs[2].construct",
      msgs                = [ m for m in test_params.msgs if m.src == 2 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.src_delay,
      interval_delay      = test_params.src_delay )

  th.set_param("top.sinks[0].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 0 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay,
      ordered             = test_params.ordered )

  th.set_param("top.sinks[1].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 1 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay,
      ordered             = test_params.ordered )

  th.set_param("top.sinks[2].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 2 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay,
      ordered             = test_params.ordered )

  th.elaborate()
  run_sim( th, cmdline_opts, duts=['router'] )

#-------------------------------------------------------------------------
# test w/ router id == 1
#-------------------------------------------------------------------------

@pytest.mark.parametrize( **test_case_table )
def test_router_id_1( test_params, cmdline_opts ):
  router_id = 1
  th = TestHarness( router_id=router_id )

  th.set_param("top.srcs[0].construct",
      msgs                = [ m for m in test_params.msgs if m.src == 0 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.src_delay,
      interval_delay      = test_params.src_delay )

  th.set_param("top.srcs[1].construct",
      msgs                = [ m for m in test_params.msgs if m.src == 1 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.src_delay,
      interval_delay      = test_params.src_delay )

  th.set_param("top.srcs[2].construct",
      msgs                = [ m for m in test_params.msgs if m.src == 2 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.src_delay,
      interval_delay      = test_params.src_delay )

  th.set_param("top.sinks[0].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 0 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay,
      ordered             = test_params.ordered )

  th.set_param("top.sinks[1].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 1 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay,
      ordered             = test_params.ordered )

  th.set_param("top.sinks[2].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 2 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay,
      ordered             = test_params.ordered )

  th.elaborate()
  run_sim( th, cmdline_opts, duts=['router'] )

#-------------------------------------------------------------------------
# test w/ router id == 2
#-------------------------------------------------------------------------

@pytest.mark.parametrize( **test_case_table )
def test_router_id_2( test_params, cmdline_opts ):
  router_id = 2
  th = TestHarness( router_id=router_id )

  th.set_param("top.srcs[0].construct",
      msgs                = [ m for m in test_params.msgs if m.src == 0 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.src_delay,
      interval_delay      = test_params.src_delay )

  th.set_param("top.srcs[1].construct",
      msgs                = [ m for m in test_params.msgs if m.src == 1 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.src_delay,
      interval_delay      = test_params.src_delay )

  th.set_param("top.srcs[2].construct",
      msgs                = [ m for m in test_params.msgs if m.src == 2 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.src_delay,
      interval_delay      = test_params.src_delay )

  th.set_param("top.sinks[0].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 0 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay,
      ordered             = test_params.ordered )

  th.set_param("top.sinks[1].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 1 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay,
      ordered             = test_params.ordered )

  th.set_param("top.sinks[2].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 2 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay,
      ordered             = test_params.ordered )

  th.elaborate()
  run_sim( th, cmdline_opts, duts=['router'] )

#-------------------------------------------------------------------------
# test w/ router id == 3
#-------------------------------------------------------------------------

@pytest.mark.parametrize( **test_case_table )
def test_router_id_3( test_params, cmdline_opts ):
  router_id = 3
  th = TestHarness( router_id=router_id )

  th.set_param("top.srcs[0].construct",
      msgs                = [ m for m in test_params.msgs if m.src == 0 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.src_delay,
      interval_delay      = test_params.src_delay )

  th.set_param("top.srcs[1].construct",
      msgs                = [ m for m in test_params.msgs if m.src == 1 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.src_delay,
      interval_delay      = test_params.src_delay )

  th.set_param("top.srcs[2].construct",
      msgs                = [ m for m in test_params.msgs if m.src == 2 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.src_delay,
      interval_delay      = test_params.src_delay )

  th.set_param("top.sinks[0].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 0 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay,
      ordered             = test_params.ordered )

  th.set_param("top.sinks[1].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 1 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay,
      ordered             = test_params.ordered )

  th.set_param("top.sinks[2].construct",
      msgs                = [ m for m in test_params.msgs if determine_route(router_id, m.dest) == 2 ],
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay,
      ordered             = test_params.ordered )

  th.elaborate()
  run_sim( th, cmdline_opts, duts=['router'] )