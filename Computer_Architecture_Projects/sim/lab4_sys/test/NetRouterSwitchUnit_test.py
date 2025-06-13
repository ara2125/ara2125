#=========================================================================
# NetRouterSwitchUnit_test
#=========================================================================

import pytest

from pymtl3 import *
from pymtl3.stdlib.test_utils import mk_test_case_table, run_sim
from pymtl3.stdlib.stream import StreamSourceFL, StreamSinkFL

from lab4_sys.NetMsg import mk_net_msg
from lab4_sys.NetRouterSwitchUnit import NetRouterSwitchUnit
import random

#-------------------------------------------------------------------------
# Message Types
#-------------------------------------------------------------------------

NetMsgType = mk_net_msg( 32 )

#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------

class TestHarness( Component ):

  def construct( s ):

    # Instantiate models

    s.srcs  = [ StreamSourceFL( NetMsgType ) for _ in range(3) ]
    s.sunit = NetRouterSwitchUnit( p_msg_nbits=44 )
    s.sink  = StreamSinkFL( NetMsgType )

    # Connect

    s.srcs[0].ostream //= s.sunit.istream[0]
    s.srcs[1].ostream //= s.sunit.istream[1]
    s.srcs[2].ostream //= s.sunit.istream[2]
    s.sunit.ostream   //= s.sink.istream

  def done( s ):
    return s.srcs[0].done() and s.srcs[1].done() and s.srcs[2].done() and s.sink.done()

  def line_trace( s ):
    return s.srcs[0].line_trace()  + "|" + \
           s.srcs[1].line_trace()  + "|" + \
           s.srcs[2].line_trace()  + " > (" + \
           s.sunit.line_trace() + ") > " + \
           s.sink.line_trace()

#-------------------------------------------------------------------------
# test_basic
#-------------------------------------------------------------------------
# These is an example of a basic test. This tests may not be valid
# depending on your arbitration algorithm. You are free to change this
# test. We will not test your switch unit since its functionality depends
# on the chosen arbitration algorithm.

def test_basic( cmdline_opts ):

  th = TestHarness()

  msgs = [
    #           src  dest opaq  payload
    NetMsgType( 1,   0,   0x11, 0x11111111 ),
    NetMsgType( 2,   0,   0x12, 0x12121212 ),
    NetMsgType( 0,   0,   0x10, 0x10101010 ),
  ]

  th.set_param("top.srcs[0].construct", msgs=[ m for m in msgs if m.src == 0 ] )
  th.set_param("top.srcs[1].construct", msgs=[ m for m in msgs if m.src == 1 ] )
  th.set_param("top.srcs[2].construct", msgs=[ m for m in msgs if m.src == 2 ] )
  th.set_param("top.sink.construct", msgs=msgs  )

  th.elaborate()

  run_sim( th, cmdline_opts, duts=['sunit'] )

#-------------------------------------------------------------------------
# Test Cases: Very Simple
#-------------------------------------------------------------------------
# These are examples of a simple tests using a test case table. These
# tests may not be valid depending on your arbitration algorithm. You are
# free to change these tests. We will not test your switch unit since its
# functionality depends on the chosen arbitration algorithm.

one = [
  #           src  dest opaq  payload
  NetMsgType( 0,   0,   0x10, 0x10101010 ),
]

three = [
  #           src  dest opaq  payload
  NetMsgType( 1,   2,   0x11, 0x11111111 ),
  NetMsgType( 2,   1,   0x12, 0x12121212 ),
  NetMsgType( 0,   3,   0x10, 0x10101010 ),
]

three_diff_dest = [
  #           src  dest opaq  payload
  NetMsgType( 1,   2,   0x11, 0x11111111 ),
  NetMsgType( 2,   1,   0x12, 0x12121212 ),
  NetMsgType( 0,   3,   0x10, 0x10101010 ),
]

#-------------------------------------------------------------------------
# Test Cases: Round-Robin
#-------------------------------------------------------------------------

# Test round-robin priority 
round_robin1 = [
    #           src  dest opaq  payload
    NetMsgType( 0,   0,   0x10, 0x10101010 ),
    NetMsgType( 2,   0,   0x11, 0x11111111 ),
    NetMsgType( 1,   0,   0x12, 0x12121212 ),

    NetMsgType( 0,   0,   0x13, 0x13131313 ),
    NetMsgType( 1,   0,   0x14, 0x14141414 ),
    NetMsgType( 2,   0,   0x15, 0x15151515 ),

    NetMsgType( 2,   0,   0x16, 0x16161616 ),
    NetMsgType( 0,   0,   0x17, 0x17171717 ),
    NetMsgType( 1,   0,   0x18, 0x18181818 ),
]

# Test if priority is switched after one input finishes
round_robin2 = [
    #           src  dest opaq  payload
    NetMsgType( 0,   0,   0x10, 0x10101010 ),
    NetMsgType( 2,   0,   0x12, 0x12121212 ),
    NetMsgType( 1,   0,   0x14, 0x14141414 ),
    NetMsgType( 2,   0,   0x15, 0x15151515 ),
]

round_robin3 = [
    #           src  dest opaq  payload
    NetMsgType( 2,   0,   0x10, 0x10101010 ),
    NetMsgType( 2,   0,   0x11, 0x11111111 ),
    NetMsgType( 2,   0,   0x12, 0x12121212 ),

    NetMsgType( 1,   0,   0x10, 0x10101010 ),
    NetMsgType( 1,   0,   0x11, 0x11111111 ),
    NetMsgType( 1,   0,   0x12, 0x12121212 ),

    NetMsgType( 0,   0,   0x10, 0x10101010 ),
    NetMsgType( 0,   0,   0x11, 0x11111111 ),
    NetMsgType( 0,   0,   0x12, 0x12121212 ),
]

#-------------------------------------------------------------------------
# Test Cases: Stream from One Port
#-------------------------------------------------------------------------

stream_from_src1 = []
for i in range(20):
  msg = NetMsgType( src=1, dest=0, opaque=i, payload=i )
  stream_from_src1.append( msg )

stream_from_src2 = []
for i in range(20):
  msg = NetMsgType( src=2, dest=0, opaque=i, payload=i )
  stream_from_src2.append( msg )

stream_from_src0 = []
for i in range(20):
  msg = NetMsgType( src=0, dest=0, opaque=i, payload=i )
  stream_from_src0.append( msg )

#-------------------------------------------------------------------------
# Test Cases: Stream from Two Ports
#-------------------------------------------------------------------------

# Input stream sequence: 1 -> 2
stream_from_two12 = []

for i in range(20):
  msg = NetMsgType( src=1, dest=0, opaque=i, payload=i )
  stream_from_two12.append( msg )

for i in range(20):
  msg = NetMsgType( src=2, dest=0, opaque=i, payload=i )
  stream_from_two12.append( msg )

# Input stream sequence: 2 -> 1
stream_from_two21 = []

for i in range(20):
  msg = NetMsgType( src=2, dest=0, opaque=i, payload=i )
  stream_from_two21.append( msg )

for i in range(20):
  msg = NetMsgType( src=1, dest=0, opaque=i, payload=i )
  stream_from_two21.append( msg )

# Input stream sequence: 0 -> 2 
stream_from_two02 = []

for i in range(20):
  msg = NetMsgType( src=0, dest=0, opaque=i, payload=i )
  stream_from_two02.append( msg )

for i in range(20):
  msg = NetMsgType( src=2, dest=0, opaque=i, payload=i )
  stream_from_two02.append( msg )

# Input stream sequence: 2 -> 0
stream_from_two20 = []

for i in range(20):
  msg = NetMsgType( src=2, dest=0, opaque=i, payload=i )
  stream_from_two20.append( msg )

for i in range(20):
  msg = NetMsgType( src=0, dest=0, opaque=i, payload=i )
  stream_from_two20.append( msg )

#-------------------------------------------------------------------------
# Test Cases: Stream from All Ports
#-------------------------------------------------------------------------

# Input stream sequence: 1 -> 2 -> 0
stream_from_all1 = []

for i in range(16):
  msg = NetMsgType( src=1, dest=0, opaque=0x00+i, payload=0x0000+i )
  stream_from_all1.append(msg)

for i in range(16):
  msg = NetMsgType( src=2, dest=0, opaque=0x00+i, payload=0x0000+i )
  stream_from_all1.append(msg)

for i in range(16):
  msg = NetMsgType( src=0, dest=0, opaque=0x00+i, payload=0x0000+i )
  stream_from_all1.append(msg)

# Input stream sequence: 2 -> 0 -> 1
stream_from_all2 = []

for i in range(16):
  msg = NetMsgType( src=2, dest=0, opaque=0x00+i, payload=0x0000+i )
  stream_from_all2.append(msg)  

for i in range(16):
  msg = NetMsgType( src=0, dest=0, opaque=0x00+i, payload=0x0000+i )
  stream_from_all2.append(msg)

for i in range(16):
  msg = NetMsgType( src=1, dest=0, opaque=0x00+i, payload=0x0000+i )
  stream_from_all2.append(msg)

# Input stream sequence: 2 -> 1 -> 0
stream_from_all3 = []

for i in range(16):
  msg = NetMsgType( src=2, dest=0, opaque=0x00+i, payload=0x0000+i )
  stream_from_all3.append(msg)

for i in range(16):
  msg = NetMsgType( src=1, dest=0, opaque=0x00+i, payload=0x0000+i )
  stream_from_all3.append(msg)

for i in range(16):
  msg = NetMsgType( src=0, dest=0, opaque=0x00+i, payload=0x0000+i )
  stream_from_all3.append(msg)

# Input stream sequence: 0 -> 1 -> 2
stream_from_all4 = []

for i in range(16):
  msg = NetMsgType( src=0, dest=0, opaque=0x00+i, payload=0x0000+i )
  stream_from_all4.append(msg)

for i in range(16):
  msg = NetMsgType( src=1, dest=0, opaque=0x00+i, payload=0x0000+i )
  stream_from_all4.append(msg)

for i in range(16):
  msg = NetMsgType( src=2, dest=0, opaque=0x00+i, payload=0x0000+i )
  stream_from_all4.append(msg)

#-------------------------------------------------------------------------
# Random Test Cases
#-------------------------------------------------------------------------

# Random source: random messages from specific source

random_src0 = []
random_src1 = []
random_src2 = []

for i in range(20):
    random_src0.append(NetMsgType(0, 0, random.randint(0,0xff), random.randint(0,0xffffffff)))
    random_src1.append(NetMsgType(1, 0, random.randint(0,0xff), random.randint(0,0xffffffff)))
    random_src2.append(NetMsgType(2, 0, random.randint(0,0xff), random.randint(0,0xffffffff)))

# Fully random: random messages from all sources

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
  (                                "msgs           src_delay sink_delay delay_mode"),
  [ "one",                          one,                  0,  0,  'fixed'  ],
  [ "three",                        three,                0,  0,  'fixed'  ],
  [ "three_diff_dest",              three_diff_dest,      0,  0,  'fixed'  ],
  
  [ "round_robin1",                 round_robin1,         0,  0,  'fixed'  ],
  [ "round_robin2",                 round_robin2,         0,  0,  'fixed'  ],
  [ "round_robin3",                 round_robin3,         0,  0,  'fixed'  ],

  [ "stream_from_src0",             stream_from_src0,     0,  0,  'fixed'  ],
  [ "stream_from_src1",             stream_from_src1,     0,  0,  'fixed'  ],
  [ "stream_from_src2",             stream_from_src2,     0,  0,  'fixed'  ],

  [ "stream_from_two12",            stream_from_two12,    0,  0,  'fixed'  ],
  [ "stream_from_two21",            stream_from_two21,    0,  0,  'fixed'  ],
  [ "stream_from_two02",            stream_from_two02,    0,  0,  'fixed'  ],
  [ "stream_from_two20",            stream_from_two20,    0,  0,  'fixed'  ],

  [ "stream_from_all1",             stream_from_all1,     0,  0,  'fixed'  ],
  [ "stream_from_all2",             stream_from_all2,     0,  0,  'fixed'  ],
  [ "stream_from_all3",             stream_from_all3,     0,  0,  'fixed'  ],
  [ "stream_from_all4",             stream_from_all4,     0,  0,  'fixed'  ],
  
  [ "random_src0",                  random_src0,          0,  0,  'fixed'  ],
  [ "random_src1",                  random_src1,          0,  0,  'fixed'  ],
  [ "random_src2",                  random_src2,          0,  0,  'fixed'  ],
  [ "fully_random",                 fully_random,         0,  0,  'fixed'  ],

  [ "stream_from_src0_fixed_0x2",   stream_from_src0,     0,  2,  'fixed'  ],
  [ "stream_from_src0_fixed_2x0",   stream_from_src0,     2,  0,  'fixed'  ],
  [ "stream_from_src1_fixed_0x2",   stream_from_src1,     0,  2,  'fixed'  ],
  [ "stream_from_src1_fixed_2x0",   stream_from_src1,     2,  0,  'fixed'  ],
  [ "stream_from_src2_fixed_0x2",   stream_from_src2,     0,  2,  'fixed'  ],
  [ "stream_from_src2_fixed_2x0",   stream_from_src2,     2,  0,  'fixed'  ],
  [ "stream_from_two12_fixed_0x2",  stream_from_two12,    0,  2,  'fixed'  ],
  [ "stream_from_two12_fixed_2x0",  stream_from_two12,    2,  0,  'fixed'  ],
  [ "stream_from_all1_fixed_0x2",   stream_from_all1,     0,  2,  'fixed'  ],
  [ "stream_from_all1_fixed_2x0",   stream_from_all1,     2,  0,  'fixed'  ],
  [ "random_src0_fixed_0x2",        random_src0,          0,  2,  'fixed'  ],
  [ "random_src0_fixed_2x0",        random_src0,          2,  0,  'fixed'  ],
  [ "random_src1_fixed_0x2",        random_src1,          0,  2,  'fixed'  ],
  [ "random_src1_fixed_2x0",        random_src1,          2,  0,  'fixed'  ],
  [ "random_src2_fixed_0x2",        random_src2,          0,  2,  'fixed'  ],
  [ "random_src2_fixed_2x0",        random_src2,          2,  0,  'fixed'  ],
  [ "fully_random_fixed_0x2",       fully_random,         0,  2,  'fixed'  ],
  [ "fully_random_fixed_2x0",       fully_random,         2,  0,  'fixed'  ],

  [ "stream_from_src0_rand_delay",  stream_from_src0,     3, 20,  'random' ],
  [ "stream_from_src1_rand_delay",  stream_from_src1,     3, 20,  'random' ],
  [ "stream_from_src2_rand_delay",  stream_from_src2,     3, 20,  'random' ],
  [ "stream_from_two12_rand_delay", stream_from_two12,    3, 20,  'random' ],
  [ "stream_from_all1_rand_delay",  stream_from_all1,     3, 20,  'random' ],
  [ "stream_from_all2_rand_delay",  stream_from_all2,     3, 20,  'random' ],
  [ "stream_from_all3_rand_delay",  stream_from_all3,     3, 20,  'random' ],
  [ "stream_from_all4_rand_delay",  stream_from_all4,     3, 20,  'random' ],
  [ "fully_random_rand_delay",      fully_random,         3, 20,  'random' ],

])

#-------------------------------------------------------------------------
# test
#-------------------------------------------------------------------------

# Determine expected message order with round-robin arbitration
def determine_msg_order(msgs):
    
    if not msgs:
        return []
        
    # Group messages by source
    msgs_by_src = {
        0: [m for m in msgs if m.src == 0],
        1: [m for m in msgs if m.src == 1],
        2: [m for m in msgs if m.src == 2]
    }
    
    result = []
    last_src = 0  # Start with checking from source 1
    
    # Continue until all messages are processed
    while any(msgs_by_src.values()):
        # Check sources in round-robin order from 1 to 3
        for offset in range(1, 4):
            src = (last_src + offset) % 3
            # If the source has messages, pop the first message and append it to the result
            if msgs_by_src[src]:
                result.append(msgs_by_src[src].pop(0))
                last_src = src
                break
                
    return result

@pytest.mark.parametrize( **test_case_table )
def test( test_params, cmdline_opts ):
  
  th = TestHarness()

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

  # Determine expected message order based on round-robin arbitration
  expected_msgs = determine_msg_order(test_params.msgs)

  th.set_param("top.sink.construct",
      msgs                = expected_msgs,
      interval_delay_mode = test_params.delay_mode,
      initial_delay       = test_params.sink_delay,
      interval_delay      = test_params.sink_delay )

  th.elaborate()

  run_sim( th, cmdline_opts, duts=['sunit'] )
