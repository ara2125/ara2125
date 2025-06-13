#=========================================================================
# bgeu
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
    bgeu   x1, x2, label_a
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
    gen_br2_src0_dep_test( 5, "bgeu", 7, 1, True ),
    gen_br2_src0_dep_test( 4, "bgeu", 7, 2, True ),
    gen_br2_src0_dep_test( 3, "bgeu", 7, 3, True ),
    gen_br2_src0_dep_test( 2, "bgeu", 7, 4, True ),
    gen_br2_src0_dep_test( 1, "bgeu", 7, 5, True ),
    gen_br2_src0_dep_test( 0, "bgeu", 7, 6, True ),
  ]

#-------------------------------------------------------------------------
# gen_src0_dep_nottaken_test
#-------------------------------------------------------------------------

def gen_src0_dep_nottaken_test():
  return [
    gen_br2_src0_dep_test( 5, "bgeu", 1, 7, False ),
    gen_br2_src0_dep_test( 4, "bgeu", 2, 7, False ),
    gen_br2_src0_dep_test( 3, "bgeu", 3, 7, False ),
    gen_br2_src0_dep_test( 2, "bgeu", 4, 7, False ),
    gen_br2_src0_dep_test( 1, "bgeu", 5, 7, False ),
    gen_br2_src0_dep_test( 0, "bgeu", 6, 7, False ),
  ]

#-------------------------------------------------------------------------
# gen_src1_dep_taken_test
#-------------------------------------------------------------------------

def gen_src1_dep_taken_test():
  return [
    gen_br2_src1_dep_test( 5, "bgeu", 7, 1, True ),
    gen_br2_src1_dep_test( 4, "bgeu", 7, 2, True ),
    gen_br2_src1_dep_test( 3, "bgeu", 7, 3, True ),
    gen_br2_src1_dep_test( 2, "bgeu", 7, 4, True ),
    gen_br2_src1_dep_test( 1, "bgeu", 7, 5, True ),
    gen_br2_src1_dep_test( 0, "bgeu", 7, 6, True ),
  ]

#-------------------------------------------------------------------------
# gen_src1_dep_nottaken_test
#-------------------------------------------------------------------------

def gen_src1_dep_nottaken_test():
  return [
    gen_br2_src1_dep_test( 5, "bgeu", 1, 7, False ),
    gen_br2_src1_dep_test( 4, "bgeu", 2, 7, False ),
    gen_br2_src1_dep_test( 3, "bgeu", 3, 7, False ),
    gen_br2_src1_dep_test( 2, "bgeu", 4, 7, False ),
    gen_br2_src1_dep_test( 1, "bgeu", 5, 7, False ),
    gen_br2_src1_dep_test( 0, "bgeu", 6, 7, False ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_taken_test
#-------------------------------------------------------------------------

def gen_srcs_dep_taken_test():
  return [
    gen_br2_srcs_dep_test( 5, "bgeu", 2, 1, True ),
    gen_br2_srcs_dep_test( 4, "bgeu", 3, 2, True ),
    gen_br2_srcs_dep_test( 3, "bgeu", 4, 3, True ),
    gen_br2_srcs_dep_test( 2, "bgeu", 5, 4, True ),
    gen_br2_srcs_dep_test( 1, "bgeu", 6, 5, True ),
    gen_br2_srcs_dep_test( 0, "bgeu", 7, 6, True ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_nottaken_test
#-------------------------------------------------------------------------

def gen_srcs_dep_nottaken_test():
  return [
    gen_br2_srcs_dep_test( 5, "bgeu", 1, 2, False ),
    gen_br2_srcs_dep_test( 4, "bgeu", 2, 3, False ),
    gen_br2_srcs_dep_test( 3, "bgeu", 3, 4, False ),
    gen_br2_srcs_dep_test( 2, "bgeu", 4, 5, False ),
    gen_br2_srcs_dep_test( 1, "bgeu", 5, 6, False ),
    gen_br2_srcs_dep_test( 0, "bgeu", 6, 7, False ),
  ]

#-------------------------------------------------------------------------
# gen_src0_eq_src1_taken_test
#-------------------------------------------------------------------------

def gen_src0_eq_src1_test():
  return [
    gen_br2_src0_eq_src1_test( "bgeu", 1, True ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [
    # Test positive numbers
    gen_br2_value_test( "bgeu",  0,  0, True  ),
    gen_br2_value_test( "bgeu",  1,  0, True  ),
    gen_br2_value_test( "bgeu",  1,  1, True  ),
    gen_br2_value_test( "bgeu",  2,  1, True  ),
    gen_br2_value_test( "bgeu",  1,  2, False ),

    # Test with large unsigned values
    gen_br2_value_test( "bgeu", 0xffffffff, 0xffffffff, True  ),
    gen_br2_value_test( "bgeu", 0xffffffff, 0x00000000, True  ),
    gen_br2_value_test( "bgeu", 0x00000000, 0xffffffff, False ),
    
    # Test boundary cases
    gen_br2_value_test( "bgeu", 0xffffffff, 0xfffffffe, True  ),
    gen_br2_value_test( "bgeu", 0xfffffffe, 0xffffffff, False ),
    gen_br2_value_test( "bgeu", 0x80000000, 0x7fffffff, True  ),
    gen_br2_value_test( "bgeu", 0x7fffffff, 0x80000000, False ),

    # Test middle values
    gen_br2_value_test( "bgeu", 0x80000000, 0x80000000, True  ),
    gen_br2_value_test( "bgeu", 0x80000001, 0x80000000, True  ),
    gen_br2_value_test( "bgeu", 0x80000000, 0x80000001, False ),
  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
    asm_code = []
    
    for i in range(25):
        taken = random.choice([True, False])
        src0 = b32(random.randint(0, 0xffffffff))
        
        if taken:
            # Branch taken, src0 >= src1 (unsigned comparison)
            src1_val = random.randint(0, src0.uint())
        else:
            # Branch not taken, src0 < src1 (unsigned comparison)
            src1_val = random.randint(src0.uint() + 1, 0xffffffff)
            
        src1 = b32(src1_val)
        asm_code.append(gen_br2_value_test("bgeu", src0.uint(), src1.uint(), taken))
    
    return asm_code

#-------------------------------------------------------------------------
# gen_back_to_back_test
#-------------------------------------------------------------------------

def gen_back_to_back_test():
  return """
     # Test backwards walk (back to back branch taken)

     csrr x3, mngr2proc < 2
     csrr x1, mngr2proc < 1

     bgeu  x3, x1, X0  # 2 >= 1, so branch taken
     csrw proc2mngr, x0
     nop
     a0:
     csrw proc2mngr, x1 > 1
     bgeu  x3, x1, y0
     b0:
     bgeu  x3, x1, a0
     c0:
     bgeu  x3, x1, b0
     d0:
     bgeu  x3, x1, c0
     e0:
     bgeu  x3, x1, d0
     f0:
     bgeu  x3, x1, e0
     g0:
     bgeu  x3, x1, f0
     h0:
     bgeu  x3, x1, g0
     i0:
     bgeu  x3, x1, h0
     X0:
     bgeu  x3, x1, i0
     y0:

     bgeu  x3, x1, X1
     csrw proc2mngr, x0
     nop
     a1:
     csrw proc2mngr, x1 > 1
     bgeu  x3, x1, y1
     b1:
     bgeu  x3, x1, a1
     c1:
     bgeu  x3, x1, b1
     d1:
     bgeu  x3, x1, c1
     e1:
     bgeu  x3, x1, d1
     f1:
     bgeu  x3, x1, e1
     g1:
     bgeu  x3, x1, f1
     h1:
     bgeu  x3, x1, g1
     i1:
     bgeu  x3, x1, h1
     X1:
     bgeu  x3, x1, i1
     y1:

     bgeu  x3, x1, X2
     csrw proc2mngr, x0
     nop
     a2:
     csrw proc2mngr, x1 > 1
     bgeu  x3, x1, y2
     b2:
     bgeu  x3, x1, a2
     c2:
     bgeu  x3, x1, b2
     d2:
     bgeu  x3, x1, c2
     e2:
     bgeu  x3, x1, d2
     f2:
     bgeu  x3, x1, e2
     g2:
     bgeu  x3, x1, f2
     h2:
     bgeu  x3, x1, g2
     i2:
     bgeu  x3, x1, h2
     X2:
     bgeu  x3, x1, i2
     y2:

     bgeu  x3, x1, X3
     csrw proc2mngr, x0
     nop
     a3:
     csrw proc2mngr, x1 > 1
     bgeu  x3, x1, y3
     b3:
     bgeu  x3, x1, a3
     c3:
     bgeu  x3, x1, b3
     d3:
     bgeu  x3, x1, c3
     e3:
     bgeu  x3, x1, d3
     f3:
     bgeu  x3, x1, e3
     g3:
     bgeu  x3, x1, f3
     h3:
     bgeu  x3, x1, g3
     i3:
     bgeu  x3, x1, h3
     X3:
     bgeu  x3, x1, i3
     y3:
     nop
     nop
     nop
     nop
     nop
     nop
     nop
  """