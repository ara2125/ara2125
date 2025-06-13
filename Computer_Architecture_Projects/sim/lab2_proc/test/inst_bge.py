#=========================================================================
# bge
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
    bge   x1, x2, label_a
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
    gen_br2_src0_dep_test( 5, "bge", 7, 1, True ),
    gen_br2_src0_dep_test( 4, "bge", 7, 2, True ),
    gen_br2_src0_dep_test( 3, "bge", 7, 3, True ),
    gen_br2_src0_dep_test( 2, "bge", 7, 4, True ),
    gen_br2_src0_dep_test( 1, "bge", 7, 5, True ),
    gen_br2_src0_dep_test( 0, "bge", 7, 6, True ),
  ]

#-------------------------------------------------------------------------
# gen_src0_dep_nottaken_test
#-------------------------------------------------------------------------

def gen_src0_dep_nottaken_test():
  return [
    gen_br2_src0_dep_test( 5, "bge", 1, 7, False ),
    gen_br2_src0_dep_test( 4, "bge", 2, 7, False ),
    gen_br2_src0_dep_test( 3, "bge", 3, 7, False ),
    gen_br2_src0_dep_test( 2, "bge", 4, 7, False ),
    gen_br2_src0_dep_test( 1, "bge", 5, 7, False ),
    gen_br2_src0_dep_test( 0, "bge", 6, 7, False ),
  ]

#-------------------------------------------------------------------------
# gen_src1_dep_taken_test
#-------------------------------------------------------------------------

def gen_src1_dep_taken_test():
  return [
    gen_br2_src1_dep_test( 5, "bge", 7, 1, True ),
    gen_br2_src1_dep_test( 4, "bge", 7, 2, True ),
    gen_br2_src1_dep_test( 3, "bge", 7, 3, True ),
    gen_br2_src1_dep_test( 2, "bge", 7, 4, True ),
    gen_br2_src1_dep_test( 1, "bge", 7, 5, True ),
    gen_br2_src1_dep_test( 0, "bge", 7, 6, True ),
  ]

#-------------------------------------------------------------------------
# gen_src1_dep_nottaken_test
#-------------------------------------------------------------------------

def gen_src1_dep_nottaken_test():
  return [
    gen_br2_src1_dep_test( 5, "bge", 1, 7, False ),
    gen_br2_src1_dep_test( 4, "bge", 2, 7, False ),
    gen_br2_src1_dep_test( 3, "bge", 3, 7, False ),
    gen_br2_src1_dep_test( 2, "bge", 4, 7, False ),
    gen_br2_src1_dep_test( 1, "bge", 5, 7, False ),
    gen_br2_src1_dep_test( 0, "bge", 6, 7, False ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_taken_test
#-------------------------------------------------------------------------

def gen_srcs_dep_taken_test():
  return [
    gen_br2_srcs_dep_test( 5, "bge", 2, 1, True ),
    gen_br2_srcs_dep_test( 4, "bge", 3, 2, True ),
    gen_br2_srcs_dep_test( 3, "bge", 4, 3, True ),
    gen_br2_srcs_dep_test( 2, "bge", 5, 4, True ),
    gen_br2_srcs_dep_test( 1, "bge", 6, 5, True ),
    gen_br2_srcs_dep_test( 0, "bge", 7, 6, True ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_nottaken_test
#-------------------------------------------------------------------------

def gen_srcs_dep_nottaken_test():
  return [
    gen_br2_srcs_dep_test( 5, "bge", 1, 2, False ),
    gen_br2_srcs_dep_test( 4, "bge", 2, 3, False ),
    gen_br2_srcs_dep_test( 3, "bge", 3, 4, False ),
    gen_br2_srcs_dep_test( 2, "bge", 4, 5, False ),
    gen_br2_srcs_dep_test( 1, "bge", 5, 6, False ),
    gen_br2_srcs_dep_test( 0, "bge", 6, 7, False ),
  ]

#-------------------------------------------------------------------------
# gen_src0_eq_src1_taken_test
#-------------------------------------------------------------------------

def gen_src0_eq_src1_test():
  return [
    gen_br2_src0_eq_src1_test( "bge", 1, True ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [
    # Test positive numbers
    gen_br2_value_test( "bge",  0,  0, True  ),  # 0 >= 0
    gen_br2_value_test( "bge",  1,  0, True  ),  # 1 >= 0
    gen_br2_value_test( "bge",  1,  1, True  ),  # 1 >= 1
    gen_br2_value_test( "bge",  2,  1, True  ),  # 2 >= 1
    gen_br2_value_test( "bge",  1,  2, False ),  # 1 >= 2

    # Test negative numbers
    gen_br2_value_test( "bge", -1, -2, True  ),  # -1 >= -2
    gen_br2_value_test( "bge", -2, -2, True  ),  # -2 >= -2
    gen_br2_value_test( "bge", -2, -1, False ),  # -2 >= -1

    # Test positive/negative mix
    gen_br2_value_test( "bge",  1, -1, True  ),  #  1 >= -1
    gen_br2_value_test( "bge", -1,  1, False ),  # -1 >=  1

    # Test edge cases
    gen_br2_value_test( "bge", 0x7fffffff,  0x7fffffff, True  ),  # MAX_INT >= MAX_INT
    gen_br2_value_test( "bge", 0x7fffffff,  0x7ffffffe, True  ),  # MAX_INT >= MAX_INT-1
    gen_br2_value_test( "bge", 0x7ffffffe,  0x7fffffff, False ),  # MAX_INT-1 >= MAX_INT
    gen_br2_value_test( "bge", -0x80000000, -0x80000000, True  ),  # MIN_INT >= MIN_INT
    gen_br2_value_test( "bge", -0x80000000,  0x7fffffff, False ),  # MIN_INT >= MAX_INT
    gen_br2_value_test( "bge",  0x7fffffff, -0x80000000, True  ),  # MAX_INT >= MIN_INT
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
            # Branch taken, src0 >= src1 (signed comparison)
            if src0_signed == MIN_VAL:
                src1_val = src0_signed  # Use same value at minimum
            else:
                # Generate src1 <= src0 (signed)
                src1_val = random.randint(MIN_VAL, src0_signed)
        else:
            # Branch not taken, src0 < src1 (signed comparison)
            if src0_signed == MAX_VAL:
                # If at max, pick new src0
                src0 = b32(random.randint(MIN_VAL, MAX_VAL - 1))
                src0_signed = to_signed(src0.uint())
            
            # Generate src1 > src0 (signed)
            src1_val = random.randint(src0_signed + 1, MAX_VAL)
        src1 = b32(src1_val)
            
        asm_code.append(gen_br2_value_test("bge", src0.uint(), src1.uint(), taken))
    
    return asm_code

#-------------------------------------------------------------------------
# gen_back_to_back_test
#-------------------------------------------------------------------------

def gen_back_to_back_test():
  return """
     # Test backwards walk (back to back branch taken)

     csrr x3, mngr2proc < 2
     csrr x1, mngr2proc < 1

     bge  x3, x1, X0  # 2 >= 1, so branch taken
     csrw proc2mngr, x0
     nop
     a0:
     csrw proc2mngr, x1 > 1
     bge  x3, x1, y0
     b0:
     bge  x3, x1, a0
     c0:
     bge  x3, x1, b0
     d0:
     bge  x3, x1, c0
     e0:
     bge  x3, x1, d0
     f0:
     bge  x3, x1, e0
     g0:
     bge  x3, x1, f0
     h0:
     bge  x3, x1, g0
     i0:
     bge  x3, x1, h0
     X0:
     bge  x3, x1, i0
     y0:

     bge  x3, x1, X1
     csrw proc2mngr, x0
     nop
     a1:
     csrw proc2mngr, x1 > 1
     bge  x3, x1, y1
     b1:
     bge  x3, x1, a1
     c1:
     bge  x3, x1, b1
     d1:
     bge  x3, x1, c1
     e1:
     bge  x3, x1, d1
     f1:
     bge  x3, x1, e1
     g1:
     bge  x3, x1, f1
     h1:
     bge  x3, x1, g1
     i1:
     bge  x3, x1, h1
     X1:
     bge  x3, x1, i1
     y1:

     bge  x3, x1, X2
     csrw proc2mngr, x0
     nop
     a2:
     csrw proc2mngr, x1 > 1
     bge  x3, x1, y2
     b2:
     bge  x3, x1, a2
     c2:
     bge  x3, x1, b2
     d2:
     bge  x3, x1, c2
     e2:
     bge  x3, x1, d2
     f2:
     bge  x3, x1, e2
     g2:
     bge  x3, x1, f2
     h2:
     bge  x3, x1, g2
     i2:
     bge  x3, x1, h2
     X2:
     bge  x3, x1, i2
     y2:

     bge  x3, x1, X3
     csrw proc2mngr, x0
     nop
     a3:
     csrw proc2mngr, x1 > 1
     bge  x3, x1, y3
     b3:
     bge  x3, x1, a3
     c3:
     bge  x3, x1, b3
     d3:
     bge  x3, x1, c3
     e3:
     bge  x3, x1, d3
     f3:
     bge  x3, x1, e3
     g3:
     bge  x3, x1, f3
     h3:
     bge  x3, x1, g3
     i3:
     bge  x3, x1, h3
     X3:
     bge  x3, x1, i3
     y3:
     nop
     nop
     nop
     nop
     nop
     nop
     nop
  """