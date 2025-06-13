#=========================================================================
# extra multicore rr tests
#=========================================================================

import random

# Fix the random seed so results are reproducible
random.seed(0xdeadbeef)

from pymtl3 import *
from lab2_proc.test.inst_utils import *
#-------------------------------------------------------------------------
# add
#-------------------------------------------------------------------------

# positive + positive
def add_gen_pos_pos_test():
  return """
    csrr x1, mngr2proc < {1,2,3,4}
    csrr x2, mngr2proc < {2,3,4,5}
    csrr x4, mngr2proc < {0xffffff0,0xffffff1,0xffffff2,0xffffff3}
    csrr x5, mngr2proc < {0xffffff4,0xffffff5,0xffffff6,0xffffff7}
    add x3, x1, x2
    add x6, x4, x5
    csrw proc2mngr, x3 > {3,5,7,9}
    csrw proc2mngr, x6 > {0x1fffffe4,0x1fffffe6,0x1fffffe8,0x1fffffea}
  """

# positive + negative
def add_gen_pos_neg_test():
  return """
    csrr x1, mngr2proc < {1,2,3,4}
    csrr x2, mngr2proc < {-4,-3,-2,-1}
    csrr x4, mngr2proc < {0xffffff0,0xffffff1,0xffffff2,0xffffff3}
    csrr x5, mngr2proc < {0xfffffff4,0xfffffff5,0xfffffff6,0xfffffff7}
    add x3, x1, x2
    add x6, x4, x5
    csrw proc2mngr, x3 > {-3,-1,1,3}
    csrw proc2mngr, x6 > {0xfffffe4,0xfffffe6,0xfffffe8,0xfffffea}
  """

# negative + negative
def add_gen_neg_neg_test():
  return """
    csrr x1, mngr2proc < {-1,-3,-5,-7}
    csrr x2, mngr2proc < {-4,-3,-2,-1}
    csrr x4, mngr2proc < {0xffff0fff,0xffff0fff,0xffff0fff,0xffff0fff}
    csrr x5, mngr2proc < {0xf0fffff4,0xf0fffff5,0xf0fffff6,0xf0fffff7}
    add x3, x1, x2
    add x6, x4, x5
    csrw proc2mngr, x3 > {-5,-6,-7,-8}
    csrw proc2mngr, x6 > {0xf0ff0ff3,0xf0ff0ff4,0xf0ff0ff5,0xf0ff0ff6}
  """

# 0 + positive
def add_gen_0_pos_test():
  return """
    csrr x1, mngr2proc < {0,0,0,0}
    csrr x2, mngr2proc < {1,2,3,4}
    csrr x4, mngr2proc < {0xffffff0,0xffffff1,0xffffff2,0xffffff3}
    add x3, x1, x2
    add x5, x1, x4
    csrw proc2mngr, x3 > {1,2,3,4}
    csrw proc2mngr, x5 > {0xffffff0,0xffffff1,0xffffff2,0xffffff3}
  """

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def add_gen_random_test():
  asm_code = []
  for i in range(20):
    # Generate four random values for src0 and src1
    src0 = [
        b32( random.randint(0,0xffffffff) ),
        b32( random.randint(0,0xffffffff) ),
        b32( random.randint(0,0xffffffff) ),
        b32( random.randint(0,0xffffffff) ),
    ]
    src1 = [
        b32( random.randint(0,0xffffffff) ),
        b32( random.randint(0,0xffffffff) ),
        b32( random.randint(0,0xffffffff) ),
        b32( random.randint(0,0xffffffff) ),
    ]
        
    # Compute four destination values
    dest = [src0[j] + src1[j] for j in range(4)]
    # Append the generated test cases for each pair
    for j in range(4):
        asm_code.append(gen_rr_value_test(
            "add",
            src0[j].uint(),  # Single src0 value
            src1[j].uint(),  # Single src1 value
            dest[j].uint()   # Single dest value
        )
    )
  return asm_code

#=========================================================================
# extra multicore mul tests
#=========================================================================

# positive * positive
def mul_gen_pos_pos_test():
  return """
    csrr x1, mngr2proc < {1,2,3,4}
    csrr x2, mngr2proc < {2,3,4,5}
    csrr x4, mngr2proc < {0xff,0xff,0xff,0xff}
    csrr x5, mngr2proc < {0x2,0x3,0x4,0x5}
    mul x3, x1, x2
    mul x6, x4, x5
    csrw proc2mngr, x3 > {2,6,12,20}
    csrw proc2mngr, x6 > {0x1fe,0x2fd,0x3fc,0x4fb}
  """

# positive * negative
def mul_gen_pos_neg_test():
  return """
    csrr x1, mngr2proc < {1,2,3,4}
    csrr x2, mngr2proc < {-4,-3,-2,-1}
    csrr x4, mngr2proc < {0xff,0xff,0xff,0xff}
    csrr x5, mngr2proc < {-2,-3,-4,-5}
    mul x3, x1, x2
    mul x6, x4, x5
    csrw proc2mngr, x3 > {-4,-6,-6,-4}
    csrw proc2mngr, x6 > {-0x1fe,-0x2fd,-0x3fc,-0x4fb}
  """

# negative * negative
def mul_gen_neg_neg_test():
  return """
    csrr x1, mngr2proc < {-1,-2,-3,-4}
    csrr x2, mngr2proc < {-4,-3,-2,-1}
    csrr x4, mngr2proc < {-0xff,-0xff,-0xff,-0xff}
    csrr x5, mngr2proc < {-0x2,-0x3,-0x4,-0x5}
    mul x3, x1, x2
    mul x6, x4, x5
    csrw proc2mngr, x3 > {4,6,6,4}
    csrw proc2mngr, x6 > {0x1fe,0x2fd,0x3fc,0x4fb}
  """

# 0 * positive
def mul_gen_0_pos_test():
  return """
    csrr x1, mngr2proc < {0,0,0,0}
    csrr x2, mngr2proc < {1,2,3,4}
    csrr x4, mngr2proc < {0xff,0xff,0xff,0xff}
    mul x3, x1, x2
    mul x5, x1, x4
    csrw proc2mngr, x3 > {0,0,0,0}
    csrw proc2mngr, x5 > {0,0,0,0}
  """

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def mul_gen_random_test():
  asm_code = []
  for i in range(20):
    # Generate four random values for src0 and src1
    src0 = [
        b32( random.randint(0,0xffffffff) ),
        b32( random.randint(0,0xffffffff) ),
        b32( random.randint(0,0xffffffff) ),
        b32( random.randint(0,0xffffffff) ),
    ]
    src1 = [
        b32( random.randint(0,0xffffffff) ),
        b32( random.randint(0,0xffffffff) ),
        b32( random.randint(0,0xffffffff) ),
        b32( random.randint(0,0xffffffff) ),
    ]
        
    # Compute four destination values
    dest = [(src0[j] * src1[j]) & 0xffffffff for j in range(4)]
    # Append the generated test cases for each pair
    for j in range(4):
        asm_code.append(gen_rr_value_test(
            "mul",
            src0[j].uint(),  # Single src0 value
            src1[j].uint(),  # Single src1 value
            dest[j].uint()   # Single dest value
        )
    )
  return asm_code