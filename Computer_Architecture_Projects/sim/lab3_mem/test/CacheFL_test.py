#=========================================================================
# CacheFL_test.py
#=========================================================================

import pytest

from random import seed, randint

from pymtl3 import *
from pymtl3.stdlib.mem        import MemMsgType
from pymtl3.stdlib.test_utils import mk_test_case_table

from lab3_mem.test.harness import req, resp, run_test
from lab3_mem.CacheFL      import CacheFL

seed(0xa4e28cc2)

#-------------------------------------------------------------------------
# cmp_wo_test_field
#-------------------------------------------------------------------------
# The test field in the cache response is used to indicate if the
# corresponding memory access resulted in a hit or a miss. However, the
# FL model always sets the test field to zero since it does not track
# hits/misses. So we need to do something special to ignore the test
# field when using the FL model. To do this, we can pass in a specialized
# comparison function to the StreamSinkFL.

def cmp_wo_test_field( msg, ref ):

  if msg.type_ != ref.type_:
    return False

  if msg.len != ref.len:
    return False

  if msg.opaque != msg.opaque:
    return False

  if ref.data != msg.data:
    return False

  # do not check the test field

  return True

#-------------------------------------------------------------------------
# Data
#-------------------------------------------------------------------------
# These functions are used to specify the address/data to preload into
# the main memory before running a test.

# 64B of sequential data

def data_64B():
  return [
    # addr      data
    0x00001000, 0x000c0ffe,
    0x00001004, 0x10101010,
    0x00001008, 0x20202020,
    0x0000100c, 0x30303030,
    0x00001010, 0x40404040,
    0x00001014, 0x50505050,
    0x00001018, 0x60606060,
    0x0000101c, 0x70707070,
    0x00001020, 0x80808080,
    0x00001024, 0x90909090,
    0x00001028, 0xa0a0a0a0,
    0x0000102c, 0xb0b0b0b0,
    0x00001030, 0xc0c0c0c0,
    0x00001034, 0xd0d0d0d0,
    0x00001038, 0xe0e0e0e0,
    0x0000103c, 0xf0f0f0f0,
  ]

# 512B of sequential data

def data_512B():
  data = []
  for i in range(128):
    data.extend([0x00001000+i*4,0xabcd1000+i*4])
  return data

# 8 KB of sequential data

def data_8KB():
  data = []
  for i in range(2048):
    data.extend([0x00001000+i*4,0xabcd1000+i*4])
  return data

# 1024B of random data

def data_random():
  seed(0xdeadbeef)
  data = []
  for i in range(256):
    data.extend([0x00001000+i*4,randint(0,0xffffffff)])
  return data

def read_data1():
  return [
    # addr      data (in int)
    0x00001000, 0x000c0ffe,
    0x00001004, 0x000c0fff,
    0x00001010, 0x10101010,
    0x00001020, 0x01010101,
    0x00002000, 0x001c0ffe,
    0x00002010, 0x20202020,
    0x00002014, 0x20202021,
    0x00002020, 0x02020202,
    0x00003000, 0x010c0ffe,
    0x00003010, 0x30303030,
    0x00003020, 0x03030303,
    0x00003024, 0x03030304,
    0x00004000, 0x010c0ffe,
    0x00004010, 0x40404040,
    0x00004020, 0x04040404,
  ]

def read_data2():
  return [
    # addr      data (in int)
    0x00000000, 0xabababab,
    0x00000004, 0x01010101,
    0x00000008, 0x12345678,
    0x0000000c, 0xcd00cd00,
    0x00000100, 0x11c0ffee,
    0x00000140, 0x00c0ffee,
    0x00000200, 0xffffffff,
    0x00000400, 0x10203040,
    0x00000840, 0xdeadbeef,
    0x00000e40, 0xabcdef12,
  ]
#----------------------------------------------------------------------
# Test Cases for Write Init
#----------------------------------------------------------------------

# Just make sure a single write init goes through the memory system (uses None)

def write_init_word():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x0, 0x1000, 0, 0xdeadbeef ), resp( 'in', 0x0, 0,   0,  0    ),
  ]

# Write init a word multiple times, also tests opaque bits (uses None)

def write_init_multi_word():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x0, 0x1000, 0, 0xdeadbeef ), resp( 'in', 0x0, 0,   0,  0    ),
    req( 'in', 0x1, 0x1000, 0, 0xdeadbeef ), resp( 'in', 0x1, 0,   0,  0    ),
    req( 'in', 0x2, 0x1000, 0, 0xdeadbeef ), resp( 'in', 0x2, 0,   0,  0    ),
    req( 'in', 0x3, 0x1000, 0, 0xdeadbeef ), resp( 'in', 0x3, 0,   0,  0    ),
  ]

# Use write inits for each word in a cache line (uses None)

def write_init_cacheline():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x0, 0x1000, 0, 0x01010101 ), resp( 'in', 0x0, 0,   0,  0    ),
    req( 'in', 0x1, 0x1004, 0, 0x02020202 ), resp( 'in', 0x1, 0,   0,  0    ),
    req( 'in', 0x2, 0x1008, 0, 0x03030303 ), resp( 'in', 0x2, 0,   0,  0    ),
    req( 'in', 0x3, 0x100c, 0, 0x04040404 ), resp( 'in', 0x3, 0,   0,  0    ),
  ]

# Write init one word in each cacheline in half the cache. For the direct
# mapped cache, this will write the first half of all the sets. For the
# set associative cache, this will write all of the sets in the first
# way. (uses None)

def write_init_multi_cacheline():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x0, 0x0000, 0, 0x00000000 ), resp( 'in', 0x0, 0,   0,  0    ),
    req( 'in', 0x1, 0x1010, 0, 0x01010101 ), resp( 'in', 0x1, 0,   0,  0    ),
    req( 'in', 0x2, 0x2020, 0, 0x02020202 ), resp( 'in', 0x2, 0,   0,  0    ),
    req( 'in', 0x3, 0x3030, 0, 0x03030303 ), resp( 'in', 0x3, 0,   0,  0    ),
    req( 'in', 0x4, 0x4040, 0, 0x04040404 ), resp( 'in', 0x4, 0,   0,  0    ),
    req( 'in', 0x5, 0x5050, 0, 0x05050505 ), resp( 'in', 0x5, 0,   0,  0    ),
    req( 'in', 0x6, 0x6060, 0, 0x06060606 ), resp( 'in', 0x6, 0,   0,  0    ),
    req( 'in', 0x7, 0x7070, 0, 0x07070707 ), resp( 'in', 0x7, 0,   0,  0    ),
  ]

#----------------------------------------------------------------------
# Test Cases for Read Hits - read hit path for clean lines
#----------------------------------------------------------------------

# Single read hit (uses None)

def read_hit_word():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x0, 0x1000, 0, 0xdeadbeef ), resp( 'in', 0x0, 0,   0,  0          ),
    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xdeadbeef ),
  ]

# Read same word multiple times, also tests opaque bits (uses None)

def read_hit_multi_word():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x0, 0x1000, 0, 0xdeadbeef ), resp( 'in', 0x0, 0,   0,  0    ),

    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xdeadbeef ),
    req( 'rd', 0x1, 0x1000, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xdeadbeef ),
    req( 'rd', 0x2, 0x1000, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xdeadbeef ),
    req( 'rd', 0x3, 0x1000, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xdeadbeef ),
  ]

# Read every word in cache line, read the words in the regular order (uses None)

def read_hit_cacheline1():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x0, 0x1000, 0, 0x01010101 ), resp( 'in', 0x0, 0,   0,  0    ),
    req( 'in', 0x1, 0x1004, 0, 0x02020202 ), resp( 'in', 0x1, 0,   0,  0    ),
    req( 'in', 0x2, 0x1008, 0, 0x03030303 ), resp( 'in', 0x2, 0,   0,  0    ),
    req( 'in', 0x3, 0x100c, 0, 0x04040404 ), resp( 'in', 0x3, 0,   0,  0    ),

    req( 'rd', 0x4, 0x1000, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x01010101 ),
    req( 'rd', 0x5, 0x1004, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x02020202 ),
    req( 'rd', 0x6, 0x1008, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x03030303 ),
    req( 'rd', 0x7, 0x100c, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x04040404 ),
  ]

# Read every word in cache line, read the words in the irregular order (uses None)

def read_hit_cacheline2():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x1, 0x0004, 0, 0x02020202 ), resp( 'in', 0x1, 0,   0,  0    ),
    req( 'in', 0x0, 0x0000, 0, 0x01010101 ), resp( 'in', 0x0, 0,   0,  0    ),
    req( 'in', 0x3, 0x000c, 0, 0x04040404 ), resp( 'in', 0x3, 0,   0,  0    ),
    req( 'in', 0x2, 0x0008, 0, 0x03030303 ), resp( 'in', 0x2, 0,   0,  0    ),
  
    req( 'rd', 0x7, 0x000c, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x04040404 ),
    req( 'rd', 0x5, 0x0004, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x02020202 ),
    req( 'rd', 0x4, 0x0000, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x01010101 ),   
    req( 'rd', 0x6, 0x0008, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x03030303 ),
    
  ]

# Use the same word offset from each cacheline (uses None)

def read_hit_multi_cacheline1():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x0, 0x0000, 0, 0x00000000 ), resp( 'in', 0x0, 0,   0,  0          ),
    req( 'in', 0x1, 0x1010, 0, 0x01010101 ), resp( 'in', 0x1, 0,   0,  0          ),
    req( 'in', 0x2, 0x2020, 0, 0x02020202 ), resp( 'in', 0x2, 0,   0,  0          ),
    req( 'in', 0x3, 0x3030, 0, 0x03030303 ), resp( 'in', 0x3, 0,   0,  0          ),
    req( 'in', 0x4, 0x4040, 0, 0x04040404 ), resp( 'in', 0x4, 0,   0,  0          ),
    req( 'in', 0x5, 0x5050, 0, 0x05050505 ), resp( 'in', 0x5, 0,   0,  0          ),
    req( 'in', 0x6, 0x6060, 0, 0x06060606 ), resp( 'in', 0x6, 0,   0,  0          ),
    req( 'in', 0x7, 0x7070, 0, 0x07070707 ), resp( 'in', 0x7, 0,   0,  0          ),

    req( 'rd', 0x0, 0x0000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x00000000 ),
    req( 'rd', 0x1, 0x1010, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0x01010101 ),
    req( 'rd', 0x2, 0x2020, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x02020202 ),
    req( 'rd', 0x3, 0x3030, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x03030303 ),
    req( 'rd', 0x4, 0x4040, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x04040404 ),
    req( 'rd', 0x5, 0x5050, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x05050505 ),
    req( 'rd', 0x6, 0x6060, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x06060606 ),
    req( 'rd', 0x7, 0x7070, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x07070707 ),
  ]

# Use different word offsets from each cacheline (uses None)

def read_hit_multi_cacheline2():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x1, 0x0000, 0, 0x17721169 ), resp( 'in', 0x1, 0,   0,  0          ),
    req( 'in', 0x3, 0x1014, 0, 0xab00cd00 ), resp( 'in', 0x3, 0,   0,  0          ),
    req( 'in', 0x5, 0x2028, 0, 0x12345678 ), resp( 'in', 0x5, 0,   0,  0          ),
    req( 'in', 0x7, 0x303c, 0, 0x24237181 ), resp( 'in', 0x7, 0,   0,  0          ),
    req( 'in', 0x0, 0x4040, 0, 0x07721169 ), resp( 'in', 0x0, 0,   0,  0          ),
    req( 'in', 0x2, 0x5054, 0, 0xcb00cd00 ), resp( 'in', 0x2, 0,   0,  0          ),
    req( 'in', 0x4, 0x6068, 0, 0x22345678 ), resp( 'in', 0x4, 0,   0,  0          ),
    req( 'in', 0x6, 0x707c, 0, 0x34237181 ), resp( 'in', 0x6, 0,   0,  0          ),
    
    req( 'rd', 0x0, 0x0000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x17721169 ),
    req( 'rd', 0x1, 0x1014, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xab00cd00 ),
    req( 'rd', 0x2, 0x2028, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x12345678 ),
    req( 'rd', 0x3, 0x303c, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x24237181 ),
    req( 'rd', 0x4, 0x4040, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x07721169 ),
    req( 'rd', 0x5, 0x5054, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xcb00cd00 ),
    req( 'rd', 0x6, 0x6068, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x22345678 ),
    req( 'rd', 0x7, 0x707c, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x34237181 ),
  ]

#----------------------------------------------------------------------
# Test Cases for Write Hits- write/read hit path for clean/dirty lines
#----------------------------------------------------------------------

# Single write hit to one word (uses None), 
# write hit for clean lines, read hit for dirty lines

def write_hit_word():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x0, 0x1000, 0, 0xdeadbeef ), resp( 'in', 0x0, 0,   0,  0          ),
    req( 'wr', 0x0, 0x1000, 0, 0xcafecafe ), resp( 'wr', 0x0, 1,   0,  0          ),
    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xcafecafe ),
  ]

# Write/read word multiple times, also tests opaque bits (uses None), 
# write hit for dirty lines, read hit for dirty lines

def write_hit_multi_word1():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x0, 0x1000, 0, 0xdeadbeef ), resp( 'in', 0x0, 0,   0,  0          ),

    req( 'wr', 0x1, 0x1000, 0, 0x01010101 ), resp( 'wr', 0x1, 1,   0,  0          ),
    req( 'rd', 0x2, 0x1000, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x01010101 ),
    req( 'wr', 0x3, 0x1000, 0, 0x02020202 ), resp( 'wr', 0x3, 1,   0,  0          ),
    req( 'rd', 0x4, 0x1000, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x02020202 ),
    req( 'wr', 0x5, 0x1000, 0, 0x03030303 ), resp( 'wr', 0x5, 1,   0,  0          ),
    req( 'rd', 0x6, 0x1000, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x03030303 ),
    req( 'wr', 0x7, 0x1000, 0, 0x04040404 ), resp( 'wr', 0x7, 1,   0,  0          ),
    req( 'rd', 0x8, 0x1000, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0x04040404 ),
  ]

# Write/read word multiple times, also tests opaque bits (uses None), 
# write hit for dirty lines, read hit for dirty lines

def write_hit_multi_word2():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x0, 0x1000, 0, 0xdeadbeef ), resp( 'in', 0x0, 0,   0,  0          ),
    req( 'in', 0x1, 0x1010, 0, 0xbeefdead ), resp( 'in', 0x1, 0,   0,  0          ),

    req( 'wr', 0x1, 0x1000, 0, 0x01010101 ), resp( 'wr', 0x1, 1,   0,  0          ),
    req( 'rd', 0x2, 0x1000, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x01010101 ),
    req( 'wr', 0x1, 0x1010, 0, 0x05050505 ), resp( 'wr', 0x1, 1,   0,  0          ),
    req( 'rd', 0x2, 0x1010, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x05050505 ),
    req( 'wr', 0x3, 0x1000, 0, 0x02020202 ), resp( 'wr', 0x3, 1,   0,  0          ),
    req( 'rd', 0x4, 0x1000, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x02020202 ),
    req( 'wr', 0x3, 0x1010, 0, 0x06060606 ), resp( 'wr', 0x3, 1,   0,  0          ),
    req( 'rd', 0x4, 0x1010, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x06060606 ),
    req( 'wr', 0x5, 0x1000, 0, 0x03030303 ), resp( 'wr', 0x5, 1,   0,  0          ),
    req( 'rd', 0x6, 0x1000, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x03030303 ),
    req( 'wr', 0x5, 0x1010, 0, 0x07070707 ), resp( 'wr', 0x5, 1,   0,  0          ),
    req( 'rd', 0x6, 0x1010, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x07070707 ),
    req( 'wr', 0x7, 0x1000, 0, 0x04040404 ), resp( 'wr', 0x7, 1,   0,  0          ),
    req( 'rd', 0x8, 0x1000, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0x04040404 ),
    req( 'wr', 0x7, 0x1010, 0, 0x08080808 ), resp( 'wr', 0x7, 1,   0,  0          ),
    req( 'rd', 0x8, 0x1010, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0x08080808 ),
  ]


# Write/read word multiple times, also tests opaque bits (uses None),
# write hit for clean & dirty lines, read hit for dirty lines

def write_hit_multi_word2():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x0, 0x1000, 0, 0xdeadbeef ), resp( 'in', 0x0, 0,   0,  0          ),
    req( 'in', 0x1, 0x1010, 0, 0xbeefdead ), resp( 'in', 0x1, 0,   0,  0          ),

    req( 'wr', 0x1, 0x1000, 0, 0x01010101 ), resp( 'wr', 0x1, 1,   0,  0          ),
    req( 'rd', 0x2, 0x1000, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x01010101 ),
    req( 'wr', 0x1, 0x1010, 0, 0x05050505 ), resp( 'wr', 0x1, 1,   0,  0          ),
    req( 'rd', 0x2, 0x1010, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x05050505 ),
    req( 'wr', 0x3, 0x1000, 0, 0x02020202 ), resp( 'wr', 0x3, 1,   0,  0          ),
    req( 'rd', 0x4, 0x1000, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x02020202 ),
    req( 'wr', 0x3, 0x1010, 0, 0x06060606 ), resp( 'wr', 0x3, 1,   0,  0          ),
    req( 'rd', 0x4, 0x1010, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x06060606 ),
    req( 'wr', 0x5, 0x1000, 0, 0x03030303 ), resp( 'wr', 0x5, 1,   0,  0          ),
    req( 'rd', 0x6, 0x1000, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x03030303 ),
    req( 'wr', 0x5, 0x1010, 0, 0x07070707 ), resp( 'wr', 0x5, 1,   0,  0          ),
    req( 'rd', 0x6, 0x1010, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x07070707 ),
    req( 'wr', 0x7, 0x1000, 0, 0x04040404 ), resp( 'wr', 0x7, 1,   0,  0          ),
    req( 'rd', 0x8, 0x1000, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0x04040404 ),
    req( 'wr', 0x7, 0x1010, 0, 0x08080808 ), resp( 'wr', 0x7, 1,   0,  0          ),
    req( 'rd', 0x8, 0x1010, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0x08080808 ),
  ]

# Write/read every word in cache line, (uses None)
# write the word same as init, init/read/write the words in the regular order, write hit for clean & dirty lines, read hit for dirty lines

def write_hit_cacheline1():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x0, 0x1000, 0, 0x01010101 ), resp( 'in', 0x0, 0,   0,  0          ),
    req( 'in', 0x0, 0x1004, 0, 0x02020202 ), resp( 'in', 0x0, 0,   0,  0          ),
    req( 'in', 0x0, 0x1008, 0, 0x03030303 ), resp( 'in', 0x0, 0,   0,  0          ),
    req( 'in', 0x0, 0x100c, 0, 0x04040404 ), resp( 'in', 0x0, 0,   0,  0          ),

    req( 'wr', 0x1, 0x1000, 0, 0x01010101 ), resp( 'wr', 0x1, 1,   0,  0          ),
    req( 'wr', 0x3, 0x1004, 0, 0x02020202 ), resp( 'wr', 0x3, 1,   0,  0          ),
    req( 'wr', 0x5, 0x1008, 0, 0x03030303 ), resp( 'wr', 0x5, 1,   0,  0          ),
    req( 'wr', 0x7, 0x100c, 0, 0x04040404 ), resp( 'wr', 0x7, 1,   0,  0          ),

    req( 'rd', 0x2, 0x1000, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x01010101 ),
    req( 'rd', 0x4, 0x1004, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x02020202 ),
    req( 'rd', 0x6, 0x1008, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x03030303 ),
    req( 'rd', 0x8, 0x100c, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0x04040404 ),
  ]

# Write/read every word in cache line (uses None), 
# write the word same as init, init/read/write the words in the irregular order, write hit for clean & dirty lines, read hit for dirty lines

def write_hit_cacheline2():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x1, 0x0004, 0, 0x02020202 ), resp( 'in', 0x1, 0,   0,  0          ),
    req( 'in', 0x0, 0x0000, 0, 0x01010101 ), resp( 'in', 0x0, 0,   0,  0          ),
    req( 'in', 0x3, 0x000c, 0, 0x04040404 ), resp( 'in', 0x3, 0,   0,  0          ),
    req( 'in', 0x2, 0x0008, 0, 0x03030303 ), resp( 'in', 0x2, 0,   0,  0          ),

    req( 'wr', 0x1, 0x0000, 0, 0x01010101 ), resp( 'wr', 0x1, 1,   0,  0          ),
    req( 'wr', 0x3, 0x0004, 0, 0x02020202 ), resp( 'wr', 0x3, 1,   0,  0          ),
    req( 'wr', 0x5, 0x0008, 0, 0x03030303 ), resp( 'wr', 0x5, 1,   0,  0          ),
    req( 'wr', 0x7, 0x000c, 0, 0x04040404 ), resp( 'wr', 0x7, 1,   0,  0          ),
  
    req( 'rd', 0x7, 0x000c, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x04040404 ),
    req( 'rd', 0x5, 0x0004, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x02020202 ),
    req( 'rd', 0x4, 0x0000, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x01010101 ),   
    req( 'rd', 0x6, 0x0008, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x03030303 ),
  ]

# Write/read every word in cache line (uses None),
# write the word different from init, init/read/write the words in the irregular order, write hit for clean & dirty lines, read hit for dirty lines

def write_hit_cacheline3():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x0, 0x1008, 0, 0x03030303 ), resp( 'in', 0x0, 0,   0,  0          ),
    req( 'in', 0x0, 0x1000, 0, 0x01010101 ), resp( 'in', 0x0, 0,   0,  0          ),
    req( 'in', 0x0, 0x1004, 0, 0x02020202 ), resp( 'in', 0x0, 0,   0,  0          ),
    req( 'in', 0x0, 0x100c, 0, 0x04040404 ), resp( 'in', 0x0, 0,   0,  0          ),

    req( 'wr', 0x7, 0x100c, 0, 0x14040404 ), resp( 'wr', 0x7, 1,   0,  0          ),
    req( 'wr', 0x1, 0x1000, 0, 0x11010101 ), resp( 'wr', 0x1, 1,   0,  0          ),
    req( 'wr', 0x3, 0x1004, 0, 0x12020202 ), resp( 'wr', 0x3, 1,   0,  0          ),
    req( 'wr', 0x5, 0x1008, 0, 0x13030303 ), resp( 'wr', 0x5, 1,   0,  0          ),
    
    req( 'rd', 0x4, 0x1004, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x12020202 ),
    req( 'rd', 0x6, 0x1008, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x13030303 ),
    req( 'rd', 0x2, 0x1000, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x11010101 ),
    req( 'rd', 0x8, 0x100c, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0x14040404 ),
  ]

# Use the same word offset to write/read one word from each cacheline(uses None), 
# init/read/write the words in the regular order, write hit for clean lines, read hit for dirty lines

def write_hit_multi_cacheline1():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x0, 0x0000, 0, 0x00000000 ), resp( 'in', 0x0, 0,   0,  0          ),
    req( 'in', 0x1, 0x1010, 0, 0x01010101 ), resp( 'in', 0x1, 0,   0,  0          ),
    req( 'in', 0x2, 0x2020, 0, 0x02020202 ), resp( 'in', 0x2, 0,   0,  0          ),
    req( 'in', 0x3, 0x3030, 0, 0x03030303 ), resp( 'in', 0x3, 0,   0,  0          ),
    req( 'in', 0x4, 0x4040, 0, 0x04040404 ), resp( 'in', 0x4, 0,   0,  0          ),
    req( 'in', 0x5, 0x5050, 0, 0x05050505 ), resp( 'in', 0x5, 0,   0,  0          ),
    req( 'in', 0x6, 0x6060, 0, 0x06060606 ), resp( 'in', 0x6, 0,   0,  0          ),
    req( 'in', 0x7, 0x7070, 0, 0x07070707 ), resp( 'in', 0x7, 0,   0,  0          ),

    req( 'wr', 0x0, 0x0000, 0, 0x10101010 ), resp( 'wr', 0x0, 1,   0,  0          ),
    req( 'wr', 0x1, 0x1010, 0, 0x11111111 ), resp( 'wr', 0x1, 1,   0,  0          ),
    req( 'wr', 0x2, 0x2020, 0, 0x12121212 ), resp( 'wr', 0x2, 1,   0,  0          ),
    req( 'wr', 0x3, 0x3030, 0, 0x13131313 ), resp( 'wr', 0x3, 1,   0,  0          ),
    req( 'wr', 0x4, 0x4040, 0, 0x14141414 ), resp( 'wr', 0x4, 1,   0,  0          ),
    req( 'wr', 0x5, 0x5050, 0, 0x15151515 ), resp( 'wr', 0x5, 1,   0,  0          ),
    req( 'wr', 0x6, 0x6060, 0, 0x16161616 ), resp( 'wr', 0x6, 1,   0,  0          ),
    req( 'wr', 0x7, 0x7070, 0, 0x17171717 ), resp( 'wr', 0x7, 1,   0,  0          ),

    req( 'rd', 0x0, 0x0000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x10101010 ),
    req( 'rd', 0x1, 0x1010, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0x11111111 ),
    req( 'rd', 0x2, 0x2020, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x12121212 ),
    req( 'rd', 0x3, 0x3030, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x13131313 ),
    req( 'rd', 0x4, 0x4040, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x14141414 ),
    req( 'rd', 0x5, 0x5050, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x15151515 ),
    req( 'rd', 0x6, 0x6060, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x16161616 ),
    req( 'rd', 0x7, 0x7070, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x17171717 ),
  ]

# Use different word offsets to write/read one word from each cacheline(uses None), 
# init/read/write the words in the regular order, write hit for clean lines, read hit for dirty lines

def write_hit_multi_cacheline2():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x0, 0x0000, 0, 0x00000000 ), resp( 'in', 0x0, 0,   0,  0          ),
    req( 'in', 0x1, 0x1014, 0, 0x01010101 ), resp( 'in', 0x1, 0,   0,  0          ),
    req( 'in', 0x2, 0x2028, 0, 0x02020202 ), resp( 'in', 0x2, 0,   0,  0          ),
    req( 'in', 0x3, 0x303c, 0, 0x03030303 ), resp( 'in', 0x3, 0,   0,  0          ),
    req( 'in', 0x4, 0x4040, 0, 0x04040404 ), resp( 'in', 0x4, 0,   0,  0          ),
    req( 'in', 0x5, 0x5054, 0, 0x05050505 ), resp( 'in', 0x5, 0,   0,  0          ),
    req( 'in', 0x6, 0x6068, 0, 0x06060606 ), resp( 'in', 0x6, 0,   0,  0          ),
    req( 'in', 0x7, 0x707c, 0, 0x07070707 ), resp( 'in', 0x7, 0,   0,  0          ),

    req( 'wr', 0x1, 0x1014, 0, 0x11111111 ), resp( 'wr', 0x1, 1,   0,  0          ),
    req( 'wr', 0x2, 0x2028, 0, 0x12121212 ), resp( 'wr', 0x2, 1,   0,  0          ),
    req( 'wr', 0x0, 0x0000, 0, 0x10101010 ), resp( 'wr', 0x0, 1,   0,  0          ),
    req( 'wr', 0x5, 0x5054, 0, 0x15151515 ), resp( 'wr', 0x5, 1,   0,  0          ),
    req( 'wr', 0x6, 0x6068, 0, 0x16161616 ), resp( 'wr', 0x6, 1,   0,  0          ),
    req( 'wr', 0x4, 0x4040, 0, 0x14141414 ), resp( 'wr', 0x4, 1,   0,  0          ),
    req( 'wr', 0x3, 0x303c, 0, 0x13131313 ), resp( 'wr', 0x3, 1,   0,  0          ),
    req( 'wr', 0x7, 0x707c, 0, 0x17171717 ), resp( 'wr', 0x7, 1,   0,  0          ),

    req( 'rd', 0x2, 0x2028, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x12121212 ),
    req( 'rd', 0x3, 0x303c, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x13131313 ),
    req( 'rd', 0x0, 0x0000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x10101010 ),
    req( 'rd', 0x1, 0x1014, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0x11111111 ),
    req( 'rd', 0x6, 0x6068, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x16161616 ),
    req( 'rd', 0x7, 0x707c, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x17171717 ),
    req( 'rd', 0x4, 0x4040, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x14141414 ),
    req( 'rd', 0x5, 0x5054, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x15151515 ),
  ]

# Use different word offsets to write/read one word from each cacheline (uses None), init/read/write the words in the regular order,
# write hit first for clean lines, then read hit for dirty lines,
# then write hit for dirty lines, then read hit for dirty lines

def write_hit_multi_cacheline3():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x0, 0x0000, 0, 0x00000000 ), resp( 'in', 0x0, 0,   0,  0          ),
    req( 'in', 0x1, 0x1014, 0, 0x01010101 ), resp( 'in', 0x1, 0,   0,  0          ),
    req( 'in', 0x2, 0x2028, 0, 0x02020202 ), resp( 'in', 0x2, 0,   0,  0          ),
    req( 'in', 0x3, 0x303c, 0, 0x03030303 ), resp( 'in', 0x3, 0,   0,  0          ),
    req( 'in', 0x4, 0x4040, 0, 0x04040404 ), resp( 'in', 0x4, 0,   0,  0          ),
    req( 'in', 0x5, 0x5054, 0, 0x05050505 ), resp( 'in', 0x5, 0,   0,  0          ),
    req( 'in', 0x6, 0x6068, 0, 0x06060606 ), resp( 'in', 0x6, 0,   0,  0          ),
    req( 'in', 0x7, 0x707c, 0, 0x07070707 ), resp( 'in', 0x7, 0,   0,  0          ),

    req( 'wr', 0x1, 0x1014, 0, 0x01111111 ), resp( 'wr', 0x1, 1,   0,  0          ),
    req( 'wr', 0x2, 0x2028, 0, 0x02121212 ), resp( 'wr', 0x2, 1,   0,  0          ),
    req( 'wr', 0x0, 0x0000, 0, 0x00101010 ), resp( 'wr', 0x0, 1,   0,  0          ),
    req( 'wr', 0x5, 0x5054, 0, 0x05151515 ), resp( 'wr', 0x5, 1,   0,  0          ),
    req( 'wr', 0x6, 0x6068, 0, 0x06161616 ), resp( 'wr', 0x6, 1,   0,  0          ),
    req( 'wr', 0x4, 0x4040, 0, 0x04141414 ), resp( 'wr', 0x4, 1,   0,  0          ),
    req( 'wr', 0x3, 0x303c, 0, 0x03131313 ), resp( 'wr', 0x3, 1,   0,  0          ),
    req( 'wr', 0x7, 0x707c, 0, 0x07171717 ), resp( 'wr', 0x7, 1,   0,  0          ),

    req( 'rd', 0x2, 0x2028, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x02121212 ),
    req( 'rd', 0x3, 0x303c, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x03131313 ),
    req( 'rd', 0x0, 0x0000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x00101010 ),
    req( 'rd', 0x1, 0x1014, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0x01111111 ),
    req( 'rd', 0x6, 0x6068, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x06161616 ),
    req( 'rd', 0x7, 0x707c, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x07171717 ),
    req( 'rd', 0x4, 0x4040, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x04141414 ),
    req( 'rd', 0x5, 0x5054, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x05151515 ),

    req( 'wr', 0x1, 0x1014, 0, 0x11111111 ), resp( 'wr', 0x1, 1,   0,  0          ),
    req( 'wr', 0x2, 0x2028, 0, 0x12121212 ), resp( 'wr', 0x2, 1,   0,  0          ),
    req( 'wr', 0x0, 0x0000, 0, 0x10101010 ), resp( 'wr', 0x0, 1,   0,  0          ),
    req( 'wr', 0x5, 0x5054, 0, 0x15151515 ), resp( 'wr', 0x5, 1,   0,  0          ),
    req( 'wr', 0x6, 0x6068, 0, 0x16161616 ), resp( 'wr', 0x6, 1,   0,  0          ),
    req( 'wr', 0x4, 0x4040, 0, 0x14141414 ), resp( 'wr', 0x4, 1,   0,  0          ),
    req( 'wr', 0x3, 0x303c, 0, 0x13131313 ), resp( 'wr', 0x3, 1,   0,  0          ),
    req( 'wr', 0x7, 0x707c, 0, 0x17171717 ), resp( 'wr', 0x7, 1,   0,  0          ),

    req( 'rd', 0x2, 0x2028, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x12121212 ),
    req( 'rd', 0x3, 0x303c, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x13131313 ),
    req( 'rd', 0x0, 0x0000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x10101010 ),
    req( 'rd', 0x1, 0x1014, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0x11111111 ),
    req( 'rd', 0x6, 0x6068, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x16161616 ),
    req( 'rd', 0x7, 0x707c, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x17171717 ),
    req( 'rd', 0x4, 0x4040, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x14141414 ),
    req( 'rd', 0x5, 0x5054, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x15151515 ),
  ]

#----------------------------------------------------------------------
# Test Cases for Refill on Read Miss - no eviction
#----------------------------------------------------------------------

# Single read miss (uses data_64B)

def read_miss_word():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0x000c0ffe ),
  ]

# Read same word multiple times, also tests opaque bits (uses data_64B)

def read_miss_multi_word():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0x000c0ffe ),
    req( 'rd', 0x1, 0x1000, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0x000c0ffe ),
    req( 'rd', 0x2, 0x1000, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x000c0ffe ),
    req( 'rd', 0x3, 0x1000, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x000c0ffe ),
  ]

# Read every word in cache line (uses data_64B), start from the first word

def read_miss_cacheline1():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'rd', 0x1, 0x1000, 0, 0          ), resp( 'rd', 0x1, 0,   0,  0x000c0ffe ),
    req( 'rd', 0x2, 0x1004, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x10101010 ),
    req( 'rd', 0x3, 0x1008, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x20202020 ),
    req( 'rd', 0x4, 0x100c, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x30303030 ),
  ]

# Read every word in cache line (uses data_64B), do not read the first word

def read_miss_cacheline2():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'rd', 0x1, 0x1004, 0, 0          ), resp( 'rd', 0x1, 0,   0,  0x10101010 ),
    req( 'rd', 0x2, 0x1000, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x000c0ffe ),
    req( 'rd', 0x3, 0x1008, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x20202020 ),
    req( 'rd', 0x4, 0x100c, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x30303030 ),

    req( 'rd', 0x1, 0x1018, 0, 0          ), resp( 'rd', 0x1, 0,   0,  0x60606060 ),
    req( 'rd', 0x2, 0x1010, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x40404040 ),
    req( 'rd', 0x3, 0x101c, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x70707070 ),
    req( 'rd', 0x4, 0x1014, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x50505050 ),

    req( 'rd', 0x1, 0x102c, 0, 0          ), resp( 'rd', 0x1, 0,   0,  0xb0b0b0b0 ),
    req( 'rd', 0x2, 0x1028, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xa0a0a0a0 ),
    req( 'rd', 0x3, 0x1024, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x90909090 ),
    req( 'rd', 0x4, 0x1020, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x80808080 ),

  ]

# Read miss for each cacheline, then read hit for each cacheline (uses data_512B)
# stress entire cache, raad the first word

def read_miss_multi_cacheline1():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0xabcd1000 ),
    req( 'rd', 0x1, 0x1010, 0, 0          ), resp( 'rd', 0x1, 0,   0,  0xabcd1010 ),
    req( 'rd', 0x2, 0x1020, 0, 0          ), resp( 'rd', 0x2, 0,   0,  0xabcd1020 ),
    req( 'rd', 0x3, 0x1030, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0xabcd1030 ),
    req( 'rd', 0x4, 0x1040, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0xabcd1040 ),
    req( 'rd', 0x5, 0x1050, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0xabcd1050 ),
    req( 'rd', 0x6, 0x1060, 0, 0          ), resp( 'rd', 0x6, 0,   0,  0xabcd1060 ),
    req( 'rd', 0x7, 0x1070, 0, 0          ), resp( 'rd', 0x7, 0,   0,  0xabcd1070 ),
    req( 'rd', 0x8, 0x1080, 0, 0          ), resp( 'rd', 0x8, 0,   0,  0xabcd1080 ),
    req( 'rd', 0x9, 0x1090, 0, 0          ), resp( 'rd', 0x9, 0,   0,  0xabcd1090 ),
    req( 'rd', 0xa, 0x10a0, 0, 0          ), resp( 'rd', 0xa, 0,   0,  0xabcd10a0 ),
    req( 'rd', 0xb, 0x10b0, 0, 0          ), resp( 'rd', 0xb, 0,   0,  0xabcd10b0 ),
    req( 'rd', 0xc, 0x10c0, 0, 0          ), resp( 'rd', 0xc, 0,   0,  0xabcd10c0 ),
    req( 'rd', 0xd, 0x10d0, 0, 0          ), resp( 'rd', 0xd, 0,   0,  0xabcd10d0 ),
    req( 'rd', 0xe, 0x10e0, 0, 0          ), resp( 'rd', 0xe, 0,   0,  0xabcd10e0 ),
    req( 'rd', 0xf, 0x10f0, 0, 0          ), resp( 'rd', 0xf, 0,   0,  0xabcd10f0 ),

    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd1000 ),
    req( 'rd', 0x1, 0x1010, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd1010 ),
    req( 'rd', 0x2, 0x1020, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd1020 ),
    req( 'rd', 0x3, 0x1030, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd1030 ),
    req( 'rd', 0x4, 0x1040, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd1040 ),
    req( 'rd', 0x5, 0x1050, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd1050 ),
    req( 'rd', 0x6, 0x1060, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd1060 ),
    req( 'rd', 0x7, 0x1070, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd1070 ),
    req( 'rd', 0x8, 0x1080, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0xabcd1080 ),
    req( 'rd', 0x9, 0x1090, 0, 0          ), resp( 'rd', 0x9, 1,   0,  0xabcd1090 ),
    req( 'rd', 0xa, 0x10a0, 0, 0          ), resp( 'rd', 0xa, 1,   0,  0xabcd10a0 ),
    req( 'rd', 0xb, 0x10b0, 0, 0          ), resp( 'rd', 0xb, 1,   0,  0xabcd10b0 ),
    req( 'rd', 0xc, 0x10c0, 0, 0          ), resp( 'rd', 0xc, 1,   0,  0xabcd10c0 ),
    req( 'rd', 0xd, 0x10d0, 0, 0          ), resp( 'rd', 0xd, 1,   0,  0xabcd10d0 ),
    req( 'rd', 0xe, 0x10e0, 0, 0          ), resp( 'rd', 0xe, 1,   0,  0xabcd10e0 ),
    req( 'rd', 0xf, 0x10f0, 0, 0          ), resp( 'rd', 0xf, 1,   0,  0xabcd10f0 ),

    req( 'rd', 0x0, 0x1004, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd1004 ),
    req( 'rd', 0x1, 0x1014, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd1014 ),
    req( 'rd', 0x2, 0x1024, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd1024 ),
    req( 'rd', 0x3, 0x1034, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd1034 ),
    req( 'rd', 0x4, 0x1044, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd1044 ),
    req( 'rd', 0x5, 0x1054, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd1054 ),
    req( 'rd', 0x6, 0x1064, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd1064 ),
    req( 'rd', 0x7, 0x1074, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd1074 ),
    req( 'rd', 0x8, 0x1084, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0xabcd1084 ),
    req( 'rd', 0x9, 0x1094, 0, 0          ), resp( 'rd', 0x9, 1,   0,  0xabcd1094 ),
    req( 'rd', 0xa, 0x10a4, 0, 0          ), resp( 'rd', 0xa, 1,   0,  0xabcd10a4 ),
    req( 'rd', 0xb, 0x10b4, 0, 0          ), resp( 'rd', 0xb, 1,   0,  0xabcd10b4 ),
    req( 'rd', 0xc, 0x10c4, 0, 0          ), resp( 'rd', 0xc, 1,   0,  0xabcd10c4 ),
    req( 'rd', 0xd, 0x10d4, 0, 0          ), resp( 'rd', 0xd, 1,   0,  0xabcd10d4 ),
    req( 'rd', 0xe, 0x10e4, 0, 0          ), resp( 'rd', 0xe, 1,   0,  0xabcd10e4 ),
    req( 'rd', 0xf, 0x10f4, 0, 0          ), resp( 'rd', 0xf, 1,   0,  0xabcd10f4 ),
  ]

# Read miss for each cacheline, then read hit for each cacheline (uses data_512B)
# stress entire cache, do not read the first word

def read_miss_multi_cacheline2():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'rd', 0x0, 0x1008, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0xabcd1008 ),
    req( 'rd', 0x1, 0x1018, 0, 0          ), resp( 'rd', 0x1, 0,   0,  0xabcd1018 ),
    req( 'rd', 0x2, 0x1028, 0, 0          ), resp( 'rd', 0x2, 0,   0,  0xabcd1028 ),
    req( 'rd', 0x3, 0x1038, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0xabcd1038 ),
    req( 'rd', 0x4, 0x1048, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0xabcd1048 ),
    req( 'rd', 0x5, 0x1058, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0xabcd1058 ),
    req( 'rd', 0x6, 0x1068, 0, 0          ), resp( 'rd', 0x6, 0,   0,  0xabcd1068 ),
    req( 'rd', 0x7, 0x1078, 0, 0          ), resp( 'rd', 0x7, 0,   0,  0xabcd1078 ),
    req( 'rd', 0x8, 0x1088, 0, 0          ), resp( 'rd', 0x8, 0,   0,  0xabcd1088 ),
    req( 'rd', 0x9, 0x1098, 0, 0          ), resp( 'rd', 0x9, 0,   0,  0xabcd1098 ),
    req( 'rd', 0xa, 0x10a8, 0, 0          ), resp( 'rd', 0xa, 0,   0,  0xabcd10a8 ),
    req( 'rd', 0xb, 0x10b8, 0, 0          ), resp( 'rd', 0xb, 0,   0,  0xabcd10b8 ),
    req( 'rd', 0xc, 0x10c8, 0, 0          ), resp( 'rd', 0xc, 0,   0,  0xabcd10c8 ),
    req( 'rd', 0xd, 0x10d8, 0, 0          ), resp( 'rd', 0xd, 0,   0,  0xabcd10d8 ),
    req( 'rd', 0xe, 0x10e8, 0, 0          ), resp( 'rd', 0xe, 0,   0,  0xabcd10e8 ),
    req( 'rd', 0xf, 0x10f8, 0, 0          ), resp( 'rd', 0xf, 0,   0,  0xabcd10f8 ),

    req( 'rd', 0x0, 0x100c, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd100c ),
    req( 'rd', 0x1, 0x101c, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd101c ),
    req( 'rd', 0x2, 0x102c, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd102c ),
    req( 'rd', 0x3, 0x103c, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd103c ),
    req( 'rd', 0x4, 0x104c, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd104c ),
    req( 'rd', 0x5, 0x105c, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd105c ),
    req( 'rd', 0x6, 0x106c, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd106c ),
    req( 'rd', 0x7, 0x107c, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd107c ),
    req( 'rd', 0x8, 0x108c, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0xabcd108c ),
    req( 'rd', 0x9, 0x109c, 0, 0          ), resp( 'rd', 0x9, 1,   0,  0xabcd109c ),
    req( 'rd', 0xa, 0x10ac, 0, 0          ), resp( 'rd', 0xa, 1,   0,  0xabcd10ac ),
    req( 'rd', 0xb, 0x10bc, 0, 0          ), resp( 'rd', 0xb, 1,   0,  0xabcd10bc ),
    req( 'rd', 0xc, 0x10cc, 0, 0          ), resp( 'rd', 0xc, 1,   0,  0xabcd10cc ),
    req( 'rd', 0xd, 0x10dc, 0, 0          ), resp( 'rd', 0xd, 1,   0,  0xabcd10dc ),
    req( 'rd', 0xe, 0x10ec, 0, 0          ), resp( 'rd', 0xe, 1,   0,  0xabcd10ec ),
    req( 'rd', 0xf, 0x10fc, 0, 0          ), resp( 'rd', 0xf, 1,   0,  0xabcd10fc ),

    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd1000 ),
    req( 'rd', 0x1, 0x1010, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd1010 ),
    req( 'rd', 0x2, 0x1020, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd1020 ),
    req( 'rd', 0x3, 0x1030, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd1030 ),
    req( 'rd', 0x4, 0x1040, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd1040 ),
    req( 'rd', 0x5, 0x1050, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd1050 ),
    req( 'rd', 0x6, 0x1060, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd1060 ),
    req( 'rd', 0x7, 0x1070, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd1070 ),
    req( 'rd', 0x8, 0x1080, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0xabcd1080 ),
    req( 'rd', 0x9, 0x1090, 0, 0          ), resp( 'rd', 0x9, 1,   0,  0xabcd1090 ),
    req( 'rd', 0xa, 0x10a0, 0, 0          ), resp( 'rd', 0xa, 1,   0,  0xabcd10a0 ),
    req( 'rd', 0xb, 0x10b0, 0, 0          ), resp( 'rd', 0xb, 1,   0,  0xabcd10b0 ),
    req( 'rd', 0xc, 0x10c0, 0, 0          ), resp( 'rd', 0xc, 1,   0,  0xabcd10c0 ),
    req( 'rd', 0xd, 0x10d0, 0, 0          ), resp( 'rd', 0xd, 1,   0,  0xabcd10d0 ),
    req( 'rd', 0xe, 0x10e0, 0, 0          ), resp( 'rd', 0xe, 1,   0,  0xabcd10e0 ),
    req( 'rd', 0xf, 0x10f0, 0, 0          ), resp( 'rd', 0xf, 1,   0,  0xabcd10f0 ),

    req( 'rd', 0x0, 0x1004, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd1004 ),
    req( 'rd', 0x1, 0x1014, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd1014 ),
    req( 'rd', 0x2, 0x1024, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd1024 ),
    req( 'rd', 0x3, 0x1034, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd1034 ),
    req( 'rd', 0x4, 0x1044, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd1044 ),
    req( 'rd', 0x5, 0x1054, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd1054 ),
    req( 'rd', 0x6, 0x1064, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd1064 ),
    req( 'rd', 0x7, 0x1074, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd1074 ),
    req( 'rd', 0x8, 0x1084, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0xabcd1084 ),
    req( 'rd', 0x9, 0x1094, 0, 0          ), resp( 'rd', 0x9, 1,   0,  0xabcd1094 ),
    req( 'rd', 0xa, 0x10a4, 0, 0          ), resp( 'rd', 0xa, 1,   0,  0xabcd10a4 ),
    req( 'rd', 0xb, 0x10b4, 0, 0          ), resp( 'rd', 0xb, 1,   0,  0xabcd10b4 ),
    req( 'rd', 0xc, 0x10c4, 0, 0          ), resp( 'rd', 0xc, 1,   0,  0xabcd10c4 ),
    req( 'rd', 0xd, 0x10d4, 0, 0          ), resp( 'rd', 0xd, 1,   0,  0xabcd10d4 ),
    req( 'rd', 0xe, 0x10e4, 0, 0          ), resp( 'rd', 0xe, 1,   0,  0xabcd10e4 ),
    req( 'rd', 0xf, 0x10f4, 0, 0          ), resp( 'rd', 0xf, 1,   0,  0xabcd10f4 ),

    req( 'rd', 0x0, 0x1100, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0xabcd1100 ),
    req( 'rd', 0x1, 0x1110, 0, 0          ), resp( 'rd', 0x1, 0,   0,  0xabcd1110 ),
    req( 'rd', 0x2, 0x1120, 0, 0          ), resp( 'rd', 0x2, 0,   0,  0xabcd1120 ),
    req( 'rd', 0x3, 0x1130, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0xabcd1130 ),
    req( 'rd', 0x4, 0x1140, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0xabcd1140 ),
    req( 'rd', 0x5, 0x1150, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0xabcd1150 ),
    req( 'rd', 0x6, 0x1160, 0, 0          ), resp( 'rd', 0x6, 0,   0,  0xabcd1160 ),
    req( 'rd', 0x7, 0x1170, 0, 0          ), resp( 'rd', 0x7, 0,   0,  0xabcd1170 ),
    req( 'rd', 0x8, 0x1180, 0, 0          ), resp( 'rd', 0x8, 0,   0,  0xabcd1180 ),
    req( 'rd', 0x9, 0x1190, 0, 0          ), resp( 'rd', 0x9, 0,   0,  0xabcd1190 ),
    req( 'rd', 0xa, 0x11a0, 0, 0          ), resp( 'rd', 0xa, 0,   0,  0xabcd11a0 ),
    req( 'rd', 0xb, 0x11b0, 0, 0          ), resp( 'rd', 0xb, 0,   0,  0xabcd11b0 ),
    req( 'rd', 0xc, 0x11c0, 0, 0          ), resp( 'rd', 0xc, 0,   0,  0xabcd11c0 ),
    req( 'rd', 0xd, 0x11d0, 0, 0          ), resp( 'rd', 0xd, 0,   0,  0xabcd11d0 ),
    req( 'rd', 0xe, 0x11e0, 0, 0          ), resp( 'rd', 0xe, 0,   0,  0xabcd11e0 ),
    req( 'rd', 0xf, 0x11f0, 0, 0          ), resp( 'rd', 0xf, 0,   0,  0xabcd11f0 ),
  ]

# Read miss with refill and no eviction (uses data_64B)
# Init specific word in cacheline so that the cacheline is clean, then read miss
# Conflict miss

def read_miss_refill_no_evict1():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x0, 0x2000, 0, 0xdeadbeef ), resp( 'in', 0x0, 0,   0,  0          ),
    req( 'in', 0x1, 0x3010, 0, 0xabcd0000 ), resp( 'in', 0x1, 0,   0,  0          ),
    req( 'in', 0x2, 0x4020, 0, 0xedededed ), resp( 'in', 0x2, 0,   0,  0          ),
    
    req( 'rd', 0x3, 0x1000, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0x000c0ffe ),
    req( 'rd', 0x4, 0x1010, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0x40404040 ),
    req( 'rd', 0x5, 0x1020, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0x80808080 ),
  ]

# Read miss with refill and no eviction (uses data_64B): read, then read miss

def read_miss_refill_no_evict2():
  return [    
    #    type  opq  addr   len data                type  opq  test len data
    req( 'rd', 0x0, 0x2000, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0x001c0ffe ),
    req( 'rd', 0x1, 0x3010, 0, 0          ), resp( 'rd', 0x1, 0,   0,  0x30303030 ),
    req( 'rd', 0x2, 0x4020, 0, 0          ), resp( 'rd', 0x2, 0,   0,  0x04040404 ),
    
    req( 'rd', 0x3, 0x1000, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0x000c0ffe ),
    req( 'rd', 0x4, 0x2010, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0x20202020 ),
    req( 'rd', 0x5, 0x3020, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0x03030303 ),
  ]

# Read miss with refill and no eviction (uses data_64B): read, then read miss

def read_miss_refill_no_evict3():
  return [    
    #    type  opq  addr   len data                type  opq  test len data
    req( 'rd', 0x0, 0x2000, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0x001c0ffe ),
    req( 'rd', 0x1, 0x3010, 0, 0          ), resp( 'rd', 0x1, 0,   0,  0x30303030 ),
    req( 'rd', 0x2, 0x4020, 0, 0          ), resp( 'rd', 0x2, 0,   0,  0x04040404 ),
    
    req( 'rd', 0x3, 0x1004, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0x000c0fff ),
    req( 'rd', 0x4, 0x2014, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0x20202021 ),
    req( 'rd', 0x5, 0x3024, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0x03030304 ),
  ]

#----------------------------------------------------------------------
# Test Cases for Refill on Write Miss - no eviction
#----------------------------------------------------------------------

# Single write miss to one word (uses data_64B)

def write_miss_word1():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x0, 0x1000, 0, 0xcafecafe ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xcafecafe ),
  ]


# Ensure that the write miss can bring 16 Bytes of data from memory (uses data_64B)

def write_miss_check_data():
  return[
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x0, 0x1004, 0, 0x12345678 ), resp( 'wr', 0x0, 0,   0,  0          ),

    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x000c0ffe ),
    req( 'rd', 0x1, 0x1004, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0x12345678 ),
    req( 'rd', 0x2, 0x1008, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x20202020 ),
    req( 'rd', 0x3, 0x100c, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x30303030 ),
  ]

# Write/read word multiple times, also tests opaque bits (uses data_64B)

def write_miss_multi_word():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x1, 0x1000, 0, 0x01010101 ), resp( 'wr', 0x1, 0,   0,  0          ),
    req( 'rd', 0x2, 0x1000, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x01010101 ),
    req( 'wr', 0x3, 0x1000, 0, 0x02020202 ), resp( 'wr', 0x3, 1,   0,  0          ),
    req( 'rd', 0x4, 0x1000, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x02020202 ),
    req( 'wr', 0x5, 0x1000, 0, 0x03030303 ), resp( 'wr', 0x5, 1,   0,  0          ),
    req( 'rd', 0x6, 0x1000, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x03030303 ),
    req( 'wr', 0x7, 0x1000, 0, 0x04040404 ), resp( 'wr', 0x7, 1,   0,  0          ),
    req( 'rd', 0x8, 0x1000, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0x04040404 ),
  ]

# Write/read every word in cache line (uses data_64B)

def write_miss_cacheline():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x1, 0x1000, 0, 0x01010101 ), resp( 'wr', 0x1, 0,   0,  0          ),
    req( 'wr', 0x2, 0x1004, 0, 0x02020202 ), resp( 'wr', 0x2, 1,   0,  0          ),
    req( 'wr', 0x3, 0x1008, 0, 0x03030303 ), resp( 'wr', 0x3, 1,   0,  0          ),
    req( 'wr', 0x4, 0x100c, 0, 0x04040404 ), resp( 'wr', 0x4, 1,   0,  0          ),

    req( 'rd', 0x5, 0x1000, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x01010101 ),
    req( 'rd', 0x6, 0x1004, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x02020202 ),
    req( 'rd', 0x7, 0x1008, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x03030303 ),
    req( 'rd', 0x8, 0x100c, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0x04040404 ),
  ]

# Write/read one word from each cacheline (uses data_512B)

def write_miss_multi_cacheline1():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x0, 0x1000, 0, 0x10101010 ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'wr', 0x1, 0x1010, 0, 0x11111111 ), resp( 'wr', 0x1, 0,   0,  0          ),
    req( 'wr', 0x2, 0x1020, 0, 0x12121212 ), resp( 'wr', 0x2, 0,   0,  0          ),
    req( 'wr', 0x3, 0x1030, 0, 0x13131313 ), resp( 'wr', 0x3, 0,   0,  0          ),
    req( 'wr', 0x4, 0x1040, 0, 0x14141414 ), resp( 'wr', 0x4, 0,   0,  0          ),
    req( 'wr', 0x5, 0x1050, 0, 0x15151515 ), resp( 'wr', 0x5, 0,   0,  0          ),
    req( 'wr', 0x6, 0x1060, 0, 0x16161616 ), resp( 'wr', 0x6, 0,   0,  0          ),
    req( 'wr', 0x7, 0x1070, 0, 0x17171717 ), resp( 'wr', 0x7, 0,   0,  0          ),
    req( 'wr', 0x8, 0x1080, 0, 0x18181818 ), resp( 'wr', 0x8, 0,   0,  0          ),
    req( 'wr', 0x9, 0x1090, 0, 0x19191919 ), resp( 'wr', 0x9, 0,   0,  0          ),
    req( 'wr', 0xa, 0x10a0, 0, 0x1a1a1a1a ), resp( 'wr', 0xa, 0,   0,  0          ),
    req( 'wr', 0xb, 0x10b0, 0, 0x1b1b1b1b ), resp( 'wr', 0xb, 0,   0,  0          ),
    req( 'wr', 0xc, 0x10c0, 0, 0x1c1c1c1c ), resp( 'wr', 0xc, 0,   0,  0          ),
    req( 'wr', 0xd, 0x10d0, 0, 0x1d1d1d1d ), resp( 'wr', 0xd, 0,   0,  0          ),
    req( 'wr', 0xe, 0x10e0, 0, 0x1e1e1e1e ), resp( 'wr', 0xe, 0,   0,  0          ),
    req( 'wr', 0xf, 0x10f0, 0, 0x1f1f1f1f ), resp( 'wr', 0xf, 0,   0,  0          ),

    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x10101010 ),
    req( 'rd', 0x1, 0x1010, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0x11111111 ),
    req( 'rd', 0x2, 0x1020, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x12121212 ),
    req( 'rd', 0x3, 0x1030, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x13131313 ),
    req( 'rd', 0x4, 0x1040, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x14141414 ),
    req( 'rd', 0x5, 0x1050, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x15151515 ),
    req( 'rd', 0x6, 0x1060, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x16161616 ),
    req( 'rd', 0x7, 0x1070, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x17171717 ),
    req( 'rd', 0x8, 0x1080, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0x18181818 ),
    req( 'rd', 0x9, 0x1090, 0, 0          ), resp( 'rd', 0x9, 1,   0,  0x19191919 ),
    req( 'rd', 0xa, 0x10a0, 0, 0          ), resp( 'rd', 0xa, 1,   0,  0x1a1a1a1a ),
    req( 'rd', 0xb, 0x10b0, 0, 0          ), resp( 'rd', 0xb, 1,   0,  0x1b1b1b1b ),
    req( 'rd', 0xc, 0x10c0, 0, 0          ), resp( 'rd', 0xc, 1,   0,  0x1c1c1c1c ),
    req( 'rd', 0xd, 0x10d0, 0, 0          ), resp( 'rd', 0xd, 1,   0,  0x1d1d1d1d ),
    req( 'rd', 0xe, 0x10e0, 0, 0          ), resp( 'rd', 0xe, 1,   0,  0x1e1e1e1e ),
    req( 'rd', 0xf, 0x10f0, 0, 0          ), resp( 'rd', 0xf, 1,   0,  0x1f1f1f1f ),
  ]

  # Write/read one word from each cacheline (uses data_512B)
  # Stress the entire cache

def write_miss_multi_cacheline2():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x0, 0x1000, 0, 0x10101010 ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'wr', 0x1, 0x1010, 0, 0x11111111 ), resp( 'wr', 0x1, 0,   0,  0          ),
    req( 'wr', 0x2, 0x1020, 0, 0x12121212 ), resp( 'wr', 0x2, 0,   0,  0          ),
    req( 'wr', 0x3, 0x1030, 0, 0x13131313 ), resp( 'wr', 0x3, 0,   0,  0          ),
    req( 'wr', 0x4, 0x1040, 0, 0x14141414 ), resp( 'wr', 0x4, 0,   0,  0          ),
    req( 'wr', 0x5, 0x1050, 0, 0x15151515 ), resp( 'wr', 0x5, 0,   0,  0          ),
    req( 'wr', 0x6, 0x1060, 0, 0x16161616 ), resp( 'wr', 0x6, 0,   0,  0          ),
    req( 'wr', 0x7, 0x1070, 0, 0x17171717 ), resp( 'wr', 0x7, 0,   0,  0          ),
    req( 'wr', 0x8, 0x1080, 0, 0x18181818 ), resp( 'wr', 0x8, 0,   0,  0          ),
    req( 'wr', 0x9, 0x1090, 0, 0x19191919 ), resp( 'wr', 0x9, 0,   0,  0          ),
    req( 'wr', 0xa, 0x10a0, 0, 0x1a1a1a1a ), resp( 'wr', 0xa, 0,   0,  0          ),
    req( 'wr', 0xb, 0x10b0, 0, 0x1b1b1b1b ), resp( 'wr', 0xb, 0,   0,  0          ),
    req( 'wr', 0xc, 0x10c0, 0, 0x1c1c1c1c ), resp( 'wr', 0xc, 0,   0,  0          ),
    req( 'wr', 0xd, 0x10d0, 0, 0x1d1d1d1d ), resp( 'wr', 0xd, 0,   0,  0          ),
    req( 'wr', 0xe, 0x10e0, 0, 0x1e1e1e1e ), resp( 'wr', 0xe, 0,   0,  0          ),
    req( 'wr', 0xf, 0x10f0, 0, 0x1f1f1f1f ), resp( 'wr', 0xf, 0,   0,  0          ),

    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x10101010 ),
    req( 'rd', 0x1, 0x1010, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0x11111111 ),
    req( 'rd', 0x2, 0x1020, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x12121212 ),
    req( 'rd', 0x3, 0x1030, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x13131313 ),
    req( 'rd', 0x4, 0x1040, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x14141414 ),
    req( 'rd', 0x5, 0x1050, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x15151515 ),
    req( 'rd', 0x6, 0x1060, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x16161616 ),
    req( 'rd', 0x7, 0x1070, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x17171717 ),
    req( 'rd', 0x8, 0x1080, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0x18181818 ),
    req( 'rd', 0x9, 0x1090, 0, 0          ), resp( 'rd', 0x9, 1,   0,  0x19191919 ),
    req( 'rd', 0xa, 0x10a0, 0, 0          ), resp( 'rd', 0xa, 1,   0,  0x1a1a1a1a ),
    req( 'rd', 0xb, 0x10b0, 0, 0          ), resp( 'rd', 0xb, 1,   0,  0x1b1b1b1b ),
    req( 'rd', 0xc, 0x10c0, 0, 0          ), resp( 'rd', 0xc, 1,   0,  0x1c1c1c1c ),
    req( 'rd', 0xd, 0x10d0, 0, 0          ), resp( 'rd', 0xd, 1,   0,  0x1d1d1d1d ),
    req( 'rd', 0xe, 0x10e0, 0, 0          ), resp( 'rd', 0xe, 1,   0,  0x1e1e1e1e ),
    req( 'rd', 0xf, 0x10f0, 0, 0          ), resp( 'rd', 0xf, 1,   0,  0x1f1f1f1f ),

    req( 'rd', 0x0, 0x1004, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd1004 ),
    req( 'rd', 0x1, 0x1014, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd1014 ),
    req( 'rd', 0x2, 0x1024, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd1024 ),
    req( 'rd', 0x3, 0x1034, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd1034 ),
    req( 'rd', 0x4, 0x1044, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd1044 ),
    req( 'rd', 0x5, 0x1054, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd1054 ),
    req( 'rd', 0x6, 0x1064, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd1064 ),
    req( 'rd', 0x7, 0x1074, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd1074 ),
    req( 'rd', 0x8, 0x1084, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0xabcd1084 ),
    req( 'rd', 0x9, 0x1094, 0, 0          ), resp( 'rd', 0x9, 1,   0,  0xabcd1094 ),
    req( 'rd', 0xa, 0x10a4, 0, 0          ), resp( 'rd', 0xa, 1,   0,  0xabcd10a4 ),
    req( 'rd', 0xb, 0x10b4, 0, 0          ), resp( 'rd', 0xb, 1,   0,  0xabcd10b4 ),
    req( 'rd', 0xc, 0x10c4, 0, 0          ), resp( 'rd', 0xc, 1,   0,  0xabcd10c4 ),
    req( 'rd', 0xd, 0x10d4, 0, 0          ), resp( 'rd', 0xd, 1,   0,  0xabcd10d4 ),
    req( 'rd', 0xe, 0x10e4, 0, 0          ), resp( 'rd', 0xe, 1,   0,  0xabcd10e4 ),
    req( 'rd', 0xf, 0x10f4, 0, 0          ), resp( 'rd', 0xf, 1,   0,  0xabcd10f4 ),
  ]


# Write miss with refill and no eviction: Init specific word in cacheline so that the cacheline is clean, then write miss (uses None)

def write_miss_refill_no_evict1():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'in', 0x0, 0x2000, 0, 0xdeadbeef ), resp( 'in', 0x0, 0,   0,  0          ),
    req( 'in', 0x1, 0x3010, 0, 0xabcd0000 ), resp( 'in', 0x1, 0,   0,  0          ),
    req( 'in', 0x2, 0x4020, 0, 0xedededed ), resp( 'in', 0x2, 0,   0,  0          ),
   
    req( 'wr', 0x3, 0x1000, 0, 0xbeefdeed ), resp( 'wr', 0x3, 0,   0,  0          ),
    req( 'wr', 0x4, 0x1010, 0, 0x0000abcd ), resp( 'wr', 0x4, 0,   0,  0          ),
    req( 'wr', 0x5, 0x1020, 0, 0xdededede ), resp( 'wr', 0x5, 0,   0,  0          ),
    
    req( 'rd', 0x3, 0x1000, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xbeefdeed ),
    req( 'rd', 0x4, 0x1010, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x0000abcd ),
    req( 'rd', 0x5, 0x1020, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xdededede ),
  ]

# Write miss with refill and no eviction (uses None)
# Write miss the clean cacheline, read other words in cacheline

def write_miss_refill_no_evict2():
  return [    
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x3, 0x1000, 0, 0xbeefdeed ), resp( 'wr', 0x3, 0,   0,  0          ),
    req( 'wr', 0x4, 0x1010, 0, 0x0000abcd ), resp( 'wr', 0x4, 0,   0,  0          ),
    req( 'wr', 0x5, 0x1020, 0, 0xdededede ), resp( 'wr', 0x5, 0,   0,  0          ),

    req( 'rd', 0x3, 0x1004, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x10101010 ),
    req( 'rd', 0x4, 0x1014, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x50505050 ),
    req( 'rd', 0x5, 0x1024, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x90909090 ),
    
    req( 'rd', 0x3, 0x1000, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xbeefdeed ),
    req( 'rd', 0x4, 0x1010, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x0000abcd ),
    req( 'rd', 0x5, 0x1020, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xdededede ),

    req( 'rd', 0x3, 0x1008, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x20202020 ),
    req( 'rd', 0x4, 0x1018, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x60606060 ),
    req( 'rd', 0x5, 0x1028, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xa0a0a0a0 ),

    req( 'rd', 0x3, 0x100c, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x30303030 ),
    req( 'rd', 0x4, 0x101c, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x70707070 ),
    req( 'rd', 0x5, 0x102c, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xb0b0b0b0 ),
  ]

# Read miss with refill and no eviction (uses data_64B)
# read, then read miss

def write_miss_refill_no_evict3():
  return [    
    #    type  opq  addr   len data                type  opq  test len data
    req( 'rd', 0x3, 0x1000, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0x000c0ffe ),
    req( 'rd', 0x4, 0x1010, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0x40404040 ),
    req( 'rd', 0x5, 0x1020, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0x80808080 ),

    req( 'rd', 0x3, 0x1000, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x000c0ffe ),
    req( 'rd', 0x4, 0x1010, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x40404040 ),
    req( 'rd', 0x5, 0x1020, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x80808080 ),
    
    req( 'wr', 0x3, 0x2000, 0, 0xbeefdeed ), resp( 'wr', 0x3, 0,   0,  0          ),
    req( 'wr', 0x4, 0x2010, 0, 0x0000abcd ), resp( 'wr', 0x4, 0,   0,  0          ),
    req( 'wr', 0x5, 0x2020, 0, 0xdededede ), resp( 'wr', 0x5, 0,   0,  0          ),
    
    req( 'rd', 0x3, 0x2000, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xbeefdeed ),
    req( 'rd', 0x4, 0x2010, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x0000abcd ),
    req( 'rd', 0x5, 0x2020, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xdededede ),
  ]

#----------------------------------------------------------------------
# Test Cases for Evict
#----------------------------------------------------------------------

# Write miss to two cachelines, and then a read to a third cacheline.
# This read to the third cacheline is guaranteed to cause an eviction on
# both the direct mapped and set associative caches. (uses data_512B)

# Read miss and write miss to the dirty cacheline and cause eviction

def evict_word1():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x0, 0x1000, 0, 0xcafecafe ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xcafecafe ), # evicted
    req( 'wr', 0x0, 0x1080, 0, 0x000c0ffe ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'rd', 0x0, 0x1080, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x000c0ffe ), # evicted
    req( 'rd', 0x0, 0x1100, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0xabcd1100 ), # conflicts caused by read
    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0xcafecafe ),
    req( 'wr', 0x0, 0x2180, 0, 0xdeadbeef ), resp( 'wr', 0x0, 0,   0,  0          ), # conflicts caused by write
    req( 'rd', 0x0, 0x2180, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xdeadbeef ), 
    req( 'rd', 0x0, 0x1080, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0x000c0ffe ),
  ]

# write miss to the dirty cacheline and cause eviction, read miss to the clean cacheline and cause eviction

def evict_word2():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x0, 0x1000, 0, 0xcafecafe ), resp( 'wr', 0x0, 0,   0,  0          ), # way 1 is dirty
    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xcafecafe ), # evicted

    req( 'rd', 0x0, 0x1080, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0xabcd1080 ), # way 0 is clean, evicted
    req( 'rd', 0x0, 0x108c, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd108c ), # way 0 is clean, evicted

    req( 'rd', 0x0, 0x1100, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0xabcd1100 ), # conflicts caused by read
    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0xcafecafe ),

    req( 'wr', 0x0, 0x2180, 0, 0xdeadbeef ), resp( 'wr', 0x0, 0,   0,  0          ), # conflicts caused by write
    req( 'rd', 0x0, 0x2180, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xdeadbeef ), 
  ]

# check if the evicted word is correctley send to the memory

def evict_check():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x0, 0x1000, 0, 0xcafecafe ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xcafecafe ), # evicted
    req( 'wr', 0x0, 0x1080, 0, 0x000c0ffe ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'rd', 0x0, 0x1080, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x000c0ffe ), # evicted
    req( 'rd', 0x0, 0x1100, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0xabcd1100 ), # conflicts caused by read
    req( 'wr', 0x0, 0x2180, 0, 0xdeadbeef ), resp( 'wr', 0x0, 0,   0,  0          ), # conflicts caused by write
    
    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0xcafecafe ), 
    req( 'rd', 0x0, 0x1080, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0x000c0ffe ),
  ]

# Write word and evict multiple times. Test is carefully crafted to
# ensure it applies to both direct mapped and set associative caches.
# (uses data_512B)

def evict_multi_word1():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x0, 0x1000, 0, 0x01010101 ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'rd', 0x1, 0x1000, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0x01010101 ),
    req( 'wr', 0x2, 0x1080, 0, 0x11111111 ), resp( 'wr', 0x2, 0,   0,  0          ),
    req( 'rd', 0x3, 0x1080, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x11111111 ),
    req( 'rd', 0x4, 0x1100, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0xabcd1100 ), # conflicts
    req( 'rd', 0x5, 0x1080, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x11111111 ), # make sure way1 is still LRU

    req( 'wr', 0x6, 0x1000, 0, 0x02020202 ), resp( 'wr', 0x6, 0,   0,  0          ),
    req( 'rd', 0x7, 0x1000, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x02020202 ),
    req( 'wr', 0x8, 0x1080, 0, 0x12121212 ), resp( 'wr', 0x8, 1,   0,  0          ),
    req( 'rd', 0x9, 0x1080, 0, 0          ), resp( 'rd', 0x9, 1,   0,  0x12121212 ),
    req( 'rd', 0xa, 0x1100, 0, 0          ), resp( 'rd', 0xa, 0,   0,  0xabcd1100 ), # conflicts
    req( 'rd', 0xb, 0x1080, 0, 0          ), resp( 'rd', 0xb, 1,   0,  0x12121212 ), # make sure way1 is still LRU

    req( 'wr', 0xc, 0x1000, 0, 0x03030303 ), resp( 'wr', 0xc, 0,   0,  0          ),
    req( 'rd', 0xd, 0x1000, 0, 0          ), resp( 'rd', 0xd, 1,   0,  0x03030303 ),
    req( 'wr', 0xe, 0x1080, 0, 0x13131313 ), resp( 'wr', 0xe, 1,   0,  0          ),
    req( 'rd', 0xf, 0x1080, 0, 0          ), resp( 'rd', 0xf, 1,   0,  0x13131313 ),
    req( 'rd', 0x0, 0x1100, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0xabcd1100 ), # conflicts
    req( 'rd', 0x1, 0x1080, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0x13131313 ), # make sure way1 is still LRU

    req( 'wr', 0x2, 0x1000, 0, 0x04040404 ), resp( 'wr', 0x2, 0,   0,  0          ),
    req( 'rd', 0x3, 0x1000, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x04040404 ),
    req( 'wr', 0x4, 0x1080, 0, 0x14141414 ), resp( 'wr', 0x4, 1,   0,  0          ),
    req( 'rd', 0x5, 0x1080, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x14141414 ),
    req( 'rd', 0x6, 0x1100, 0, 0          ), resp( 'rd', 0x6, 0,   0,  0xabcd1100 ), # conflicts
    req( 'rd', 0x7, 0x1080, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x14141414 ), # make sure way1 is still LRU

    req( 'rd', 0x8, 0x1000, 0, 0          ), resp( 'rd', 0x8, 0,   0,  0x04040404 ),
  ]

# Read miss with refill and eviction (uses data_64B), evicts the first cacheline

def evict_multi_word2():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x0, 0x2000, 0, 0xdeadbeef ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'wr', 0x1, 0x3010, 0, 0xabcd0000 ), resp( 'wr', 0x1, 0,   0,  0          ),
    req( 'wr', 0x2, 0x4020, 0, 0xedededed ), resp( 'wr', 0x2, 0,   0,  0          ),
    
    req( 'rd', 0x3, 0x1000, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0x000c0ffe ),
    req( 'rd', 0x4, 0x1010, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0x40404040 ),
    req( 'rd', 0x5, 0x1020, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0x80808080 ),
  ]

# Write miss with refill and no eviction: Init specific word in cacheline so that the cacheline is clean, then write miss (uses None)

def evict_multi_word3():
  return [
    #    type  opq  addr   len data                type  opq  test len data 
    req( 'wr', 0x3, 0x2000, 0, 0xbeefdeed ), resp( 'wr', 0x3, 0,   0,  0          ),
    req( 'wr', 0x4, 0x2010, 0, 0x0000abcd ), resp( 'wr', 0x4, 0,   0,  0          ),
    req( 'wr', 0x5, 0x2020, 0, 0xdededede ), resp( 'wr', 0x5, 0,   0,  0          ),
    
    req( 'rd', 0x6, 0x2000, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xbeefdeed ),
    req( 'rd', 0x7, 0x2010, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x0000abcd ),
    req( 'rd', 0x8, 0x2020, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0xdededede ),

    req( 'wr', 0x0, 0x1000, 0, 0xdeedbeef ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'wr', 0x1, 0x1010, 0, 0xabcd0000 ), resp( 'wr', 0x1, 0,   0,  0          ),
    req( 'wr', 0x2, 0x1020, 0, 0xedededed ), resp( 'wr', 0x2, 0,   0,  0          ),
    
    req( 'rd', 0x6, 0x1000, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xdeedbeef ),
    req( 'rd', 0x7, 0x1010, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd0000 ),
    req( 'rd', 0x8, 0x1020, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0xedededed ),
  ]

# Write every word on two cachelines, and then a read to a third
# cacheline. This read to the third cacheline is guaranteed to cause an
# eviction on both the direct mapped and set associative caches. (uses
# data_512B)

def evict_cacheline():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x0, 0x1000, 0, 0x01010101 ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'wr', 0x1, 0x1004, 0, 0x02020202 ), resp( 'wr', 0x1, 1,   0,  0          ),
    req( 'wr', 0x2, 0x1008, 0, 0x03030303 ), resp( 'wr', 0x2, 1,   0,  0          ),
    req( 'wr', 0x3, 0x100c, 0, 0x04040404 ), resp( 'wr', 0x3, 1,   0,  0          ),

    req( 'wr', 0x4, 0x1080, 0, 0x11111111 ), resp( 'wr', 0x4, 0,   0,  0          ),
    req( 'wr', 0x5, 0x1084, 0, 0x12121212 ), resp( 'wr', 0x5, 1,   0,  0          ),
    req( 'wr', 0x6, 0x1088, 0, 0x13131313 ), resp( 'wr', 0x6, 1,   0,  0          ),
    req( 'wr', 0x7, 0x108c, 0, 0x14141414 ), resp( 'wr', 0x7, 1,   0,  0          ),

    req( 'rd', 0x8, 0x1100, 0, 0          ), resp( 'rd', 0x8, 0,   0,  0xabcd1100 ), # conflicts

    req( 'rd', 0x9, 0x1000, 0, 0          ), resp( 'rd', 0x9, 0,   0,  0x01010101 ),
    req( 'rd', 0xa, 0x1004, 0, 0          ), resp( 'rd', 0xa, 1,   0,  0x02020202 ),
    req( 'rd', 0xb, 0x1008, 0, 0          ), resp( 'rd', 0xb, 1,   0,  0x03030303 ),
    req( 'rd', 0xc, 0x100c, 0, 0          ), resp( 'rd', 0xc, 1,   0,  0x04040404 ),
  ]

# Write one word from each cacheline, then evict (uses data_512B)
# Conflicts and capacity misses

def evict_multi_cacheline():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x0, 0x1000, 0, 0x10101010 ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'wr', 0x1, 0x1010, 0, 0x11111111 ), resp( 'wr', 0x1, 0,   0,  0          ),
    req( 'wr', 0x2, 0x1020, 0, 0x12121212 ), resp( 'wr', 0x2, 0,   0,  0          ),
    req( 'wr', 0x3, 0x1030, 0, 0x13131313 ), resp( 'wr', 0x3, 0,   0,  0          ),
    req( 'wr', 0x4, 0x1040, 0, 0x14141414 ), resp( 'wr', 0x4, 0,   0,  0          ),
    req( 'wr', 0x5, 0x1050, 0, 0x15151515 ), resp( 'wr', 0x5, 0,   0,  0          ),
    req( 'wr', 0x6, 0x1060, 0, 0x16161616 ), resp( 'wr', 0x6, 0,   0,  0          ),
    req( 'wr', 0x7, 0x1070, 0, 0x17171717 ), resp( 'wr', 0x7, 0,   0,  0          ),
    req( 'wr', 0x8, 0x1080, 0, 0x18181818 ), resp( 'wr', 0x8, 0,   0,  0          ),
    req( 'wr', 0x9, 0x1090, 0, 0x19191919 ), resp( 'wr', 0x9, 0,   0,  0          ),
    req( 'wr', 0xa, 0x10a0, 0, 0x1a1a1a1a ), resp( 'wr', 0xa, 0,   0,  0          ),
    req( 'wr', 0xb, 0x10b0, 0, 0x1b1b1b1b ), resp( 'wr', 0xb, 0,   0,  0          ),
    req( 'wr', 0xc, 0x10c0, 0, 0x1c1c1c1c ), resp( 'wr', 0xc, 0,   0,  0          ),
    req( 'wr', 0xd, 0x10d0, 0, 0x1d1d1d1d ), resp( 'wr', 0xd, 0,   0,  0          ),
    req( 'wr', 0xe, 0x10e0, 0, 0x1e1e1e1e ), resp( 'wr', 0xe, 0,   0,  0          ),
    req( 'wr', 0xf, 0x10f0, 0, 0x1f1f1f1f ), resp( 'wr', 0xf, 0,   0,  0          ),

    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x10101010 ),
    req( 'rd', 0x1, 0x1010, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0x11111111 ),
    req( 'rd', 0x2, 0x1020, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x12121212 ),
    req( 'rd', 0x3, 0x1030, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x13131313 ),
    req( 'rd', 0x4, 0x1040, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x14141414 ),
    req( 'rd', 0x5, 0x1050, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x15151515 ),
    req( 'rd', 0x6, 0x1060, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x16161616 ),
    req( 'rd', 0x7, 0x1070, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x17171717 ),
    req( 'rd', 0x8, 0x1080, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0x18181818 ),
    req( 'rd', 0x9, 0x1090, 0, 0          ), resp( 'rd', 0x9, 1,   0,  0x19191919 ),
    req( 'rd', 0xa, 0x10a0, 0, 0          ), resp( 'rd', 0xa, 1,   0,  0x1a1a1a1a ),
    req( 'rd', 0xb, 0x10b0, 0, 0          ), resp( 'rd', 0xb, 1,   0,  0x1b1b1b1b ),
    req( 'rd', 0xc, 0x10c0, 0, 0          ), resp( 'rd', 0xc, 1,   0,  0x1c1c1c1c ),
    req( 'rd', 0xd, 0x10d0, 0, 0          ), resp( 'rd', 0xd, 1,   0,  0x1d1d1d1d ),
    req( 'rd', 0xe, 0x10e0, 0, 0          ), resp( 'rd', 0xe, 1,   0,  0x1e1e1e1e ),
    req( 'rd', 0xf, 0x10f0, 0, 0          ), resp( 'rd', 0xf, 1,   0,  0x1f1f1f1f ),

    req( 'rd', 0x0, 0x1100, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0xabcd1100 ), # conflicts
    req( 'rd', 0x1, 0x1110, 0, 0          ), resp( 'rd', 0x1, 0,   0,  0xabcd1110 ), # conflicts
    req( 'rd', 0x2, 0x1120, 0, 0          ), resp( 'rd', 0x2, 0,   0,  0xabcd1120 ), # conflicts
    req( 'rd', 0x3, 0x1130, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0xabcd1130 ), # conflicts
    req( 'rd', 0x4, 0x1140, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0xabcd1140 ), # conflicts
    req( 'rd', 0x5, 0x1150, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0xabcd1150 ), # conflicts
    req( 'rd', 0x6, 0x1160, 0, 0          ), resp( 'rd', 0x6, 0,   0,  0xabcd1160 ), # conflicts
    req( 'rd', 0x7, 0x1170, 0, 0          ), resp( 'rd', 0x7, 0,   0,  0xabcd1170 ), # conflicts
    req( 'rd', 0x8, 0x1180, 0, 0          ), resp( 'rd', 0x8, 0,   0,  0xabcd1180 ), # conflicts
    req( 'rd', 0x9, 0x1190, 0, 0          ), resp( 'rd', 0x9, 0,   0,  0xabcd1190 ), # conflicts
    req( 'rd', 0xa, 0x11a0, 0, 0          ), resp( 'rd', 0xa, 0,   0,  0xabcd11a0 ), # conflicts
    req( 'rd', 0xb, 0x11b0, 0, 0          ), resp( 'rd', 0xb, 0,   0,  0xabcd11b0 ), # conflicts
    req( 'rd', 0xc, 0x11c0, 0, 0          ), resp( 'rd', 0xc, 0,   0,  0xabcd11c0 ), # conflicts
    req( 'rd', 0xd, 0x11d0, 0, 0          ), resp( 'rd', 0xd, 0,   0,  0xabcd11d0 ), # conflicts
    req( 'rd', 0xe, 0x11e0, 0, 0          ), resp( 'rd', 0xe, 0,   0,  0xabcd11e0 ), # conflicts
    req( 'rd', 0xf, 0x11f0, 0, 0          ), resp( 'rd', 0xf, 0,   0,  0xabcd11f0 ), # conflicts

    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0x10101010 ),
    req( 'rd', 0x1, 0x1010, 0, 0          ), resp( 'rd', 0x1, 0,   0,  0x11111111 ),
    req( 'rd', 0x2, 0x1020, 0, 0          ), resp( 'rd', 0x2, 0,   0,  0x12121212 ),
    req( 'rd', 0x3, 0x1030, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0x13131313 ),
    req( 'rd', 0x4, 0x1040, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0x14141414 ),
    req( 'rd', 0x5, 0x1050, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0x15151515 ),
    req( 'rd', 0x6, 0x1060, 0, 0          ), resp( 'rd', 0x6, 0,   0,  0x16161616 ),
    req( 'rd', 0x7, 0x1070, 0, 0          ), resp( 'rd', 0x7, 0,   0,  0x17171717 ),
    req( 'rd', 0x8, 0x1080, 0, 0          ), resp( 'rd', 0x8, 0,   0,  0x18181818 ),
    req( 'rd', 0x9, 0x1090, 0, 0          ), resp( 'rd', 0x9, 0,   0,  0x19191919 ),
    req( 'rd', 0xa, 0x10a0, 0, 0          ), resp( 'rd', 0xa, 0,   0,  0x1a1a1a1a ),
    req( 'rd', 0xb, 0x10b0, 0, 0          ), resp( 'rd', 0xb, 0,   0,  0x1b1b1b1b ),
    req( 'rd', 0xc, 0x10c0, 0, 0          ), resp( 'rd', 0xc, 0,   0,  0x1c1c1c1c ),
    req( 'rd', 0xd, 0x10d0, 0, 0          ), resp( 'rd', 0xd, 0,   0,  0x1d1d1d1d ),
    req( 'rd', 0xe, 0x10e0, 0, 0          ), resp( 'rd', 0xe, 0,   0,  0x1e1e1e1e ),
    req( 'rd', 0xf, 0x10f0, 0, 0          ), resp( 'rd', 0xf, 0,   0,  0x1f1f1f1f ),
  ]

#----------------------------------------------------------------------
# Random Test Case: random src/sink/ delays
#----------------------------------------------------------------------

srcd   = randint(0, 10) # random_src_delay
sinkd  = randint(0, 10) # random_sink_delay
latd   = randint(0, 5) # random_lat_delay
std = randint(0, 10)/10 # random_stall_delay

#-------------------------------------------------------------------------
# Generic tests
#-------------------------------------------------------------------------

test_case_table_generic = mk_test_case_table([
  (                                    "msg_func                     mem_data_func stall lat src sink"),

  [ "write_init_word",                  write_init_word,             None,         0.0,  0,  0,  0    ],
  [ "write_init_multi_word",            write_init_multi_word,       None,         0.0,  0,  0,  0    ],
  [ "write_init_cacheline",             write_init_cacheline,        None,         0.0,  0,  0,  0    ],
  [ "write_init_multi_cacheline",       write_init_multi_cacheline,  None,         0.0,  0,  0,  0    ],
  [ "write_init_multi_word_sink_delay", write_init_multi_word,       None,         0.0,  0,  0,  10   ],
  [ "write_init_multi_word_src_delay",  write_init_multi_word,       None,         0.0,  0,  10, 0    ],
  [ "write_init_multi_word_mem_delay",  write_init_multi_word,       None,         0.0,  3,  0,  0    ],
  [ "write_init_multi_word_delay",      write_init_multi_word,       None,         0.9,  3,  10, 10   ],
  [ "write_init_multi_word_rd_delay",   write_init_multi_word,       None,         std,latd,srcd,sinkd],

  [ "read_hit_word",                    read_hit_word,               None,         0.0,  0,  0,  0    ],
  [ "read_hit_multi_word",              read_hit_multi_word,         None,         0.0,  0,  0,  0    ],
  [ "read_hit_cacheline1",              read_hit_cacheline1,         None,         0.0,  0,  0,  0    ],
  [ "read_hit_cacheline2",              read_hit_cacheline2,         None,         0.0,  0,  0,  0    ],
  [ "read_hit_multi_cacheline1",        read_hit_multi_cacheline1,   None,         0.0,  0,  0,  0    ],
  [ "read_hit_multi_cacheline2",        read_hit_multi_cacheline2,   None,         0.0,  0,  0,  0    ],
  [ "read_hit_multi_word_sink_delay",   read_hit_multi_word,         None,         0.0,  0,  0,  10   ],
  [ "read_hit_multi_word_src_delay",    read_hit_multi_word,         None,         0.0,  0,  10, 0    ],
  [ "read_hit_multi_c1_sink_delay",     read_hit_multi_cacheline1,   None,         0.0,  0,  0,  10   ],
  [ "read_hit_multi_c1_src_delay",      read_hit_multi_cacheline1,   None,         0.0,  0,  10, 0    ],
  [ "read_hit_multi_c1_mem_delay",      read_hit_multi_cacheline2,   None,         0.9,  3,  0,  0    ],
  [ "read_hit_multi_c2_delay",          read_hit_multi_cacheline2,   None,         0.9,  3,  10, 10   ],
  [ "read_hit_multi_c2_rd_delay",       read_hit_multi_cacheline2,   None,         std,latd,srcd,sinkd],
  
  [ "write_hit_word",                   write_hit_word,              None,         0.0,  0,  0,  0    ],
  [ "write_hit_multi_word1",            write_hit_multi_word1,       None,         0.0,  0,  0,  0    ],
  [ "write_hit_multi_word2",            write_hit_multi_word2,       None,         0.0,  0,  0,  0    ],
  [ "write_hit_cacheline1",             write_hit_cacheline1,        None,         0.0,  0,  0,  0    ],
  [ "write_hit_cacheline2",             write_hit_cacheline2,        None,         0.0,  0,  0,  0    ],
  [ "write_hit_cacheline3",             write_hit_cacheline3,        None,         0.0,  0,  0,  0    ],
  [ "write_hit_multi_cacheline1",       write_hit_multi_cacheline1,  None,         0.0,  0,  0,  0    ],
  [ "write_hit_multi_cacheline2",       write_hit_multi_cacheline2,  None,         0.0,  0,  0,  0    ],
  [ "write_hit_multi_cacheline3",       write_hit_multi_cacheline3,  None,         0.0,  0,  0,  0    ],
  [ "write_hit_multi_word_sink_delay",  write_hit_multi_word1,       None,         0.0,  0,  0,  10   ],
  [ "write_hit_multi_word_src_delay",   write_hit_multi_word1,       None,         0.0,  0,  10, 0    ],
  [ "write_hit_multi_c1_sink_delay",    write_hit_multi_cacheline1,  None,         0.0,  0,  0,  10   ],
  [ "write_hit_multi_c1_src_delay",     write_hit_multi_cacheline1,  None,         0.0,  0,  10, 0    ],
  [ "write_hit_multi_c1_mem_delay",     write_hit_multi_cacheline2,  None,         0.9,  3,  0,  0    ],
  [ "write_hit_multi_c2_delay",         write_hit_multi_cacheline2,  None,         0.9,  3,  10, 10   ],
  [ "write_hit_multi_c2_rd_delay",      write_hit_multi_cacheline2,  None,         std,latd,srcd,sinkd],

  [ "read_miss_word",                   read_miss_word,              data_64B,     0.0,  0,  0,  0    ],
  [ "read_miss_multi_word",             read_miss_multi_word,        data_64B,     0.0,  0,  0,  0    ],
  [ "read_miss_cacheline1",             read_miss_cacheline1,        data_64B,     0.0,  0,  0,  0    ],
  [ "read_miss_cacheline2",             read_miss_cacheline2,        data_64B,     0.0,  0,  0,  0    ],
  [ "read_miss_multi_cacheline1",       read_miss_multi_cacheline1,  data_512B,    0.0,  0,  0,  0    ],
  [ "read_miss_multi_cacheline2",       read_miss_multi_cacheline2,  data_512B,    0.0,  0,  0,  0    ],
  [ "read_miss_refill_no_evict1",       read_miss_refill_no_evict1,  data_64B,     0.0,  0,  0,  0    ],
  [ "read_miss_refill_no_evict2",       read_miss_refill_no_evict2,  read_data1,   0.0,  0,  0,  0    ],
  [ "read_miss_refill_no_evict3",       read_miss_refill_no_evict3,  read_data1,   0.0,  0,  0,  0    ],
  [ "read_miss_multi_word_sink_delay",  read_miss_multi_word,        data_64B,     0.9,  3,  0,  10   ],
  [ "read_miss_multi_word_src_delay",   read_miss_multi_word,        data_64B,     0.9,  3,  10, 0    ],
  [ "read_miss_multi_word_rd_delay",    read_miss_multi_word,        data_64B,     std,latd,srcd,sinkd],

  [ "write_miss_word1",                 write_miss_word1,            data_64B,     0.0,  0,  0,  0    ],
  [ "write_miss_check_data",            write_miss_check_data,       data_64B,     0.0,  0,  0,  0    ],
  [ "write_miss_multi_word",            write_miss_multi_word,       data_64B,     0.0,  0,  0,  0    ],
  [ "write_miss_cacheline",             write_miss_cacheline,        data_64B,     0.0,  0,  0,  0    ],
  [ "write_miss_multi_cacheline1",      write_miss_multi_cacheline1, data_512B,    0.0,  0,  0,  0    ],
  [ "write_miss_multi_cacheline2",      write_miss_multi_cacheline2, data_512B,    0.0,  0,  0,  0    ],
  [ "write_miss_refill_no_evict1",      write_miss_refill_no_evict1, None,         0.0,  0,  0,  0    ],
  [ "write_miss_refill_no_evict2",      write_miss_refill_no_evict2, data_64B,     0.0,  0,  0,  0    ],
  [ "write_miss_refill_no_evict3",      write_miss_refill_no_evict3, data_64B,     0.0,  0,  0,  0    ],
  [ "write_miss_multi_word_sink_delay", write_miss_multi_word,       data_64B,     0.9,  3,  0,  10   ],
  [ "write_miss_multi_word_src_delay",  write_miss_multi_word,       data_64B,     0.9,  3,  10, 0    ],
  [ "write_miss_multi_word_rd_delay",   write_miss_multi_word,       data_64B,     std,latd,srcd,sinkd],

  [ "evict_word1",                      evict_word1,                 data_512B,    0.0,  0,  0,  0    ],
  [ "evict_word2",                      evict_word2,                 data_512B,    0.0,  0,  0,  0    ],
  [ "evict_check",                      evict_check,                 data_512B,    0.0,  0,  0,  0    ],
  [ "evict_multi_word1",                evict_multi_word1,           data_512B,    0.0,  0,  0,  0    ],
  [ "evict_multi_word2",                evict_multi_word2,           data_64B,     0.0,  0,  0,  0    ],
  [ "evict_multi_word3",                evict_multi_word3,           None,         0.0,  0,  0,  0    ],
  [ "evict_cacheline",                  evict_cacheline,             data_512B,    0.0,  0,  0,  0    ],
  [ "evict_multi_cacheline",            evict_multi_cacheline,       data_512B,    0.0,  0,  0,  0    ],
  [ "evict_multi_word_sink_delay",      evict_multi_word1,           data_512B,    0.9,  3,  0,  10   ],
  [ "evict_multi_word_src_delay",       evict_multi_word1,           data_512B,    0.9,  3,  10, 0    ],
  [ "evict_multi_word_mem_delay",       evict_multi_word1,           data_512B,    0.9,  3,  0,  0    ],
  [ "evict_multi_word_src_delay",       evict_multi_word1,           data_512B,    0.9,  3,  10, 10   ],
  [ "evict_multi_word_rd_delay",        evict_multi_word1,           data_512B,    std,latd,srcd,sinkd],
])

@pytest.mark.parametrize( **test_case_table_generic )
def test_generic( test_params, cmdline_opts ):
  run_test( CacheFL(), test_params, cmdline_opts, cmp_wo_test_field )

#-------------------------------------------------------------------------
# Test Case with Random Addresses and Data
#-------------------------------------------------------------------------

# address ranging from 0x1000 to 0x13FC (256 words)

def data_1KB():
  data = []
  for i in range(256):
    data.extend([0x00001000+i*4,0xabcd1000+i*4])
  return data

def data_2KB():
  data = []
  for i in range(512):
    data.extend([0x00001000+i*4,0x00011000+i*4])
  return data

#-------------------------------------------------------------------------
# Simple address patterns, single request type, with simple data
#-------------------------------------------------------------------------

# only read messages

def random_read_msgs():

  # Create list of 100 random request messages with the corresponding
  # correct response message.

  msgs = []
  for i in range(100):

    # Choose a random index to read

    idx = randint(0,256)

    # Create address and data. Notice how we turn the random index into
    # an actual address. We multiply the index by four and then add it to
    # the base address which is 0x00001000. We can figure out the correct
    # data from the address.

    addr = 0x00001000+idx*4
    data = 0xabcd1000+idx*4

    # Create a request/response pair.

    msgs.extend([
      #    type  opq  addr   len data       type  opq  test len data
      req( 'rd', i,   addr,  0,  0 ), resp( 'rd', i,   0,   0,  data ),
    ])
  
  return msgs

# only write messages

def random_write_msgs():
    
  # Create list of 100 random request messages with the corresponding
  # correct response message.

  msgs = []
  for i in range(100):

    # Choose a random index to read

    idx = randint(0,256)

    # Create address and data. Notice how we turn the random index into
    # an actual address. We multiply the index by four and then add it to
    # the base address which is 0x00001000. We can figure out the correct
    # data from the address.

    addr = 0x00001000+idx*4
    data = 0xabcd1000+idx*4

    # Create a request/response pair.

    msgs.extend([
      #    type  opq  addr   len data          type  opq  test len data
      req( 'wr', i,   addr,  0,  data ), resp( 'wr', i,   0,   0,  0 ),
    ])
    
  return msgs

#-------------------------------------------------------------------------
# Simple address patterns,data with random request types
#-------------------------------------------------------------------------

def random_mixed_msgs1():
  
  msgs = []
  data_array = data_1KB()

  for i in range(100):
    
    # Choose a random index
    idx = randint(0, 256)

    # Create address and data
    addr = 0x00001000 + idx * 4
    data = data_array[idx*2+1]

    data_update = data + 1

    # Randomly choose between 'rd' and 'wr'
    if randint(0,1) == 0:
        req_type = 'rd'
    else:
        req_type = 'wr'

    # Generate req and resp messages based on the choice
    if req_type == 'rd':
      msgs.extend([
        #   type  opq  addr   len data               type  opq  test len data
        req('rd', i,   addr,  0,  0           ), resp('rd', i,   0,   0,  data ),
      ])
    else:
      msgs.extend([
        #    type  opq  addr   len data              type  opq  test len data
        req('wr', i,   addr,  0,  data_update ), resp('wr', i,   0,   0,  0    ),
      ])
      # Update the data in data_array to reflect the write
      data_array[idx*2] = addr
      data_array[idx*2 + 1] = data_update
  return msgs

#-------------------------------------------------------------------------
# Simple address patterns,data, request type is fixed write-read
#-------------------------------------------------------------------------

def random_mixed_msgs2():
  msgs = []
  data_array = data_1KB()
  for i in range(100):

    # Choose a random index
    idx = randint(0, 256)

    # Create address and data
    addr = 0x00001000 + idx * 4
    data = 0xabcd1000 + idx * 4
    data_update = data + 1

    # wrtie 
    msgs.extend([
        #    type opq  addr   len data                  type opq  test len data
        req('wr', i,   addr,  0,  data_update ),  resp('wr', i,   0,   0,  0           ),
        req('rd', i,   addr,  0,  0           ),  resp('rd', i,   1,   0,  data_update ),
      ])
    
    # update the data in data_array to reflect the write
    data_array[idx*2] = addr
    data_array[idx*2 + 1] = data_update

  return msgs

#-------------------------------------------------------------------------
# Random address patterns, request types, and data
#-------------------------------------------------------------------------

def random_fully_mixed_msgs():
  msgs = []
  data_array = data_random()
  
  for i in range(100):

    # Choose a random index
    idx = randint(0, 256)

    # Create address and data
    addr = 0x00001000 + idx * 4
    data = data_array[idx*2+1]
    data_update = data + 1

    # Randomly choose between 'rd' and 'wr'
    if randint(0,1) == 0:
        req_type = 'rd'
    else:
        req_type = 'wr'

    # Generate req and resp messages based on the choice
    if req_type == 'rd':
      msgs.extend([
        #   type  opq  addr   len data               type  opq  test len data
        req('rd', i,   addr,  0,  0           ), resp('rd', i,   0,   0,  data ),
      ])
    else:
      msgs.extend([
        #    type  opq  addr   len data              type  opq  test len data
        req('wr', i,   addr,  0,  data_update ), resp('wr', i,   0,   0,  0    ),
      ])

      # update the data in data_array to reflect the write
      data_array[idx*2] = addr
      data_array[idx*2 + 1] = data_update
      
  return msgs

#-------------------------------------------------------------------------
# Unit stride with random data
#-------------------------------------------------------------------------

# read a, write b = a + random number, write c = a * random number

def random_unit_stride():
  msgs = []
  data_array = data_random()
    
  # Randomly selecting the starting address ensures that the generated address must be aligned
  addr_start_read1  = randint(0x100, 0x10F) * 0x10
  idx_start = (addr_start_read1-0x1000) // 4
  
  for i in range(100):
    # b = a + random number
    addr = addr_start_read1 + i * 4
    data = data_array[(idx_start+i)*2+1]
 
    # write
    msgs.extend([
      #   type  opq  addr   len data               type  opq  test len data
      req('rd', i,   addr,  0,  0         ), resp('rd', i,   0,   0,  data  ),
    ])

  return msgs

#-------------------------------------------------------------------------
# Stride with random data
#-------------------------------------------------------------------------

# read a, write b = a + random number, write c = a * random number

def random_stride():
  msgs = []
  data_array = data_random()
    
  # Randomly selecting the starting address ensures that the generated address must be aligned
  addr_start_read1  = randint(0x100, 0x10F) * 0x10
  addr = addr_start_read1
  
  for i in range(20):
    idx_stride = randint(0,5)
    addr = addr + idx_stride * 4
    idx = (addr-0x1000) // 4
    data = data_array[idx*2+1]
 
    # write
    msgs.extend([
      #   type  opq  addr   len data               type  opq  test len data
      req('rd', i,   addr,  0,  0         ), resp('rd', i,   0,   0,  data  ),
    ])

  return msgs

#-------------------------------------------------------------------------------
# Unit stride (high spatial locality) mixed with shared (high temporal locality)
#-------------------------------------------------------------------------------

# read a, write b = a + random number, write c = a * random number

def random_unit_stride_ms():
  
  msgs = []
  data_array = data_1KB()
  
  # Randomly selecting the starting address ensures that the generated address must be aligned
  addr_start_read1  = randint(0x100, 0x10F) * 0x10
  addr_start_write1 = addr_start_read1 + 0x0110
  addr_start_write2 = addr_start_read1 + 0x0220

  for i in range(20):

    # Create address and data
    # read data a
    addr_r1_0 = addr_start_read1 + i * 4
    addr_r1_4 = addr_r1_0 + 4
    addr_r1_8 = addr_r1_0 + 8
    addr_r1_c = addr_r1_0 + 12

    data_r1_0 = addr_start_read1 + 0x00010000 + i * 4
    data_r1_4 = data_r1_0 + 4
    data_r1_8 = data_r1_0 + 8
    data_r1_c = data_r1_0 + 12

    # b = a + random number
    addr_w1_0 = addr_start_write1 + i * 4
    addr_w1_4 = addr_w1_0 + 4
    addr_w1_8 = addr_w1_0 + 8
    addr_w1_c = addr_w1_0 + 12
    
    add_num = randint(0, 10)
    data_w1_0 = data_r1_0 + add_num
    data_w1_4 = data_r1_4 + add_num
    data_w1_8 = data_r1_8 + add_num
    data_w1_c = data_r1_c + add_num

    # c = a * 2
    addr_w2_0 = addr_start_write2 + i * 4
    addr_w2_4 = addr_w2_0 + 4
    addr_w2_8 = addr_w2_0 + 8
    addr_w2_c = addr_w2_0 + 12

    #mul_num = randint(1, 3)
    mul_num = 2
    data_w2_0 = data_r1_0 * mul_num
    data_w2_4 = data_r1_4 * mul_num
    data_w2_8 = data_r1_8 * mul_num
    data_w2_c = data_r1_c * mul_num
 
    # wrtie 
    msgs.extend([
      #   type  opq  addr        len data               type  opq  test len data
      req('rd', i,   addr_r1_0,  0,  0         ), resp('rd', i,   0,   0,  data_r1_0  ), # 1000
      req('wr', i,   addr_w1_0,  0,  data_w1_0 ), resp('wr', i,   0,   0,  0          ), # 1110
      req('wr', i,   addr_w2_0,  0,  data_w2_0 ), resp('wr', i,   0,   0,  0          ), # 1220
      req('rd', i,   addr_w1_0,  0,  0         ), resp('rd', i,   1,   0,  data_w1_0  ),
      req('rd', i,   addr_w2_0,  0,  0         ), resp('rd', i,   1,   0,  data_w2_0  ),

      req('rd', i,   addr_r1_4,  0,  0         ), resp('rd', i,   1,   0,  data_r1_4  ), # 1004
      req('wr', i,   addr_w1_4,  0,  data_w1_4 ), resp('wr', i,   1,   0,  0          ), # 1114
      req('wr', i,   addr_w2_4,  0,  data_w2_4 ), resp('wr', i,   1,   0,  0          ), # 1224
      req('rd', i,   addr_w1_4,  0,  0         ), resp('rd', i,   1,   0,  data_w1_4  ),
      req('rd', i,   addr_w2_4,  0,  0         ), resp('rd', i,   1,   0,  data_w2_4  ),

      req('rd', i,   addr_r1_8,  0,  0         ), resp('rd', i,   1,   0,  data_r1_8  ), # 1008
      req('wr', i,   addr_w1_8,  0,  data_w1_8 ), resp('wr', i,   1,   0,  0          ), # 1118
      req('wr', i,   addr_w2_8,  0,  data_w2_8 ), resp('wr', i,   1,   0,  0          ), # 1228
      req('rd', i,   addr_w1_8,  0,  0         ), resp('rd', i,   1,   0,  data_w1_8  ),
      req('rd', i,   addr_w2_8,  0,  0         ), resp('rd', i,   1,   0,  data_w2_8  ),

      req('rd', i,   addr_r1_c,  0,  0         ), resp('rd', i,   1,   0,  data_r1_c ),  # 100c
      req('wr', i,   addr_w1_c,  0,  data_w1_c ), resp('wr', i,   1,   0,  0          ), # 111c
      req('wr', i,   addr_w2_c,  0,  data_w2_c ), resp('wr', i,   1,   0,  0          ), # 122c
      req('rd', i,   addr_w1_c,  0,  0         ), resp('rd', i,   1,   0,  data_w1_c  ),
      req('rd', i,   addr_w2_c,  0,  0         ), resp('rd', i,   1,   0,  data_w2_c  ),
    ])
    
    # update the data array
    data_array[(addr_w1_0 - 0x1000) // 4 * 2 +1 ] = data_w1_0  # For b = a + random number
    data_array[(addr_w2_0 - 0x1000) // 4 * 2 +1 ] = data_w2_0  # For c = a * 2
    data_array[(addr_w1_4 - 0x1000) // 4 * 2 +1 ] = data_w1_4  # For b = a + random number
    data_array[(addr_w2_4 - 0x1000) // 4 * 2 +1 ] = data_w2_4  # For c = a * 2
    data_array[(addr_w1_8 - 0x1000) // 4 * 2 +1 ] = data_w1_8  # For b = a + random number
    data_array[(addr_w2_8 - 0x1000) // 4 * 2 +1 ] = data_w2_8  # For c = a * 2
    data_array[(addr_w1_c - 0x1000) // 4 * 2 +1 ] = data_w1_c  # For b = a + random number
    data_array[(addr_w2_c - 0x1000) // 4 * 2 +1 ] = data_w2_c  # For c = a * 2

  return msgs


test_case_table_random = mk_test_case_table([
  (                              "msg_func                mem_data_func stall lat src sink"),
  [ "random_read",               random_read_msgs,        data_1KB,     0.0,  0,  0,  0    ],
  [ "random_read_delays",        random_read_msgs,        data_1KB,     0.9,  3,  10, 10   ],
  [ "random_write",              random_write_msgs,       data_1KB,     0.0,  0,  0,  0    ],
  [ "random_write_delays",       random_write_msgs,       data_1KB,     0.9,  3,  10, 10   ],
  [ "random_mixed1",             random_mixed_msgs1,      data_1KB,     0.0,  0,  0,  0    ],
  [ "random_mixed1_delays",      random_mixed_msgs1,      data_1KB,     0.9,  3,  10, 10   ],
  [ "random_mixed2",             random_mixed_msgs2,      data_1KB,     0.0,  0,  0,  0    ],
  [ "random_mixed2_delays",      random_mixed_msgs2,      data_1KB,     0.9,  3,  10, 10   ],
  [ "random_fully_mixed",        random_fully_mixed_msgs, data_random,  0.0,  0,  0,  0    ],
  [ "random_fully_mixed_delays", random_fully_mixed_msgs, data_random,  0.0,  0,  0,  0    ],
  [ "random_unit_stride",        random_unit_stride,      data_random,  0.0,  0,  0,  0    ],
  [ "random_unit_stride_delays", random_unit_stride,      data_random,  0.9,  3,  10, 10   ],
  [ "random_stride",             random_stride,           data_random,  0.0,  0,  0,  0    ],
  [ "random_stride_delays",      random_stride,           data_random,  0.9,  3,  10, 10   ],
  [ "random_unit_stride_ms",     random_unit_stride_ms,   data_2KB,     0.0,  0,  0,  0    ],
  [ "random_unit_stride_delays", random_unit_stride_ms,   data_2KB,     0.9,  3,  10, 10   ],
  [ "random_unit_stride_delays", random_unit_stride_ms,   data_2KB,     std,latd,srcd,sinkd],
])

@pytest.mark.parametrize( **test_case_table_random )
def test_random( test_params, cmdline_opts ):
  run_test( CacheFL(), test_params, cmdline_opts, cmp_wo_test_field )

#-------------------------------------------------------------------------
# Test Cases for Direct Mapped
#-------------------------------------------------------------------------

# make 16 cache lines full

def read_miss_multi_cacheline_dm():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0xabcd1000 ),
    req( 'rd', 0x1, 0x1010, 0, 0          ), resp( 'rd', 0x1, 0,   0,  0xabcd1010 ),
    req( 'rd', 0x2, 0x1020, 0, 0          ), resp( 'rd', 0x2, 0,   0,  0xabcd1020 ),
    req( 'rd', 0x3, 0x1030, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0xabcd1030 ),
    req( 'rd', 0x4, 0x1040, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0xabcd1040 ),
    req( 'rd', 0x5, 0x1050, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0xabcd1050 ),
    req( 'rd', 0x6, 0x1060, 0, 0          ), resp( 'rd', 0x6, 0,   0,  0xabcd1060 ),
    req( 'rd', 0x7, 0x1070, 0, 0          ), resp( 'rd', 0x7, 0,   0,  0xabcd1070 ),
    req( 'rd', 0x8, 0x1080, 0, 0          ), resp( 'rd', 0x8, 0,   0,  0xabcd1080 ),
    req( 'rd', 0x9, 0x1090, 0, 0          ), resp( 'rd', 0x9, 0,   0,  0xabcd1090 ),
    req( 'rd', 0xa, 0x10a0, 0, 0          ), resp( 'rd', 0xa, 0,   0,  0xabcd10a0 ),
    req( 'rd', 0xb, 0x10b0, 0, 0          ), resp( 'rd', 0xb, 0,   0,  0xabcd10b0 ),
    req( 'rd', 0xc, 0x10c0, 0, 0          ), resp( 'rd', 0xc, 0,   0,  0xabcd10c0 ),
    req( 'rd', 0xd, 0x10d0, 0, 0          ), resp( 'rd', 0xd, 0,   0,  0xabcd10d0 ),
    req( 'rd', 0xe, 0x10e0, 0, 0          ), resp( 'rd', 0xe, 0,   0,  0xabcd10e0 ),
    req( 'rd', 0xf, 0x10f0, 0, 0          ), resp( 'rd', 0xf, 0,   0,  0xabcd10f0 ),

    req( 'rd', 0x0, 0x1004, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd1004 ),
    req( 'rd', 0x1, 0x1014, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd1014 ),
    req( 'rd', 0x2, 0x1024, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd1024 ),
    req( 'rd', 0x3, 0x1034, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd1034 ),
    req( 'rd', 0x4, 0x1044, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd1044 ),
    req( 'rd', 0x5, 0x1054, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd1054 ),
    req( 'rd', 0x6, 0x1064, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd1064 ),
    req( 'rd', 0x7, 0x1074, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd1074 ),
    req( 'rd', 0x8, 0x1084, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0xabcd1084 ),
    req( 'rd', 0x9, 0x1094, 0, 0          ), resp( 'rd', 0x9, 1,   0,  0xabcd1094 ),
    req( 'rd', 0xa, 0x10a4, 0, 0          ), resp( 'rd', 0xa, 1,   0,  0xabcd10a4 ),
    req( 'rd', 0xb, 0x10b4, 0, 0          ), resp( 'rd', 0xb, 1,   0,  0xabcd10b4 ),
    req( 'rd', 0xc, 0x10c4, 0, 0          ), resp( 'rd', 0xc, 1,   0,  0xabcd10c4 ),
    req( 'rd', 0xd, 0x10d4, 0, 0          ), resp( 'rd', 0xd, 1,   0,  0xabcd10d4 ),
    req( 'rd', 0xe, 0x10e4, 0, 0          ), resp( 'rd', 0xe, 1,   0,  0xabcd10e4 ),
    req( 'rd', 0xf, 0x10f4, 0, 0          ), resp( 'rd', 0xf, 1,   0,  0xabcd10f4 ),

    req( 'wr', 0x0, 0x1008, 0, 0x0000abcd ), resp( 'wr', 0x0, 1,   0,  0          ),
    req( 'wr', 0x1, 0x1018, 0, 0x0001abcd ), resp( 'wr', 0x1, 1,   0,  0          ),
    req( 'wr', 0x2, 0x1028, 0, 0x0002abcd ), resp( 'wr', 0x2, 1,   0,  0          ),
    req( 'wr', 0x3, 0x1038, 0, 0x0003abcd ), resp( 'wr', 0x3, 1,   0,  0          ),
    req( 'wr', 0x4, 0x1048, 0, 0x0004abcd ), resp( 'wr', 0x4, 1,   0,  0          ),
    req( 'wr', 0x5, 0x1058, 0, 0x0005abcd ), resp( 'wr', 0x5, 1,   0,  0          ),
    req( 'wr', 0x6, 0x1068, 0, 0x0006abcd ), resp( 'wr', 0x6, 1,   0,  0          ),
    req( 'wr', 0x7, 0x1078, 0, 0x0007abcd ), resp( 'wr', 0x7, 1,   0,  0          ),
    req( 'wr', 0x8, 0x1088, 0, 0x0008abcd ), resp( 'wr', 0x8, 1,   0,  0          ),
    req( 'wr', 0x9, 0x1098, 0, 0x0009abcd ), resp( 'wr', 0x9, 1,   0,  0          ),
    req( 'wr', 0xa, 0x10a8, 0, 0x000aabcd ), resp( 'wr', 0xa, 1,   0,  0          ),
    req( 'wr', 0xb, 0x10b8, 0, 0x000babcd ), resp( 'wr', 0xb, 1,   0,  0          ),
    req( 'wr', 0xc, 0x10c8, 0, 0x000cabcd ), resp( 'wr', 0xc, 1,   0,  0          ),
    req( 'wr', 0xd, 0x10d8, 0, 0x000dabcd ), resp( 'wr', 0xd, 1,   0,  0          ),
    req( 'wr', 0xe, 0x10e8, 0, 0x000eabcd ), resp( 'wr', 0xe, 1,   0,  0          ),
    req( 'wr', 0xf, 0x10f8, 0, 0x000fabcd ), resp( 'wr', 0xf, 1,   0,  0          ),

    req( 'rd', 0x0, 0x100c, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd100c ),
    req( 'rd', 0x1, 0x101c, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd101c ),
    req( 'rd', 0x2, 0x102c, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd102c ),
    req( 'rd', 0x3, 0x103c, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd103c ),
    req( 'rd', 0x4, 0x104c, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd104c ),
    req( 'rd', 0x5, 0x105c, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd105c ),
    req( 'rd', 0x6, 0x106c, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd106c ),
    req( 'rd', 0x7, 0x107c, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd107c ),
    req( 'rd', 0x8, 0x108c, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0xabcd108c ),
    req( 'rd', 0x9, 0x109c, 0, 0          ), resp( 'rd', 0x9, 1,   0,  0xabcd109c ),
    req( 'rd', 0xa, 0x10ac, 0, 0          ), resp( 'rd', 0xa, 1,   0,  0xabcd10ac ),
    req( 'rd', 0xb, 0x10bc, 0, 0          ), resp( 'rd', 0xb, 1,   0,  0xabcd10bc ),
    req( 'rd', 0xc, 0x10cc, 0, 0          ), resp( 'rd', 0xc, 1,   0,  0xabcd10cc ),
    req( 'rd', 0xd, 0x10dc, 0, 0          ), resp( 'rd', 0xd, 1,   0,  0xabcd10dc ),
    req( 'rd', 0xe, 0x10ec, 0, 0          ), resp( 'rd', 0xe, 1,   0,  0xabcd10ec ),
    req( 'rd', 0xf, 0x10fc, 0, 0          ), resp( 'rd', 0xf, 1,   0,  0xabcd10fc ),
 
    req( 'rd', 0x0, 0x1008, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x0000abcd ),
    req( 'rd', 0x1, 0x1018, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0x0001abcd ),
    req( 'rd', 0x2, 0x1028, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x0002abcd ),
    req( 'rd', 0x3, 0x1038, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x0003abcd ),
    req( 'rd', 0x4, 0x1048, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x0004abcd ),
    req( 'rd', 0x5, 0x1058, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x0005abcd ),
    req( 'rd', 0x6, 0x1068, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x0006abcd ),
    req( 'rd', 0x7, 0x1078, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x0007abcd ),
    req( 'rd', 0x8, 0x1088, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0x0008abcd ),
    req( 'rd', 0x9, 0x1098, 0, 0          ), resp( 'rd', 0x9, 1,   0,  0x0009abcd ),
    req( 'rd', 0xa, 0x10a8, 0, 0          ), resp( 'rd', 0xa, 1,   0,  0x000aabcd ),
    req( 'rd', 0xb, 0x10b8, 0, 0          ), resp( 'rd', 0xb, 1,   0,  0x000babcd ),
    req( 'rd', 0xc, 0x10c8, 0, 0          ), resp( 'rd', 0xc, 1,   0,  0x000cabcd ),
    req( 'rd', 0xd, 0x10d8, 0, 0          ), resp( 'rd', 0xd, 1,   0,  0x000dabcd ),
    req( 'rd', 0xe, 0x10e8, 0, 0          ), resp( 'rd', 0xe, 1,   0,  0x000eabcd ),
    req( 'rd', 0xf, 0x10f8, 0, 0          ), resp( 'rd', 0xf, 1,   0,  0x000fabcd ),
    
    req( 'wr', 0x0, 0x1100, 0, 0xabcd1101 ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'wr', 0x1, 0x1110, 0, 0xabcd1111 ), resp( 'wr', 0x1, 0,   0,  0          ),
    req( 'wr', 0x2, 0x1120, 0, 0xabcd1121 ), resp( 'wr', 0x2, 0,   0,  0          ),
    req( 'wr', 0x3, 0x1130, 0, 0xabcd1131 ), resp( 'wr', 0x3, 0,   0,  0          ),
    req( 'wr', 0x4, 0x1140, 0, 0xabcd1141 ), resp( 'wr', 0x4, 0,   0,  0          ),
    req( 'wr', 0x5, 0x1150, 0, 0xabcd1151 ), resp( 'wr', 0x5, 0,   0,  0          ),
    req( 'wr', 0x6, 0x1160, 0, 0xabcd1161 ), resp( 'wr', 0x6, 0,   0,  0          ),
    req( 'wr', 0x7, 0x1170, 0, 0xabcd1171 ), resp( 'wr', 0x7, 0,   0,  0          ),
    req( 'wr', 0x8, 0x1180, 0, 0xabcd1181 ), resp( 'wr', 0x8, 0,   0,  0          ),
    req( 'wr', 0x9, 0x1190, 0, 0xabcd1191 ), resp( 'wr', 0x9, 0,   0,  0          ),
    req( 'wr', 0xa, 0x11a0, 0, 0xabcd11a1 ), resp( 'wr', 0xa, 0,   0,  0          ),
    req( 'wr', 0xb, 0x11b0, 0, 0xabcd11b1 ), resp( 'wr', 0xb, 0,   0,  0          ),
    req( 'wr', 0xc, 0x11c0, 0, 0xabcd11c1 ), resp( 'wr', 0xc, 0,   0,  0          ),
    req( 'wr', 0xd, 0x11d0, 0, 0xabcd11d1 ), resp( 'wr', 0xd, 0,   0,  0          ),
    req( 'wr', 0xe, 0x11e0, 0, 0xabcd11e1 ), resp( 'wr', 0xe, 0,   0,  0          ),
    req( 'wr', 0xf, 0x11f0, 0, 0xabcd11f1 ), resp( 'wr', 0xf, 0,   0,  0          ),

    req( 'rd', 0x0, 0x1100, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd1101 ),
    req( 'rd', 0x1, 0x1110, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd1111 ),
    req( 'rd', 0x2, 0x1120, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd1121 ),
    req( 'rd', 0x3, 0x1130, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd1131 ),
    req( 'rd', 0x4, 0x1140, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd1141 ),
    req( 'rd', 0x5, 0x1150, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd1151 ),
    req( 'rd', 0x6, 0x1160, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd1161 ),
    req( 'rd', 0x7, 0x1170, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd1171 ),
    req( 'rd', 0x8, 0x1180, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0xabcd1181 ),
    req( 'rd', 0x9, 0x1190, 0, 0          ), resp( 'rd', 0x9, 1,   0,  0xabcd1191 ),
    req( 'rd', 0xa, 0x11a0, 0, 0          ), resp( 'rd', 0xa, 1,   0,  0xabcd11a1 ),
    req( 'rd', 0xb, 0x11b0, 0, 0          ), resp( 'rd', 0xb, 1,   0,  0xabcd11b1 ),
    req( 'rd', 0xc, 0x11c0, 0, 0          ), resp( 'rd', 0xc, 1,   0,  0xabcd11c1 ),
    req( 'rd', 0xd, 0x11d0, 0, 0          ), resp( 'rd', 0xd, 1,   0,  0xabcd11d1 ),
    req( 'rd', 0xe, 0x11e0, 0, 0          ), resp( 'rd', 0xe, 1,   0,  0xabcd11e1 ),
    req( 'rd', 0xf, 0x11f0, 0, 0          ), resp( 'rd', 0xf, 1,   0,  0xabcd11f1 ),

    req( 'rd', 0x0, 0x110c, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd110c ),
    req( 'rd', 0x1, 0x111c, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd111c ),
    req( 'rd', 0x2, 0x112c, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd112c ),
    req( 'rd', 0x3, 0x113c, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd113c ),
    req( 'rd', 0x4, 0x114c, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd114c ),
    req( 'rd', 0x5, 0x115c, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd115c ),
    req( 'rd', 0x6, 0x116c, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd116c ),
    req( 'rd', 0x7, 0x117c, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd117c ),
    req( 'rd', 0x8, 0x118c, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0xabcd118c ),
    req( 'rd', 0x9, 0x119c, 0, 0          ), resp( 'rd', 0x9, 1,   0,  0xabcd119c ),
    req( 'rd', 0xa, 0x11ac, 0, 0          ), resp( 'rd', 0xa, 1,   0,  0xabcd11ac ),
    req( 'rd', 0xb, 0x11bc, 0, 0          ), resp( 'rd', 0xb, 1,   0,  0xabcd11bc ),
    req( 'rd', 0xc, 0x11cc, 0, 0          ), resp( 'rd', 0xc, 1,   0,  0xabcd11cc ),
    req( 'rd', 0xd, 0x11dc, 0, 0          ), resp( 'rd', 0xd, 1,   0,  0xabcd11dc ),
    req( 'rd', 0xe, 0x11ec, 0, 0          ), resp( 'rd', 0xe, 1,   0,  0xabcd11ec ),
    req( 'rd', 0xf, 0x11fc, 0, 0          ), resp( 'rd', 0xf, 1,   0,  0xabcd11fc ),

  ]

# Read miss, write miss in the same set so that the cacheline will be refilled, this would be an error in the 2-way set associative cache

def write_miss_multi_word1_dm():
  return [    
    #    type  opq  addr   len data                type  opq  test len data
    req( 'rd', 0x3, 0x1000, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0x000c0ffe ),
    req( 'rd', 0x4, 0x1010, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0x40404040 ),
    req( 'rd', 0x5, 0x1020, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0x80808080 ),

    req( 'wr', 0x3, 0x2000, 0, 0xbeefdeed ), resp( 'wr', 0x3, 0,   0,  0          ),
    req( 'wr', 0x4, 0x2010, 0, 0x0000abcd ), resp( 'wr', 0x4, 0,   0,  0          ),
    req( 'wr', 0x5, 0x2020, 0, 0xdededede ), resp( 'wr', 0x5, 0,   0,  0          ),

    req( 'rd', 0x3, 0x1000, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0x000c0ffe ),
    req( 'rd', 0x4, 0x1010, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0x40404040 ),
    req( 'rd', 0x5, 0x1020, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0x80808080 ),
    
    req( 'rd', 0x3, 0x2000, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0xbeefdeed ),
    req( 'rd', 0x4, 0x2010, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0x0000abcd ),
    req( 'rd', 0x5, 0x2020, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0xdededede ),
  ]


test_case_table_dmap = mk_test_case_table([
  (                                             "msg_func                        mem_data_func      stall lat src sink"),
   [ "read_miss_multi_cacheline_dm1",           read_miss_multi_cacheline_dm,    data_512B,          0.0,  0,  0,  0    ],
   [ "read_miss_multi_cacheline_dm_src_delay",  read_miss_multi_cacheline_dm,    data_512B,          0.0,  0,  10, 0    ],
   [ "read_miss_multi_cacheline_dm_sink_delay", read_miss_multi_cacheline_dm,    data_512B,          0.0,  0,  0,  10   ],
   [ "read_miss_multi_cacheline_dm_mem_delay",  read_miss_multi_cacheline_dm,    data_512B,          0.9,  3,  0,  0    ],
   [ "read_miss_multi_cacheline_dm_delay",      read_miss_multi_cacheline_dm,    data_512B,          0.9,  3,  10, 10   ],

   [ "write_miss_multi_word1_dm",               write_miss_multi_word1_dm,       data_64B,           0.0,  0,  0,  0    ],
   [ "write_miss_multi_word_dm_src_delay",      write_miss_multi_word1_dm,       data_64B,           0.0,  0,  10, 0    ],
   [ "write_miss_multi_word_dm_sink_delay",     write_miss_multi_word1_dm,       data_64B,           0.0,  0,  0,  10   ],
   [ "write_miss_multi_word_dm_mem_delay",      write_miss_multi_word1_dm,       data_64B,           0.9,  3,  0,  0    ],
   [ "write_miss_multi_word_dm_delay",          write_miss_multi_word1_dm,       data_64B,           0.9,  3,  10, 10   ],
   
])

@pytest.mark.parametrize( **test_case_table_dmap )
def test_dmap( test_params, cmdline_opts ):
  run_test( CacheFL(), test_params, cmdline_opts, cmp_wo_test_field )

#-------------------------------------------------------------------------
# Test Cases for Set Associative
#-------------------------------------------------------------------------

#----------------------------------------------------------------------
# Test Cases for Refill on Read Miss - 2 Way Set Associative
#----------------------------------------------------------------------

# Read data miss for 2 way (uses data_64B)

def read_miss_word1_2way():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'rd', 0x1, 0x1000, 0, 0          ), resp( 'rd', 0x1, 0,   0,  0xabcd1000 ),
    req( 'rd', 0x2, 0x1100, 0, 0          ), resp( 'rd', 0x2, 0,   0,  0xabcd1100 ),
  ]

# Read data miss for 2 way (uses read_data2)
def read_miss_word2_2way():
  return [                                                                       
    #    type  opq  addr       len data                type  opq  test len data 
    req( 'rd', 0x0, 0x00000000, 0, 0      ), resp( 'rd', 0x0, 0,   0,  0xabababab ),
    req( 'rd', 0x1, 0x00000100, 0, 0      ), resp( 'rd', 0x1, 0,   0,  0x11c0ffee ),
    req( 'rd', 0x2, 0x00000200, 0, 0      ), resp( 'rd', 0x2, 0,   0,  0xffffffff ), 
    req( 'rd', 0x3, 0x00000000, 0, 0      ), resp( 'rd', 0x3, 0,   0,  0xabababab ), 
  ]

# Read data miss for 2 way (uses read_data2)
def read_miss_word3_2way():
  return [
    #    type  opq  addr       len data                type  opq  test len data  
    req( 'rd', 0x0, 0x00000840, 0, 0      ), resp( 'rd', 0x0, 0,   0,  0xdeadbeef ),  
    req( 'rd', 0x1, 0x00000140, 0, 0      ), resp( 'rd', 0x1, 0,   0,  0x00c0ffee ), 
    req( 'rd', 0x2, 0x00000e40, 0, 0      ), resp( 'rd', 0x2, 0,   0,  0xabcdef12 ), 
    req( 'rd', 0x3, 0x00000840, 0, 0      ), resp( 'rd', 0x3, 0,   0,  0xdeadbeef ), 
  ]

#  Read miss for each cacheline in one way, then read hit for each cacheline (uses data_512B), can test alternative design

def read_miss_multi_cacheline1_2way():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0xabcd1000 ),
    req( 'rd', 0x1, 0x1010, 0, 0          ), resp( 'rd', 0x1, 0,   0,  0xabcd1010 ),
    req( 'rd', 0x2, 0x1020, 0, 0          ), resp( 'rd', 0x2, 0,   0,  0xabcd1020 ),
    req( 'rd', 0x3, 0x1030, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0xabcd1030 ),
    req( 'rd', 0x4, 0x1040, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0xabcd1040 ),
    req( 'rd', 0x5, 0x1050, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0xabcd1050 ),
    req( 'rd', 0x6, 0x1060, 0, 0          ), resp( 'rd', 0x6, 0,   0,  0xabcd1060 ),
    req( 'rd', 0x7, 0x1070, 0, 0          ), resp( 'rd', 0x7, 0,   0,  0xabcd1070 ),

    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd1000 ),
    req( 'rd', 0x1, 0x1010, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd1010 ),
    req( 'rd', 0x2, 0x1020, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd1020 ),
    req( 'rd', 0x3, 0x1030, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd1030 ),
    req( 'rd', 0x4, 0x1040, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd1040 ),
    req( 'rd', 0x5, 0x1050, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd1050 ),
    req( 'rd', 0x6, 0x1060, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd1060 ),
    req( 'rd', 0x7, 0x1070, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd1070 ),

    req( 'rd', 0x0, 0x1004, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd1004 ),
    req( 'rd', 0x1, 0x1014, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd1014 ),
    req( 'rd', 0x2, 0x1024, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd1024 ),
    req( 'rd', 0x3, 0x1034, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd1034 ),
    req( 'rd', 0x4, 0x1044, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd1044 ),
    req( 'rd', 0x5, 0x1054, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd1054 ),
    req( 'rd', 0x6, 0x1064, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd1064 ),
    req( 'rd', 0x7, 0x1074, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd1074 ),
  ]

#  Read miss for each cacheline in two way, then read hit for each cacheline (uses data_8KB)

def read_miss_multi_cacheline2_2way():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0xabcd1000 ),
    req( 'rd', 0x1, 0x1010, 0, 0          ), resp( 'rd', 0x1, 0,   0,  0xabcd1010 ),
    req( 'rd', 0x2, 0x1020, 0, 0          ), resp( 'rd', 0x2, 0,   0,  0xabcd1020 ),
    req( 'rd', 0x3, 0x1030, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0xabcd1030 ),
    req( 'rd', 0x4, 0x1040, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0xabcd1040 ),
    req( 'rd', 0x5, 0x1050, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0xabcd1050 ),
    req( 'rd', 0x6, 0x1060, 0, 0          ), resp( 'rd', 0x6, 0,   0,  0xabcd1060 ),
    req( 'rd', 0x7, 0x1070, 0, 0          ), resp( 'rd', 0x7, 0,   0,  0xabcd1070 ),

    req( 'rd', 0x0, 0x2000, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0xabcd2000 ),
    req( 'rd', 0x1, 0x2010, 0, 0          ), resp( 'rd', 0x1, 0,   0,  0xabcd2010 ),
    req( 'rd', 0x2, 0x2020, 0, 0          ), resp( 'rd', 0x2, 0,   0,  0xabcd2020 ),
    req( 'rd', 0x3, 0x2030, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0xabcd2030 ),
    req( 'rd', 0x4, 0x2040, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0xabcd2040 ),
    req( 'rd', 0x5, 0x2050, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0xabcd2050 ),
    req( 'rd', 0x6, 0x2060, 0, 0          ), resp( 'rd', 0x6, 0,   0,  0xabcd2060 ),
    req( 'rd', 0x7, 0x2070, 0, 0          ), resp( 'rd', 0x7, 0,   0,  0xabcd2070 ),

    req( 'rd', 0x0, 0x1004, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd1004 ),
    req( 'rd', 0x1, 0x1014, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd1014 ),
    req( 'rd', 0x2, 0x1024, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd1024 ),
    req( 'rd', 0x3, 0x1034, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd1034 ),
    req( 'rd', 0x4, 0x1044, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd1044 ),
    req( 'rd', 0x5, 0x1054, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd1054 ),
    req( 'rd', 0x6, 0x1064, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd1064 ),
    req( 'rd', 0x7, 0x1074, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd1074 ),

    req( 'rd', 0x0, 0x2004, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd2004 ),
    req( 'rd', 0x1, 0x2014, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd2014 ),
    req( 'rd', 0x2, 0x2024, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd2024 ),
    req( 'rd', 0x3, 0x2034, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd2034 ),
    req( 'rd', 0x4, 0x2044, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd2044 ),
    req( 'rd', 0x5, 0x2054, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd2054 ),
    req( 'rd', 0x6, 0x2064, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd2064 ),
    req( 'rd', 0x7, 0x2074, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd2074 ),
  ]

#  Read miss for each cacheline in two way, then read hit for each cacheline (uses data_8KB)

def read_miss_multi_cacheline3_2way():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'rd', 0x0, 0x1008, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0xabcd1008 ),
    req( 'rd', 0x1, 0x1018, 0, 0          ), resp( 'rd', 0x1, 0,   0,  0xabcd1018 ),
    req( 'rd', 0x2, 0x1028, 0, 0          ), resp( 'rd', 0x2, 0,   0,  0xabcd1028 ),
    req( 'rd', 0x3, 0x1038, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0xabcd1038 ),
    req( 'rd', 0x4, 0x1048, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0xabcd1048 ),
    req( 'rd', 0x5, 0x1058, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0xabcd1058 ),
    req( 'rd', 0x6, 0x1068, 0, 0          ), resp( 'rd', 0x6, 0,   0,  0xabcd1068 ),
    req( 'rd', 0x7, 0x1078, 0, 0          ), resp( 'rd', 0x7, 0,   0,  0xabcd1078 ),

    req( 'rd', 0x0, 0x200c, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0xabcd200c ),
    req( 'rd', 0x1, 0x201c, 0, 0          ), resp( 'rd', 0x1, 0,   0,  0xabcd201c ),
    req( 'rd', 0x2, 0x202c, 0, 0          ), resp( 'rd', 0x2, 0,   0,  0xabcd202c ),
    req( 'rd', 0x3, 0x203c, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0xabcd203c ),
    req( 'rd', 0x4, 0x204c, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0xabcd204c ),
    req( 'rd', 0x5, 0x205c, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0xabcd205c ),
    req( 'rd', 0x6, 0x206c, 0, 0          ), resp( 'rd', 0x6, 0,   0,  0xabcd206c ),
    req( 'rd', 0x7, 0x207c, 0, 0          ), resp( 'rd', 0x7, 0,   0,  0xabcd207c ),

    req( 'rd', 0x0, 0x1004, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd1004 ),
    req( 'rd', 0x1, 0x1014, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd1014 ),
    req( 'rd', 0x2, 0x1024, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd1024 ),
    req( 'rd', 0x3, 0x1034, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd1034 ),
    req( 'rd', 0x4, 0x1044, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd1044 ),
    req( 'rd', 0x5, 0x1054, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd1054 ),
    req( 'rd', 0x6, 0x1064, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd1064 ),
    req( 'rd', 0x7, 0x1074, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd1074 ),

    req( 'rd', 0x0, 0x2004, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd2004 ),
    req( 'rd', 0x1, 0x2014, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd2014 ),
    req( 'rd', 0x2, 0x2024, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd2024 ),
    req( 'rd', 0x3, 0x2034, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd2034 ),
    req( 'rd', 0x4, 0x2044, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd2044 ),
    req( 'rd', 0x5, 0x2054, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd2054 ),
    req( 'rd', 0x6, 0x2064, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd2064 ),
    req( 'rd', 0x7, 0x2074, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd2074 ),
  ]

#----------------------------------------------------------------------
# Test Cases for Refill on Write Miss - 2 Way Set Associative
#----------------------------------------------------------------------

# Write/read one word from each cacheline (uses data_512B)

def write_miss_word1_2way():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x0, 0x1000, 0, 0x10101010 ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'wr', 0x8, 0x1080, 0, 0x18181818 ), resp( 'wr', 0x8, 0,   0,  0          ),

    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x10101010 ),
    req( 'rd', 0x8, 0x1080, 0, 0          ), resp( 'rd', 0x8, 1,   0,  0x18181818 ),
  ]

def write_miss_word2_2way():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x0, 0x0000, 0, 0xabababab ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'rd', 0x0, 0x0000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabababab ),

    req( 'wr', 0x0, 0x1000, 0, 0xcafecafe ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xcafecafe ),
  ]

# Read way1, write way0, read way1, write way2 (uses data_64B), this would be an error in the directed map caceh

def write_miss_multi_word1_2way():
  return [    
    #    type  opq  addr   len data                type  opq  test len data
    req( 'rd', 0x3, 0x1000, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0x000c0ffe ),
    req( 'rd', 0x4, 0x1010, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0x40404040 ),
    req( 'rd', 0x5, 0x1020, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0x80808080 ),

    req( 'wr', 0x3, 0x2000, 0, 0xbeefdeed ), resp( 'wr', 0x3, 0,   0,  0          ),
    req( 'wr', 0x4, 0x2010, 0, 0x0000abcd ), resp( 'wr', 0x4, 0,   0,  0          ),
    req( 'wr', 0x5, 0x2020, 0, 0xdededede ), resp( 'wr', 0x5, 0,   0,  0          ),

    req( 'rd', 0x3, 0x1000, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x000c0ffe ),
    req( 'rd', 0x4, 0x1010, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x40404040 ),
    req( 'rd', 0x5, 0x1020, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x80808080 ),
    
    req( 'rd', 0x3, 0x2000, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xbeefdeed ),
    req( 'rd', 0x4, 0x2010, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x0000abcd ),
    req( 'rd', 0x5, 0x2020, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xdededede ),
  ]

#  Write miss for each cacheline in one way, then read hit for each cacheline (uses data_512B), can test alternative design

def write_miss_multi_cacheline1_2way():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x0, 0x1000, 0, 0x1bcd1000 ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'wr', 0x1, 0x1010, 0, 0x1bcd1010 ), resp( 'wr', 0x1, 0,   0,  0          ),
    req( 'wr', 0x2, 0x1020, 0, 0x1bcd1020 ), resp( 'wr', 0x2, 0,   0,  0          ),
    req( 'wr', 0x3, 0x1030, 0, 0x1bcd1030 ), resp( 'wr', 0x3, 0,   0,  0          ),
    req( 'wr', 0x4, 0x1040, 0, 0x1bcd1040 ), resp( 'wr', 0x4, 0,   0,  0          ),
    req( 'wr', 0x5, 0x1050, 0, 0x1bcd1050 ), resp( 'wr', 0x5, 0,   0,  0          ),
    req( 'wr', 0x6, 0x1060, 0, 0x1bcd1060 ), resp( 'wr', 0x6, 0,   0,  0          ),
    req( 'wr', 0x7, 0x1070, 0, 0x1bcd1070 ), resp( 'wr', 0x7, 0,   0,  0          ),

    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x1bcd1000 ),
    req( 'rd', 0x1, 0x1010, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0x1bcd1010 ),
    req( 'rd', 0x2, 0x1020, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x1bcd1020 ),
    req( 'rd', 0x3, 0x1030, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x1bcd1030 ),
    req( 'rd', 0x4, 0x1040, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x1bcd1040 ),
    req( 'rd', 0x5, 0x1050, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x1bcd1050 ),
    req( 'rd', 0x6, 0x1060, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x1bcd1060 ),
    req( 'rd', 0x7, 0x1070, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x1bcd1070 ),

    req( 'rd', 0x0, 0x1004, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd1004 ),
    req( 'rd', 0x1, 0x1014, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd1014 ),
    req( 'rd', 0x2, 0x1024, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd1024 ),
    req( 'rd', 0x3, 0x1034, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd1034 ),
    req( 'rd', 0x4, 0x1044, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd1044 ),
    req( 'rd', 0x5, 0x1054, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd1054 ),
    req( 'rd', 0x6, 0x1064, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd1064 ),
    req( 'rd', 0x7, 0x1074, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd1074 ),
  ]

#  Read miss for each cacheline in two way, then read hit for each cacheline (uses data_8KB)

def write_miss_multi_cacheline2_2way():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x0, 0x1000, 0, 0x1bcd1000 ), resp( 'wr', 0x0, 0,   0,   0         ),
    req( 'wr', 0x1, 0x1010, 0, 0x1bcd1010 ), resp( 'wr', 0x1, 0,   0,   0         ),
    req( 'wr', 0x2, 0x1020, 0, 0x1bcd1020 ), resp( 'wr', 0x2, 0,   0,   0         ),
    req( 'wr', 0x3, 0x1030, 0, 0x1bcd1030 ), resp( 'wr', 0x3, 0,   0,   0         ),
    req( 'wr', 0x4, 0x1040, 0, 0x1bcd1040 ), resp( 'wr', 0x4, 0,   0,   0         ),
    req( 'wr', 0x5, 0x1050, 0, 0x1bcd1050 ), resp( 'wr', 0x5, 0,   0,   0         ),
    req( 'wr', 0x6, 0x1060, 0, 0x1bcd1060 ), resp( 'wr', 0x6, 0,   0,   0         ),
    req( 'wr', 0x7, 0x1070, 0, 0x1bcd1070 ), resp( 'wr', 0x7, 0,   0,   0         ),

    req( 'wr', 0x0, 0x2000, 0, 0x1bcd2000 ), resp( 'wr', 0x0, 0,   0,   0         ),
    req( 'wr', 0x1, 0x2010, 0, 0x1bcd2010 ), resp( 'wr', 0x1, 0,   0,   0         ),
    req( 'wr', 0x2, 0x2020, 0, 0x1bcd2020 ), resp( 'wr', 0x2, 0,   0,   0         ),
    req( 'wr', 0x3, 0x2030, 0, 0x1bcd2030 ), resp( 'wr', 0x3, 0,   0,   0         ),
    req( 'wr', 0x4, 0x2040, 0, 0x1bcd2040 ), resp( 'wr', 0x4, 0,   0,   0         ),
    req( 'wr', 0x5, 0x2050, 0, 0x1bcd2050 ), resp( 'wr', 0x5, 0,   0,   0         ),
    req( 'wr', 0x6, 0x2060, 0, 0x1bcd2060 ), resp( 'wr', 0x6, 0,   0,   0         ),
    req( 'wr', 0x7, 0x2070, 0, 0x1bcd2070 ), resp( 'wr', 0x7, 0,   0,   0         ),

    req( 'rd', 0x0, 0x1004, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd1004 ),
    req( 'rd', 0x1, 0x1014, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd1014 ),
    req( 'rd', 0x2, 0x1024, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd1024 ),
    req( 'rd', 0x3, 0x1034, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd1034 ),
    req( 'rd', 0x4, 0x1044, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd1044 ),
    req( 'rd', 0x5, 0x1054, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd1054 ),
    req( 'rd', 0x6, 0x1064, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd1064 ),
    req( 'rd', 0x7, 0x1074, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd1074 ),

    req( 'rd', 0x0, 0x2004, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd2004 ),
    req( 'rd', 0x1, 0x2014, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd2014 ),
    req( 'rd', 0x2, 0x2024, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd2024 ),
    req( 'rd', 0x3, 0x2034, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd2034 ),
    req( 'rd', 0x4, 0x2044, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd2044 ),
    req( 'rd', 0x5, 0x2054, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd2054 ),
    req( 'rd', 0x6, 0x2064, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd2064 ),
    req( 'rd', 0x7, 0x2074, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd2074 ),

    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x1bcd1000 ),
    req( 'rd', 0x1, 0x1010, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0x1bcd1010 ),
    req( 'rd', 0x2, 0x1020, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x1bcd1020 ),
    req( 'rd', 0x3, 0x1030, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x1bcd1030 ),
    req( 'rd', 0x4, 0x1040, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x1bcd1040 ),
    req( 'rd', 0x5, 0x1050, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x1bcd1050 ),
    req( 'rd', 0x6, 0x1060, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x1bcd1060 ),
    req( 'rd', 0x7, 0x1070, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x1bcd1070 ),

    req( 'rd', 0x0, 0x2000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x1bcd2000 ),
    req( 'rd', 0x1, 0x2010, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0x1bcd2010 ),
    req( 'rd', 0x2, 0x2020, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x1bcd2020 ),
    req( 'rd', 0x3, 0x2030, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x1bcd2030 ),
    req( 'rd', 0x4, 0x2040, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x1bcd2040 ),
    req( 'rd', 0x5, 0x2050, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x1bcd2050 ),
    req( 'rd', 0x6, 0x2060, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x1bcd2060 ),
    req( 'rd', 0x7, 0x2070, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x1bcd2070 ),
  ]

#  Read miss for each cacheline in two way, then read hit for each cacheline (uses data_8KB)

def write_miss_multi_cacheline3_2way():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x0, 0x1008, 0, 0xabcd1008 ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'wr', 0x1, 0x1018, 0, 0xabcd1018 ), resp( 'wr', 0x1, 0,   0,  0          ),
    req( 'wr', 0x2, 0x1028, 0, 0xabcd1028 ), resp( 'wr', 0x2, 0,   0,  0          ),
    req( 'wr', 0x3, 0x1038, 0, 0xabcd1038 ), resp( 'wr', 0x3, 0,   0,  0          ),
    req( 'wr', 0x4, 0x1048, 0, 0xabcd1048 ), resp( 'wr', 0x4, 0,   0,  0          ),
    req( 'wr', 0x5, 0x1058, 0, 0xabcd1058 ), resp( 'wr', 0x5, 0,   0,  0          ),
    req( 'wr', 0x6, 0x1068, 0, 0xabcd1068 ), resp( 'wr', 0x6, 0,   0,  0          ),
    req( 'wr', 0x7, 0x1078, 0, 0xabcd1078 ), resp( 'wr', 0x7, 0,   0,  0          ),

    req( 'wr', 0x0, 0x200c, 0, 0xabcd200c ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'wr', 0x1, 0x201c, 0, 0xabcd201c ), resp( 'wr', 0x1, 0,   0,  0          ),
    req( 'wr', 0x2, 0x202c, 0, 0xabcd202c ), resp( 'wr', 0x2, 0,   0,  0          ),
    req( 'wr', 0x3, 0x203c, 0, 0xabcd203c ), resp( 'wr', 0x3, 0,   0,  0          ),
    req( 'wr', 0x4, 0x204c, 0, 0xabcd204c ), resp( 'wr', 0x4, 0,   0,  0          ),
    req( 'wr', 0x5, 0x205c, 0, 0xabcd205c ), resp( 'wr', 0x5, 0,   0,  0          ),
    req( 'wr', 0x6, 0x206c, 0, 0xabcd206c ), resp( 'wr', 0x6, 0,   0,  0          ),
    req( 'wr', 0x7, 0x207c, 0, 0xabcd207c ), resp( 'wr', 0x7, 0,   0,  0          ),

    req( 'rd', 0x0, 0x1004, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd1004 ),
    req( 'rd', 0x1, 0x1014, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd1014 ),
    req( 'rd', 0x2, 0x1024, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd1024 ),
    req( 'rd', 0x3, 0x1034, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd1034 ),
    req( 'rd', 0x4, 0x1044, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd1044 ),
    req( 'rd', 0x5, 0x1054, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd1054 ),
    req( 'rd', 0x6, 0x1064, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd1064 ),
    req( 'rd', 0x7, 0x1074, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd1074 ),

    req( 'rd', 0x0, 0x2004, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd2004 ),
    req( 'rd', 0x1, 0x2014, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd2014 ),
    req( 'rd', 0x2, 0x2024, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd2024 ),
    req( 'rd', 0x3, 0x2034, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd2034 ),
    req( 'rd', 0x4, 0x2044, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd2044 ),
    req( 'rd', 0x5, 0x2054, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd2054 ),
    req( 'rd', 0x6, 0x2064, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd2064 ),
    req( 'rd', 0x7, 0x2074, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd2074 ),
  ]

#----------------------------------------------------------------------
# Test Cases for Evict- 2 Way Set Associative
#----------------------------------------------------------------------

# Write one word from each cacheline, then evict (uses data_512B), specifically for alternate design
# LRU replacement policy by filling up a way: may way 1 first full, then use way 0 to get data

def evict_multi_cacheline_2way():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x0, 0x1000, 0, 0x10101010 ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'wr', 0x1, 0x1010, 0, 0x11111111 ), resp( 'wr', 0x1, 0,   0,  0          ),
    req( 'wr', 0x2, 0x1020, 0, 0x12121212 ), resp( 'wr', 0x2, 0,   0,  0          ),
    req( 'wr', 0x3, 0x1030, 0, 0x13131313 ), resp( 'wr', 0x3, 0,   0,  0          ),
    req( 'wr', 0x4, 0x1040, 0, 0x14141414 ), resp( 'wr', 0x4, 0,   0,  0          ),
    req( 'wr', 0x5, 0x1050, 0, 0x15151515 ), resp( 'wr', 0x5, 0,   0,  0          ),
    req( 'wr', 0x6, 0x1060, 0, 0x16161616 ), resp( 'wr', 0x6, 0,   0,  0          ),
    req( 'wr', 0x7, 0x1070, 0, 0x17171717 ), resp( 'wr', 0x7, 0,   0,  0          ),

    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x10101010 ),
    req( 'rd', 0x1, 0x1010, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0x11111111 ),
    req( 'rd', 0x2, 0x1020, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x12121212 ),
    req( 'rd', 0x3, 0x1030, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x13131313 ),
    req( 'rd', 0x4, 0x1040, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x14141414 ),
    req( 'rd', 0x5, 0x1050, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x15151515 ),
    req( 'rd', 0x6, 0x1060, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x16161616 ),
    req( 'rd', 0x7, 0x1070, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x17171717 ),

    req( 'rd', 0x0, 0x1100, 0, 0          ), resp( 'rd', 0x0, 0,   0,  0xabcd1100 ), # no conflicts
    req( 'rd', 0x1, 0x1110, 0, 0          ), resp( 'rd', 0x1, 0,   0,  0xabcd1110 ), # no conflicts
    req( 'rd', 0x2, 0x1120, 0, 0          ), resp( 'rd', 0x2, 0,   0,  0xabcd1120 ), # no conflicts
    req( 'rd', 0x3, 0x1130, 0, 0          ), resp( 'rd', 0x3, 0,   0,  0xabcd1130 ), # no conflicts
    req( 'rd', 0x4, 0x1140, 0, 0          ), resp( 'rd', 0x4, 0,   0,  0xabcd1140 ), # no conflicts
    req( 'rd', 0x5, 0x1150, 0, 0          ), resp( 'rd', 0x5, 0,   0,  0xabcd1150 ), # no conflicts
    req( 'rd', 0x6, 0x1160, 0, 0          ), resp( 'rd', 0x6, 0,   0,  0xabcd1160 ), # no conflicts
    req( 'rd', 0x7, 0x1170, 0, 0          ), resp( 'rd', 0x7, 0,   0,  0xabcd1170 ), # no conflicts

    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x10101010 ),
    req( 'rd', 0x1, 0x1010, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0x11111111 ),
    req( 'rd', 0x2, 0x1020, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0x12121212 ),
    req( 'rd', 0x3, 0x1030, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0x13131313 ),
    req( 'rd', 0x4, 0x1040, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0x14141414 ),
    req( 'rd', 0x5, 0x1050, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0x15151515 ),
    req( 'rd', 0x6, 0x1060, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0x16161616 ),
    req( 'rd', 0x7, 0x1070, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0x17171717 ),

    req( 'rd', 0x0, 0x1100, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0xabcd1100 ), # no conflicts
    req( 'rd', 0x1, 0x1110, 0, 0          ), resp( 'rd', 0x1, 1,   0,  0xabcd1110 ), # no conflicts
    req( 'rd', 0x2, 0x1120, 0, 0          ), resp( 'rd', 0x2, 1,   0,  0xabcd1120 ), # no conflicts
    req( 'rd', 0x3, 0x1130, 0, 0          ), resp( 'rd', 0x3, 1,   0,  0xabcd1130 ), # no conflicts
    req( 'rd', 0x4, 0x1140, 0, 0          ), resp( 'rd', 0x4, 1,   0,  0xabcd1140 ), # no conflicts
    req( 'rd', 0x5, 0x1150, 0, 0          ), resp( 'rd', 0x5, 1,   0,  0xabcd1150 ), # no conflicts
    req( 'rd', 0x6, 0x1160, 0, 0          ), resp( 'rd', 0x6, 1,   0,  0xabcd1160 ), # no conflicts
    req( 'rd', 0x7, 0x1170, 0, 0          ), resp( 'rd', 0x7, 1,   0,  0xabcd1170 ), # no conflicts
  ]

# LRU replacement policy by filling up a way

def evict_multi_cacheline_2way():
  return [
    #    type  opq  addr   len data                type  opq  test len data
    req( 'wr', 0x0, 0x1000, 0, 0x10101010 ), resp( 'wr', 0x0, 0,   0,  0          ),
    req( 'wr', 0x1, 0x1010, 0, 0x11111111 ), resp( 'wr', 0x1, 0,   0,  0          ),
    req( 'wr', 0x2, 0x1020, 0, 0x12121212 ), resp( 'wr', 0x2, 0,   0,  0          ),
    req( 'wr', 0x3, 0x1030, 0, 0x13131313 ), resp( 'wr', 0x3, 0,   0,  0          ),
    req( 'wr', 0x4, 0x1040, 0, 0x14141414 ), resp( 'wr', 0x4, 0,   0,  0          ),
    req( 'wr', 0x5, 0x1050, 0, 0x15151515 ), resp( 'wr', 0x5, 0,   0,  0          ),
    req( 'wr', 0x6, 0x1060, 0, 0x16161616 ), resp( 'wr', 0x6, 0,   0,  0          ),
    req( 'wr', 0x7, 0x1070, 0, 0x17171717 ), resp( 'wr', 0x7, 0,   0,  0          ),
    
    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x10101010 ),
    req( 'rd', 0x0, 0x1000, 0, 0          ), resp( 'rd', 0x0, 1,   0,  0x10101010 ),
    
  ]

test_case_table_sassoc = mk_test_case_table([
  (                                        "msg_func                         mem_data_func    stall lat src sink"),

  [ "read_miss_word1_2way",                read_miss_word1_2way,             data_512B,         0.0,  0,  0,  0    ],
  [ "read_miss_word2_2way",                read_miss_word2_2way,             read_data2,        0.0,  0,  0,  0    ],
  [ "read_miss_word3_2way",                read_miss_word3_2way,             read_data2,        0.0,  0,  0,  0    ],
  [ "read_miss_multi_c1_2way",             read_miss_multi_cacheline1_2way,  data_512B,         0.0,  0,  0,  0    ],
  [ "read_miss_multi_c2_2way",             read_miss_multi_cacheline2_2way,  data_8KB,          0.0,  0,  0,  0    ],
  [ "read_miss_multi_c3_2way",             read_miss_multi_cacheline3_2way,  data_8KB,          0.0,  0,  0,  0    ],
  [ "read_miss_multi_c1_2way_sink_delay",  read_miss_multi_cacheline1_2way,  data_8KB,          0.0,  0,  0,  10   ],
  [ "read_miss_multi_c1_2way_src_delay",   read_miss_multi_cacheline1_2way,  data_8KB,          0.0,  0,  10, 0    ],
  [ "read_miss_multi_c1_2way_mem_delay",   read_miss_multi_cacheline1_2way,  data_8KB,          0.9,  3,  10, 10   ],
  [ "read_miss_multi_c2_2way_delay",       read_miss_multi_cacheline2_2way,  data_8KB,          0.9,  3,  10, 10   ],
  
  [ "write_miss_word1_2way",               write_miss_word1_2way,            data_512B,         0.0,  0,  0,  0    ],
  [ "write_miss_word2_2way",               write_miss_word2_2way,            data_512B,         0.0,  0,  0,  0    ],
  [ "write_miss_multi_word1_2way",         write_miss_multi_word1_2way,      data_64B,          0.0,  0,  0,  0    ],
  [ "write_miss_multi_c1_2way",            write_miss_multi_cacheline1_2way, data_512B,         0.0,  0,  0,  0    ],
  [ "write_miss_multi_c2_2way",            write_miss_multi_cacheline2_2way, data_8KB,          0.0,  0,  0,  0    ],
  [ "write_miss_multi_c3_2way",            write_miss_multi_cacheline3_2way, data_8KB,          0.0,  0,  0,  0    ],
  [ "write_miss_multi_c1_2way_sink_delay", write_miss_multi_cacheline1_2way, data_8KB,          0.0,  0,  0,  10   ],
  [ "write_miss_multi_c1_2way_src_delay",  write_miss_multi_cacheline1_2way, data_8KB,          0.0,  0,  10, 0    ],
  [ "write_miss_multi_c1_2way_mem_delay",  write_miss_multi_cacheline1_2way, data_8KB,          0.9,  3,  10, 10   ],
  [ "write_miss_multi_c2_2way_delay",      write_miss_multi_cacheline2_2way, data_8KB,          0.9,  3,  10, 10   ],

  [ "evict_multi_cacheline_2way" ,         evict_multi_cacheline_2way,       data_512B,         0.0,  0,  0,  0    ],
  [ "evict_multi_cacheline_2way",          evict_multi_cacheline_2way,       data_512B,         std,latd,srcd,sinkd],
  
])

@pytest.mark.parametrize( **test_case_table_sassoc )
def test_sassoc( test_params, cmdline_opts ):
  run_test( CacheFL(), test_params, cmdline_opts, cmp_wo_test_field )

#-------------------------------------------------------------------------
# Banked cache test
#-------------------------------------------------------------------------
# This test case is to test if the bank offset is implemented correctly.
# The idea behind this test case is to differentiate between a cache with
# no bank bits and a design has one/two bank bits by looking at cache
# request hit/miss status.

# We first design a test case for 2-way set-associative cache. The last
# request should hit only if students implement the correct index bit to
# be [6:9]. If they implement the index bit to be [4:7] or [5:8], the
# last request is a miss, which is wrong. See below for explanation. This
# test case also works for the baseline direct-mapped cache.

# Direct-mapped
#
#   no bank(should fail):
#      idx
#   00 0000 0000
#   01 0000 0000
#   10 0000 0000
#   00 0000 0000
#   idx: 0, 0, 0 so the third one with tag 10 will evict the first one
#   with tag 00, and thus the fourth read will miss instead of hit.
#
#   4-bank(correct):
#    idx  bk
#   00 00 00 0000
#   01 00 00 0000
#   10 00 00 0000
#   00 00 00 0000
#   idx: 0, 4, 8 so the third one with tag 10 won't evict anything, and
#   thus the fourth read will hit.

# 2-way set-associative
#
#   no bank(should fail):
#        idx
#   00 0 000 0000
#   01 0 000 0000
#   10 0 000 0000
#   00 0 000 0000
#   idx: 0, 0, 0 so the third one with tag 10 will evict the first one
#   with tag 00, and thus the fourth read will miss instead of hit.
#
#   4-bank(correct):
#     idx  bk
#   0 0 00 00 0000
#   0 1 00 00 0000
#   1 0 00 00 0000
#   idx: 0, 4, 0 so the third one with tag 10 won't evict anything, and
#   thus the fourth read will hit.

# def bank_test():
#   return [
#     #    type  opq  addr       len data                type  opq  test len data      idx   bk             idx  bk
#     req( 'rd', 0x0, 0x00000000, 0, 0 ), resp( 'rd', 0x0, 0,   0,  0xdeadbeef ), # 00 00 00 00 0000 | 0000 0000 0000  
#     req( 'rd', 0x1, 0x00000100, 0, 0 ), resp( 'rd', 0x1, 0,   0,  0x00c0ffee ), # 00 01 00 00 0000 | 0001 0000 0000
#     req( 'rd', 0x2, 0x00000200, 0, 0 ), resp( 'rd', 0x2, 0,   0,  0xffffffff ), # 00 10 00 00 0000 | 0010 0000 0000 
#     req( 'rd', 0x3, 0x00000000, 0, 0 ), resp( 'rd', 0x3, 1,   0,  0xdeadbeef ), # 00 00 00 00 0000 | 0000 0000 0000
#   ]

def bank_test1():
  return [                                                                         # baseline                          # alternative 
    #    type  opq  addr       len data                type  opq  test len data  tag  idx  bk        tag   idx         tag   idx  bk 
    req( 'rd', 0x0, 0x00000000, 0, 0 ), resp( 'rd', 0x0, 0,   0,  0xdeadbeef ), # 00 00 00 00 0000 | 0000 0000 0000 |  00 0 0 00  00 0000
    req( 'rd', 0x1, 0x00000100, 0, 0 ), resp( 'rd', 0x1, 0,   0,  0x00c0ffee ), # 00 01 00 00 0000 | 0001 0000 0000 |  00 0 1 00  00 0000
    req( 'rd', 0x2, 0x00000200, 0, 0 ), resp( 'rd', 0x2, 0,   0,  0xffffffff ), # 00 10 00 00 0000 | 0010 0000 0000 |  00 1 0 00  00 0000
    req( 'rd', 0x3, 0x00000000, 0, 0 ), resp( 'rd', 0x3, 1,   0,  0xdeadbeef ), # 00 00 00 00 0000 | 0000 0000 0000 |  00 0 0 00  00 0000
  ]

def bank_test_data1():
  return [
    # addr      data (in int)
    0x00000000, 0xdeadbeef,
    0x00000004, 0x01010101,
    0x00000008, 0xabababab,
    0x0000000c, 0xcd00cd00,
    0x00000100, 0x00c0ffee,
    0x00000200, 0xffffffff,
  ]

def bank_test2():
  return [
    #    type  opq  addr       len data                type  opq  test len data  tag   idx   bk      tag  idx  
    req( 'rd', 0x0, 0x00000800, 0, 0 ), resp( 'rd', 0x0, 0,   0,  0xdeadbeef ), # 10 00 00 00 0000 | 1000 0000 0000  
    req( 'rd', 0x1, 0x00000100, 0, 0 ), resp( 'rd', 0x1, 0,   0,  0x00c0ffee ), # 00 01 00 00 0000 | 0001 0000 0000
    req( 'rd', 0x2, 0x00000e00, 0, 0 ), resp( 'rd', 0x2, 0,   0,  0xabcdef12 ), # 11 10 00 00 0000 | 1110 0000 0000 
    req( 'rd', 0x3, 0x00000800, 0, 0 ), resp( 'rd', 0x3, 1,   0,  0xdeadbeef ), # 10 00 00 00 0000 | 1000 0000 0000
  ]

def bank_test_data2():
  return [
    # addr      data (in int)
    0x00000000, 0xabababab,
    0x00000004, 0x01010101,
    0x00000008, 0x12345678,
    0x0000000c, 0xcd00cd00,
    0x00000100, 0x00c0ffee,
    0x00000200, 0xffffffff,
    0x00000400, 0x10203040,
    0x00000800, 0xdeadbeef,
    0x00000e00, 0xabcdef12,
  ]
  
def bank_test3():
  return [
    #    type  opq  addr       len data                type  opq  test len data  tag  idx   bk       tag  idx  
    req( 'rd', 0x0, 0x00000840, 0, 0 ), resp( 'rd', 0x0, 0,   0,  0xdeadbeef ), # 10 00 01 00 0000 | 1000 0100 0000  
    req( 'rd', 0x1, 0x00000140, 0, 0 ), resp( 'rd', 0x1, 0,   0,  0x00c0ffee ), # 00 01 01 00 0000 | 0001 0100 0000
    req( 'rd', 0x2, 0x00000e40, 0, 0 ), resp( 'rd', 0x2, 0,   0,  0xabcdef12 ), # 11 10 01 00 0000 | 1110 0100 0000 
    req( 'rd', 0x3, 0x00000840, 0, 0 ), resp( 'rd', 0x3, 1,   0,  0xdeadbeef ), # 10 00 01 00 0000 | 1000 0100 0000
  ]

def bank_test_data3():
  return [
    # addr      data (in int)
    0x00000000, 0xabababab,
    0x00000004, 0x01010101,
    0x00000008, 0x12345678,
    0x0000000c, 0xcd00cd00,
    0x00000140, 0x00c0ffee,
    0x00000200, 0xffffffff,
    0x00000400, 0x10203040,
    0x00000840, 0xdeadbeef,
    0x00000e40, 0xabcdef12,
  ]


test_case_table_bank = mk_test_case_table([
  (                          "msg_func   mem_data_func    stall lat src sink"),
  [ "bank_test1",            bank_test1, bank_test_data1, 0.0,  0,  0,  0    ],
  [ "bank_test2",            bank_test2, bank_test_data2, 0.0,  0,  0,  0    ],
  [ "bank_test3",            bank_test3, bank_test_data3, 0.0,  0,  0,  0    ],
  [ "bank_test1_src_delay",  bank_test1, bank_test_data1, 0.0,  0,  3,  0    ],
  [ "bank_test1_sink_delay", bank_test1, bank_test_data1, 0.0,  0,  0,  3    ],
  [ "bank_test1_mem_delay",  bank_test1, bank_test_data1, 0.9,  3,  0,  0    ],
  [ "bank_test1_delay",      bank_test1, bank_test_data1, 0.9,  3,  3,  3    ],

])

@pytest.mark.parametrize( **test_case_table_bank )
def test_bank( test_params, cmdline_opts ):
  run_test( CacheFL(), test_params, cmdline_opts, cmp_wo_test_field )
