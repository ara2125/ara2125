#=========================================================================
# blt
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

    # Use x3 to track the control flow pattern
    addi  x3, x0, 0

    csrr  x1, mngr2proc < 2
    csrr  x2, mngr2proc < 1

    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop

    # This branch should be taken
    blt   x2, x1, label_a
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
    csrw proc2mngr, x3 > 0b10

  """

#-------------------------------------------------------------------------
# gen_src0_dep_taken_test
#-------------------------------------------------------------------------

def gen_src0_dep_taken_test():
  return [
    gen_br2_src0_dep_test( 5, "blt", 1, 7, True ),
    gen_br2_src0_dep_test( 4, "blt", 2, 7, True ),
    gen_br2_src0_dep_test( 3, "blt", 3, 7, True ),
    gen_br2_src0_dep_test( 2, "blt", 4, 7, True ),
    gen_br2_src0_dep_test( 1, "blt", 5, 7, True ),
    gen_br2_src0_dep_test( 0, "blt", 6, 7, True ),
  ]

#-------------------------------------------------------------------------
# gen_src0_dep_nottaken_test
#-------------------------------------------------------------------------

def gen_src0_dep_nottaken_test():
  return [
    gen_br2_src0_dep_test( 5, "blt", 7, 1, False ),
    gen_br2_src0_dep_test( 4, "blt", 7, 2, False ),
    gen_br2_src0_dep_test( 3, "blt", 7, 3, False ),
    gen_br2_src0_dep_test( 2, "blt", 7, 4, False ),
    gen_br2_src0_dep_test( 1, "blt", 7, 5, False ),
    gen_br2_src0_dep_test( 0, "blt", 7, 6, False ),
  ]

#-------------------------------------------------------------------------
# gen_src1_dep_taken_test
#-------------------------------------------------------------------------

def gen_src1_dep_taken_test():
  return [
    gen_br2_src1_dep_test( 5, "blt", 1, 7, True ),
    gen_br2_src1_dep_test( 4, "blt", 2, 7, True ),
    gen_br2_src1_dep_test( 3, "blt", 3, 7, True ),
    gen_br2_src1_dep_test( 2, "blt", 4, 7, True ),
    gen_br2_src1_dep_test( 1, "blt", 5, 7, True ),
    gen_br2_src1_dep_test( 0, "blt", 6, 7, True ),
  ]

#-------------------------------------------------------------------------
# gen_src1_dep_nottaken_test
#-------------------------------------------------------------------------

def gen_src1_dep_nottaken_test():
  return [
    gen_br2_src1_dep_test( 5, "blt", 7, 1, False ),
    gen_br2_src1_dep_test( 4, "blt", 7, 2, False ),
    gen_br2_src1_dep_test( 3, "blt", 7, 3, False ),
    gen_br2_src1_dep_test( 2, "blt", 7, 4, False ),
    gen_br2_src1_dep_test( 1, "blt", 7, 5, False ),
    gen_br2_src1_dep_test( 0, "blt", 7, 6, False ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_taken_test
#-------------------------------------------------------------------------

def gen_srcs_dep_taken_test():
  return [
    gen_br2_srcs_dep_test( 5, "blt", 1, 2, True ),
    gen_br2_srcs_dep_test( 4, "blt", 2, 3, True ),
    gen_br2_srcs_dep_test( 3, "blt", 3, 4, True ),
    gen_br2_srcs_dep_test( 2, "blt", 4, 5, True ),
    gen_br2_srcs_dep_test( 1, "blt", 5, 6, True ),
    gen_br2_srcs_dep_test( 0, "blt", 6, 7, True ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_nottaken_test
#-------------------------------------------------------------------------

def gen_srcs_dep_nottaken_test():
  return [
    gen_br2_srcs_dep_test( 5, "blt", 2, 1, False ),
    gen_br2_srcs_dep_test( 4, "blt", 3, 2, False ),
    gen_br2_srcs_dep_test( 3, "blt", 4, 3, False ),
    gen_br2_srcs_dep_test( 2, "blt", 5, 4, False ),
    gen_br2_srcs_dep_test( 1, "blt", 6, 5, False ),
    gen_br2_srcs_dep_test( 0, "blt", 7, 6, False ),
  ]

#-------------------------------------------------------------------------
# gen_src0_eq_src1_nottaken_test
#-------------------------------------------------------------------------

def gen_src0_eq_src1_test():
  return [
    gen_br2_src0_eq_src1_test( "blt", 1, False ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [
    # Test positive numbers
    gen_br2_value_test( "blt",  0,  0, False ),  # 0 < 0
    gen_br2_value_test( "blt",  0,  1, True  ),  # 0 < 1
    gen_br2_value_test( "blt",  1,  1, False ),  # 1 < 1
    gen_br2_value_test( "blt",  1,  2, True  ),  # 1 < 2
    gen_br2_value_test( "blt",  2,  1, False ),  # 2 < 1

    # Test negative numbers
    gen_br2_value_test( "blt", -2, -1, True  ),  # -2 < -1
    gen_br2_value_test( "blt", -1, -1, False ),  # -1 < -1
    gen_br2_value_test( "blt", -1,  0, True  ),  # -1 < 0
    gen_br2_value_test( "blt",  0, -1, False ),  # 0 < -1

    # Test positive/negative mix
    gen_br2_value_test( "blt", -1,  1, True  ),  # -1 < 1
    gen_br2_value_test( "blt",  1, -1, False ),  # 1 < -1

    # Test edge cases
    gen_br2_value_test( "blt", 0x7fffffff,  0x7fffffff, False ),  # MAX_INT < MAX_INT
    gen_br2_value_test( "blt", 0x7ffffffe,  0x7fffffff, True  ),  # MAX_INT-1 < MAX_INT
    gen_br2_value_test( "blt", 0x7fffffff,  0x7ffffffe, False ),  # MAX_INT < MAX_INT-1
    gen_br2_value_test( "blt", -0x80000000, -0x80000000, False ),  # MIN_INT < MIN_INT
    gen_br2_value_test( "blt", -0x80000000,  0x7fffffff, True  ),  # MIN_INT < MAX_INT
    gen_br2_value_test( "blt",  0x7fffffff, -0x80000000, False ),  # MAX_INT < MIN_INT
  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def to_signed(val):
    """Convert uint32 to signed int32"""
    if val & 0x80000000:  # If highest bit is set
        return val - 0x100000000
    return val

def gen_random_test():
    asm_code = []
    MIN_VAL = -0x80000000
    MAX_VAL = 0x7fffffff
    
    for i in range(25):
        taken = random.choice([True, False])
        src0 = b32(random.randint(MIN_VAL, MAX_VAL))
        src0_signed = to_signed(src0.uint())
        
        if taken:
            # Branch taken, src0 < src1 (signed comparison)
            if src0_signed == MAX_VAL:
                # If at max, pick new src0
                src0 = b32(random.randint(MIN_VAL, MAX_VAL - 1))
                src0_signed = to_signed(src0.uint())
            
            # Generate src1 > src0 (signed)
            src1_val = random.randint(src0_signed + 1, MAX_VAL)
        else:
            # Branch not taken, src0 >= src1 (signed comparison)
            if src0_signed == MIN_VAL:
                src1_val = src0_signed  # Use same value at minimum
            else:
                # Generate src1 <= src0 (signed)
                src1_val = random.randint(MIN_VAL, src0_signed)
        src1 = b32(src1_val)
            
        asm_code.append(gen_br2_value_test("blt", src0.uint(), src1.uint(), taken))
    
    return asm_code

#-------------------------------------------------------------------------
# gen_back_to_back_test
#-------------------------------------------------------------------------

def gen_back_to_back_test():
  return """
     # Test backwards walk (back to back branch taken)

     csrr x3, mngr2proc < 1
     csrr x1, mngr2proc < 2

     blt  x3, x1, X0  # 1 < 2, so branch taken
     csrw proc2mngr, x0
     nop
     a0:
     csrw proc2mngr, x1 > 2
     blt  x3, x1, y0
     b0:
     blt  x3, x1, a0
     c0:
     blt  x3, x1, b0
     d0:
     blt  x3, x1, c0
     e0:
     blt  x3, x1, d0
     f0:
     blt  x3, x1, e0
     g0:
     blt  x3, x1, f0
     h0:
     blt  x3, x1, g0
     i0:
     blt  x3, x1, h0
     X0:
     blt  x3, x1, i0
     y0:

     blt  x3, x1, X1
     csrw proc2mngr, x0
     nop
     a1:
     csrw proc2mngr, x1 > 2
     blt  x3, x1, y1
     b1:
     blt  x3, x1, a1
     c1:
     blt  x3, x1, b1
     d1:
     blt  x3, x1, c1
     e1:
     blt  x3, x1, d1
     f1:
     blt  x3, x1, e1
     g1:
     blt  x3, x1, f1
     h1:
     blt  x3, x1, g1
     i1:
     blt  x3, x1, h1
     X1:
     blt  x3, x1, i1
     y1:

     blt  x3, x1, X2
     csrw proc2mngr, x0
     nop
     a2:
     csrw proc2mngr, x1 > 2
     blt  x3, x1, y2
     b2:
     blt  x3, x1, a2
     c2:
     blt  x3, x1, b2
     d2:
     blt  x3, x1, c2
     e2:
     blt  x3, x1, d2
     f2:
     blt  x3, x1, e2
     g2:
     blt  x3, x1, f2
     h2:
     blt  x3, x1, g2
     i2:
     blt  x3, x1, h2
     X2:
     blt  x3, x1, i2
     y2:

     blt  x3, x1, X3
     csrw proc2mngr, x0
     nop
     a3:
     csrw proc2mngr, x1 > 2
     blt  x3, x1, y3
     b3:
     blt  x3, x1, a3
     c3:
     blt  x3, x1, b3
     d3:
     blt  x3, x1, c3
     e3:
     blt  x3, x1, d3
     f3:
     blt  x3, x1, e3
     g3:
     blt  x3, x1, f3
     h3:
     blt  x3, x1, g3
     i3:
     blt  x3, x1, h3
     X3:
     blt  x3, x1, i3
     y3:
     nop
     nop
     nop
     nop
     nop
     nop
     nop
  """