#=========================================================================
# bne
#=========================================================================

import random

# Fix the random seed so results are reproducible
random.seed(0xdeadbeef)

from pymtl3 import *
from lab2_proc.test.inst_utils import *

#-------------------------------------------------------------------------
# gen_basic_test
#-------------------------------------------------------------------------
# This test uses addi to track the control flow for testing purposes.

def gen_basic_test():
  return """

    # Use x3 to track the control flow pattern
    addi  x3, x0, 0

    csrr  x1, mngr2proc < 1
    csrr  x2, mngr2proc < 2

    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop

    # This branch should be taken
    bne   x1, x2, label_a
    addi  x3, x3, 0b01

    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop

  label_a:
    addi  x3, x3, 0b10

    # Only the second bit should be set if branch was taken
    csrw  proc2mngr, x3 > 0b10

  """

#-------------------------------------------------------------------------
# gen_src0_dep_taken_test
#-------------------------------------------------------------------------

def gen_src0_dep_taken_test():
  return [
    gen_br2_src0_dep_test( 5, "bne", 1, 7, True ),
    gen_br2_src0_dep_test( 4, "bne", 2, 7, True ),
    gen_br2_src0_dep_test( 3, "bne", 3, 7, True ),
    gen_br2_src0_dep_test( 2, "bne", 4, 7, True ),
    gen_br2_src0_dep_test( 1, "bne", 5, 7, True ),
    gen_br2_src0_dep_test( 0, "bne", 6, 7, True ),
  ]

#-------------------------------------------------------------------------
# gen_src0_dep_nottaken_test
#-------------------------------------------------------------------------

def gen_src0_dep_nottaken_test():
  return [
    gen_br2_src0_dep_test( 5, "bne", 1, 1, False ),
    gen_br2_src0_dep_test( 4, "bne", 2, 2, False ),
    gen_br2_src0_dep_test( 3, "bne", 3, 3, False ),
    gen_br2_src0_dep_test( 2, "bne", 4, 4, False ),
    gen_br2_src0_dep_test( 1, "bne", 5, 5, False ),
    gen_br2_src0_dep_test( 0, "bne", 6, 6, False ),
  ]

#-------------------------------------------------------------------------
# gen_src1_dep_taken_test
#-------------------------------------------------------------------------

def gen_src1_dep_taken_test():
  return [
    gen_br2_src1_dep_test( 5, "bne", 7, 1, True ),
    gen_br2_src1_dep_test( 4, "bne", 7, 2, True ),
    gen_br2_src1_dep_test( 3, "bne", 7, 3, True ),
    gen_br2_src1_dep_test( 2, "bne", 7, 4, True ),
    gen_br2_src1_dep_test( 1, "bne", 7, 5, True ),
    gen_br2_src1_dep_test( 0, "bne", 7, 6, True ),
  ]

#-------------------------------------------------------------------------
# gen_src1_dep_nottaken_test
#-------------------------------------------------------------------------

def gen_src1_dep_nottaken_test():
  return [
    gen_br2_src1_dep_test( 5, "bne", 1, 1, False ),
    gen_br2_src1_dep_test( 4, "bne", 2, 2, False ),
    gen_br2_src1_dep_test( 3, "bne", 3, 3, False ),
    gen_br2_src1_dep_test( 2, "bne", 4, 4, False ),
    gen_br2_src1_dep_test( 1, "bne", 5, 5, False ),
    gen_br2_src1_dep_test( 0, "bne", 6, 6, False ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_taken_test
#-------------------------------------------------------------------------

def gen_srcs_dep_taken_test():
  return [
    gen_br2_srcs_dep_test( 5, "bne", 1, 2, True ),
    gen_br2_srcs_dep_test( 4, "bne", 2, 3, True ),
    gen_br2_srcs_dep_test( 3, "bne", 3, 4, True ),
    gen_br2_srcs_dep_test( 2, "bne", 4, 5, True ),
    gen_br2_srcs_dep_test( 1, "bne", 5, 6, True ),
    gen_br2_srcs_dep_test( 0, "bne", 6, 7, True ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_nottaken_test
#-------------------------------------------------------------------------

def gen_srcs_dep_nottaken_test():
  return [
    gen_br2_srcs_dep_test( 5, "bne", 1, 1, False ),
    gen_br2_srcs_dep_test( 4, "bne", 2, 2, False ),
    gen_br2_srcs_dep_test( 3, "bne", 3, 3, False ),
    gen_br2_srcs_dep_test( 2, "bne", 4, 4, False ),
    gen_br2_srcs_dep_test( 1, "bne", 5, 5, False ),
    gen_br2_srcs_dep_test( 0, "bne", 6, 6, False ),
  ]

#-------------------------------------------------------------------------
# gen_src0_eq_src1_nottaken_test
#-------------------------------------------------------------------------

def gen_src0_eq_src1_test():
  return [
    gen_br2_src0_eq_src1_test( "bne", 1, False ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [

    gen_br2_value_test( "bne", -1, -1, False ),
    gen_br2_value_test( "bne", -1,  0, True  ),
    gen_br2_value_test( "bne", -1,  1, True  ),

    gen_br2_value_test( "bne",  0, -1, True  ),
    gen_br2_value_test( "bne",  0,  0, False ),
    gen_br2_value_test( "bne",  0,  1, True  ),

    gen_br2_value_test( "bne",  1, -1, True  ),
    gen_br2_value_test( "bne",  1,  0, True  ),
    gen_br2_value_test( "bne",  1,  1, False ),

    gen_br2_value_test( "bne", 0xfffffff7, 0xfffffff7, False ),
    gen_br2_value_test( "bne", 0x7fffffff, 0x7fffffff, False ),
    gen_br2_value_test( "bne", 0xfffffff7, 0x7fffffff, True  ),
    gen_br2_value_test( "bne", 0x7fffffff, 0xfffffff7, True  ),

  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in range(25):
    taken = random.choice([True, False])
    src0  = b32( random.randint(0,0xffffffff) )
    if taken:
      # Branch taken, operands are unequal
      src1 = b32( random.randint(0,0xffffffff) )
      # Rare case, but could happen
      if src0 == src1:
        src1 = src0 + 1
    else:
      # Branch not taken, operands are equal
      src1 = src0
    asm_code.append( gen_br2_value_test( "bne", src0.uint(), src1.uint(), taken ) )
  return asm_code

#-------------------------------------------------------------------------
# gen_back_to_back_test
#-------------------------------------------------------------------------

def gen_back_to_back_test():
  return """
     # Test backwards walk (back to back branch taken)

     csrr x3, mngr2proc < 1
     csrr x1, mngr2proc < 1

     bne  x3, x0, X0
     csrw proc2mngr, x0
     nop
     a0:
     csrw proc2mngr, x1 > 1
     bne  x3, x0, y0
     b0:
     bne  x3, x0, a0
     c0:
     bne  x3, x0, b0
     d0:
     bne  x3, x0, c0
     e0:
     bne  x3, x0, d0
     f0:
     bne  x3, x0, e0
     g0:
     bne  x3, x0, f0
     h0:
     bne  x3, x0, g0
     i0:
     bne  x3, x0, h0
     X0:
     bne  x3, x0, i0
     y0:

     bne  x3, x0, X1
     csrw proc2mngr, x0
     nop
     a1:
     csrw proc2mngr, x1 > 1
     bne  x3, x0, y1
     b1:
     bne  x3, x0, a1
     c1:
     bne  x3, x0, b1
     d1:
     bne  x3, x0, c1
     e1:
     bne  x3, x0, d1
     f1:
     bne  x3, x0, e1
     g1:
     bne  x3, x0, f1
     h1:
     bne  x3, x0, g1
     i1:
     bne  x3, x0, h1
     X1:
     bne  x3, x0, i1
     y1:

     bne  x3, x0, X2
     csrw proc2mngr, x0
     nop
     a2:
     csrw proc2mngr, x1 > 1
     bne  x3, x0, y2
     b2:
     bne  x3, x0, a2
     c2:
     bne  x3, x0, b2
     d2:
     bne  x3, x0, c2
     e2:
     bne  x3, x0, d2
     f2:
     bne  x3, x0, e2
     g2:
     bne  x3, x0, f2
     h2:
     bne  x3, x0, g2
     i2:
     bne  x3, x0, h2
     X2:
     bne  x3, x0, i2
     y2:

     bne  x3, x0, X3
     csrw proc2mngr, x0
     nop
     a3:
     csrw proc2mngr, x1 > 1
     bne  x3, x0, y3
     b3:
     bne  x3, x0, a3
     c3:
     bne  x3, x0, b3
     d3:
     bne  x3, x0, c3
     e3:
     bne  x3, x0, d3
     f3:
     bne  x3, x0, e3
     g3:
     bne  x3, x0, f3
     h3:
     bne  x3, x0, g3
     i3:
     bne  x3, x0, h3
     X3:
     bne  x3, x0, i3
     y3:
     nop
     nop
     nop
     nop
     nop
     nop
     nop
  """
def gen_raw_bne_test():
  return """
    # RAW Hazard: x1 is written then read by BNE
    csrr x2, mngr2proc < 4
    add x1, x2, x2      # Write to x1
    bne x1, x2, label1  # Read x1 immediately after
    nop
    nop
    nop
    label1:
    nop
    csrw proc2mngr, x2 > 4
    nop
    nop
    nop
  """

def gen_war_bne_test():
  return """
    # WAR Hazard: x2 is read by BNE then written
    csrr x1, mngr2proc < 5
    csrr x2, mngr2proc < 4
    bne x1, x2, label1  # Read x2
    add x2, x1, x1      # Write to x2
    nop
    label1:
    nop
    csrw proc2mngr, x1 > 5
    nop
    nop
    nop
  """

def gen_waw_bne_test():
  # Note: BNE doesn't write to registers, so WAW hazard
  # needs to be created with other instructions
  return """
    # WAW Hazard with surrounding instructions
    csrr x1, mngr2proc < 5
    add x2, x1, x1      # Write to x2
    bne x1, x0, label1
    add x2, x1, x1      # Write to x2 again
    label1:
    nop
    nop
    csrw proc2mngr, x2 > 10
    nop
    nop
    nop
  """