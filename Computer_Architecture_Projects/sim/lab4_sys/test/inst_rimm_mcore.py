#=========================================================================
# extra multicore rimm tests
#=========================================================================

import random

# Fix the random seed so results are reproducible
random.seed(0xdeadbeef)

from pymtl3 import *
from lab2_proc.test.inst_utils import *

#-------------------------------------------------------------------------
# addi
#-------------------------------------------------------------------------

# positive + positive immediate
def addi_gen_pos_pos_test():
  return """
    csrr x1, mngr2proc < {1,2,3,4}
    csrr x4, mngr2proc < {0xffffff0,0xffffff1,0xffffff2,0xffffff3}
    addi x3, x1, 0x5
    addi x6, x4, 0xf
    csrw proc2mngr, x3 > {6,7,8,9}
    csrw proc2mngr, x6 > {0xfffffff,0x10000000,0x10000001,0x10000002}
  """

# positive + negative immediate
def addi_gen_pos_neg_test():
  return """
    csrr x1, mngr2proc < {5,6,7,8}
    csrr x4, mngr2proc < {0xffffff0,0xffffff1,0xffffff2,0xffffff3}
    addi x3, x1, -3
    addi x6, x4, -16
    csrw proc2mngr, x3 > {2,3,4,5}
    csrw proc2mngr, x6 > {0xfffffe0,0xfffffe1,0xfffffe2,0xfffffe3}
  """

# negative + positive immediate
def addi_gen_neg_pos_test():
  return """
    csrr x1, mngr2proc < {-4,-3,-2,-1}
    csrr x4, mngr2proc < {-0xff,-0xff,-0xff,-0xff}
    addi x3, x1, 5
    addi x6, x4, 0xf
    csrw proc2mngr, x3 > {1,2,3,4}
    csrw proc2mngr, x6 > {-0xf0,-0xf0,-0xf0,-0xf0}
  """

# zero + immediate
def addi_gen_zero_imm_test():
  return """
    csrr x1, mngr2proc < {0,0,0,0}
    addi x3, x1, 0x5
    addi x4, x1, -5
    csrw proc2mngr, x3 > {5,5,5,5}
    csrw proc2mngr, x4 > {-5,-5,-5,-5}
  """

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def addi_gen_random_test():
  asm_code = []
  for i in range(20):
    # Generate four random values for src
    src = [
        b32( random.randint(0,0xffffffff) ),
        b32( random.randint(0,0xffffffff) ),
        b32( random.randint(0,0xffffffff) ),
        b32( random.randint(0,0xffffffff) ),
    ]
    # Generate random immediate value (-2048 to 2047, 12-bit signed immediate)
    imm = b12( random.randint(0,0xfff) )
        
    # Compute four destination values
    dest = [src[j] + sext( imm, 32 ) for j in range(4)]
    # Append the generated test cases for each value
    for j in range(4):
        asm_code.append(gen_rimm_value_test(
            "addi",
            src[j].uint(),    # Single src value
            imm.uint(),       # Immediate value
            dest[j].uint()    # Single dest value
        )
    )
  return asm_code
