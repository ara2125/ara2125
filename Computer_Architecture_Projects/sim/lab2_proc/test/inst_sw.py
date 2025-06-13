#=========================================================================
# sw
#=========================================================================

import random

# Fix the random seed so results are reproducible
random.seed(0xdeadbeef)

from pymtl3 import *
from lab2_proc.test.inst_utils import *

#-------------------------------------------------------------------------
# gen_basic_test
#-------------------------------------------------------------------------

def gen_basic_test():
  return """
    csrr x1, mngr2proc < 0x00002000
    csrr x2, mngr2proc < 0x01020304
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sw   x2, 0(x1)
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lw   x3, 0(x1)
    csrw proc2mngr, x3 > 0x01020304
  """

#-------------------------------------------------------------------------
# gen_addr_test
#-------------------------------------------------------------------------

def gen_addr_test():
  return [
    # Test positive offsets
    gen_st_value_test( 0, 0, "x1", "x2", "sw",   0, 0x00002000, 0xdeadbeef ),
    gen_st_value_test( 0, 0, "x1", "x2", "sw",   4, 0x00002000, 0x00010203 ),
    gen_st_value_test( 0, 0, "x1", "x2", "sw",   8, 0x00002000, 0x04050607 ),
    gen_st_value_test( 0, 0, "x1", "x2", "sw",  12, 0x00002000, 0x08090a0b ),
    gen_st_value_test( 0, 0, "x1", "x2", "sw",  16, 0x00002000, 0x0c0d0e0f ),
    gen_st_value_test( 0, 0, "x1", "x2", "sw",  20, 0x00002000, 0xcafecafe ),

    # Test negative offsets
    gen_st_value_test( 0, 0, "x1", "x2", "sw", -20, 0x00002014, 0xdeadbeef ),
    gen_st_value_test( 0, 0, "x1", "x2", "sw", -16, 0x00002014, 0x00010203 ),
    gen_st_value_test( 0, 0, "x1", "x2", "sw", -12, 0x00002014, 0x04050607 ),
    gen_st_value_test( 0, 0, "x1", "x2", "sw",  -8, 0x00002014, 0x08090a0b ),
    gen_st_value_test( 0, 0, "x1", "x2", "sw",  -4, 0x00002014, 0x0c0d0e0f ),
    gen_st_value_test( 0, 0, "x1", "x2", "sw",   0, 0x00002014, 0xcafecafe ),

    # Test positive offset with unaligned base
    gen_st_value_test( 0, 0, "x1", "x2", "sw",   1, 0x00001fff, 0xdeadbeef ),
    gen_st_value_test( 0, 0, "x1", "x2", "sw",   5, 0x00001fff, 0x00010203 ),
    gen_st_value_test( 0, 0, "x1", "x2", "sw",   9, 0x00001fff, 0x04050607 ),
    gen_st_value_test( 0, 0, "x1", "x2", "sw",  13, 0x00001fff, 0x08090a0b ),
    gen_st_value_test( 0, 0, "x1", "x2", "sw",  17, 0x00001fff, 0x0c0d0e0f ),
    gen_st_value_test( 0, 0, "x1", "x2", "sw",  21, 0x00001fff, 0xcafecafe ),

    # Test negative offset with unaligned base
    gen_st_value_test( 0, 0, "x1", "x2", "sw", -21, 0x00002015, 0xdeadbeef ),
    gen_st_value_test( 0, 0, "x1", "x2", "sw", -17, 0x00002015, 0x00010203 ),
    gen_st_value_test( 0, 0, "x1", "x2", "sw", -13, 0x00002015, 0x04050607 ),
    gen_st_value_test( 0, 0, "x1", "x2", "sw",  -9, 0x00002015, 0x08090a0b ),
    gen_st_value_test( 0, 0, "x1", "x2", "sw",  -5, 0x00002015, 0x0c0d0e0f ),
    gen_st_value_test( 0, 0, "x1", "x2", "sw",  -1, 0x00002015, 0xcafecafe ),
  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  # Generate some random data
  data = []
  for i in range(128):
    data.append( random.randint(0,0xffffffff) )

  # Generate random accesses to this data
  asm_code = []
  for i in range(100):
    a = random.randint(0,127)
    b = random.randint(0,127)

    base   = 0x2000 + (4*b)
    offset = 4*(a - b)
    value  = data[a]
    
    # Randomly insert 0-3 nops for both base and dest
    nops_base = random.randint(0,3)
    nops_dest = random.randint(0,3)

    asm_code.append( gen_st_value_test( 
      num_nops_base=nops_base,
      num_nops_dest=nops_dest,
      reg_base1="x1",
      reg_base2="x2",
      inst="sw",
      offset=offset,
      base=base,
      result=value
    ))

  return asm_code