#=========================================================================
# lw
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
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lw   x2, 0(x1)
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw proc2mngr, x2 > 0x01020304

    .data
    .word 0x01020304
  """

#-------------------------------------------------------------------------
# gen_dest_dep_test
#-------------------------------------------------------------------------

def gen_dest_dep_test():
  return [

    gen_ld_dest_dep_test( 5, "lw", 0x2000, 0x00010203 ),
    gen_ld_dest_dep_test( 4, "lw", 0x2004, 0x04050607 ),
    gen_ld_dest_dep_test( 3, "lw", 0x2008, 0x08090a0b ),
    gen_ld_dest_dep_test( 2, "lw", 0x200c, 0x0c0d0e0f ),
    gen_ld_dest_dep_test( 1, "lw", 0x2010, 0x10111213 ),
    gen_ld_dest_dep_test( 0, "lw", 0x2014, 0x14151617 ),

    gen_word_data([
      0x00010203,
      0x04050607,
      0x08090a0b,
      0x0c0d0e0f,
      0x10111213,
      0x14151617,
    ])

  ]

#-------------------------------------------------------------------------
# gen_base_dep_test
#-------------------------------------------------------------------------

def gen_base_dep_test():
  return [

    gen_ld_base_dep_test( 5, "lw", 0x2000, 0x00010203 ),
    gen_ld_base_dep_test( 4, "lw", 0x2004, 0x04050607 ),
    gen_ld_base_dep_test( 3, "lw", 0x2008, 0x08090a0b ),
    gen_ld_base_dep_test( 2, "lw", 0x200c, 0x0c0d0e0f ),
    gen_ld_base_dep_test( 1, "lw", 0x2010, 0x10111213 ),
    gen_ld_base_dep_test( 0, "lw", 0x2014, 0x14151617 ),

    gen_word_data([
      0x00010203,
      0x04050607,
      0x08090a0b,
      0x0c0d0e0f,
      0x10111213,
      0x14151617,
    ])

  ]

#-------------------------------------------------------------------------
# gen_srcs_dest_test
#-------------------------------------------------------------------------

def gen_srcs_dest_test():
  return [
    gen_ld_base_eq_dest_test( "lw", 0x2000, 0x01020304 ),
    gen_word_data([ 0x01020304 ])
  ]

#-------------------------------------------------------------------------
# gen_addr_test
#-------------------------------------------------------------------------

def gen_addr_test():
  return [

    # Test positive offsets

    gen_ld_value_test( "lw",   0, 0x00002000, 0xdeadbeef ),
    gen_ld_value_test( "lw",   4, 0x00002000, 0x00010203 ),
    gen_ld_value_test( "lw",   8, 0x00002000, 0x04050607 ),
    gen_ld_value_test( "lw",  12, 0x00002000, 0x08090a0b ),
    gen_ld_value_test( "lw",  16, 0x00002000, 0x0c0d0e0f ),
    gen_ld_value_test( "lw",  20, 0x00002000, 0xcafecafe ),

    # Test negative offsets

    gen_ld_value_test( "lw", -20, 0x00002014, 0xdeadbeef ),
    gen_ld_value_test( "lw", -16, 0x00002014, 0x00010203 ),
    gen_ld_value_test( "lw", -12, 0x00002014, 0x04050607 ),
    gen_ld_value_test( "lw",  -8, 0x00002014, 0x08090a0b ),
    gen_ld_value_test( "lw",  -4, 0x00002014, 0x0c0d0e0f ),
    gen_ld_value_test( "lw",   0, 0x00002014, 0xcafecafe ),

    # Test positive offset with unaligned base

    gen_ld_value_test( "lw",   1, 0x00001fff, 0xdeadbeef ),
    gen_ld_value_test( "lw",   5, 0x00001fff, 0x00010203 ),
    gen_ld_value_test( "lw",   9, 0x00001fff, 0x04050607 ),
    gen_ld_value_test( "lw",  13, 0x00001fff, 0x08090a0b ),
    gen_ld_value_test( "lw",  17, 0x00001fff, 0x0c0d0e0f ),
    gen_ld_value_test( "lw",  21, 0x00001fff, 0xcafecafe ),

    # Test negative offset with unaligned base

    gen_ld_value_test( "lw", -21, 0x00002015, 0xdeadbeef ),
    gen_ld_value_test( "lw", -17, 0x00002015, 0x00010203 ),
    gen_ld_value_test( "lw", -13, 0x00002015, 0x04050607 ),
    gen_ld_value_test( "lw",  -9, 0x00002015, 0x08090a0b ),
    gen_ld_value_test( "lw",  -5, 0x00002015, 0x0c0d0e0f ),
    gen_ld_value_test( "lw",  -1, 0x00002015, 0xcafecafe ),

    gen_word_data([
      0xdeadbeef,
      0x00010203,
      0x04050607,
      0x08090a0b,
      0x0c0d0e0f,
      0xcafecafe,
    ])

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
    result = data[a]

    asm_code.append( gen_ld_value_test( "lw", offset, base, result ) )

  # Add the data to the end of the assembly code

  asm_code.append( gen_word_data( data ) )
  return asm_code

def gen_raw_lw_test():
  return """
    # RAW Hazard: x1 is written by LW then read
    csrr x1, mngr2proc < 5
    csrr x2, mngr2proc < 4
    sw x2, 0(x1)        # Store value in memory
    lw x1, 0(x1)        # Write to x1
    add x3, x1, x2      # Read x1 immediately after
    nop
    nop
    nop
    csrw proc2mngr, x3 > 8
    nop
    nop
    nop
  """

def gen_war_lw_test():
  return """
    # WAR Hazard: x2 is read then written by LW
    csrr x1, mngr2proc < 5
    csrr x2, mngr2proc < 4
    sw x2, 0(x1)        # Store value in memory
    add x3, x2, x2      # Read x2
    lw x2, 0(x1)        # Write to x2
    nop
    nop
    nop
    csrw proc2mngr, x3 > 8
    nop
    nop
    nop
  """

def gen_waw_lw_test():
  return """
    # WAW Hazard: x1 is written by both LW instructions
    csrr x1, mngr2proc < 5
    csrr x2, mngr2proc < 4
    sw x2, 0(x1)        # Store value in memory
    sw x2, 4(x1)        # Store value in memory
    lw x1, 0(x1)        # Write to x1
    lw x1, 4(x1)        # Write to x1 again
    nop
    nop
    csrw proc2mngr, x1 > 4
    nop
    nop
    nop
  """
