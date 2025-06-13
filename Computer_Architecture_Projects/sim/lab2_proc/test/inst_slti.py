#=========================================================================
# slti
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
    csrr x1, mngr2proc < 5
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    slti x3, x1, 10    # 5 < 10 = 1
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw proc2mngr, x3 > 1
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
  """

#-------------------------------------------------------------------------
# gen_dest_dep_test
#-------------------------------------------------------------------------

def gen_dest_dep_test():
  return [
    gen_rimm_dest_dep_test( 5, "slti", 0x00000004, 5,  0x00000001 ),
    gen_rimm_dest_dep_test( 4, "slti", 0x00000005, 5,  0x00000000 ),
    gen_rimm_dest_dep_test( 3, "slti", 0xffffffff, 0,  0x00000001 ),  # -1 < 0
    gen_rimm_dest_dep_test( 2, "slti", 0x00000000, -1, 0x00000000 ),  # 0 < -1
    gen_rimm_dest_dep_test( 1, "slti", 0x80000000, 0,  0x00000001 ),  # MIN < 0
    gen_rimm_dest_dep_test( 0, "slti", 0x7fffffff, 0,  0x00000000 ),  # MAX < 0
  ]

#-------------------------------------------------------------------------
# gen_src_dep_test
#-------------------------------------------------------------------------

def gen_src_dep_test():
  return [
    gen_rimm_src_dep_test( 5, "slti", 0x00000004, 5,  0x00000001 ),
    gen_rimm_src_dep_test( 4, "slti", 0x00000005, 5,  0x00000000 ),
    gen_rimm_src_dep_test( 3, "slti", 0xffffffff, 0,  0x00000001 ),
    gen_rimm_src_dep_test( 2, "slti", 0x00000000, -1, 0x00000000 ),
    gen_rimm_src_dep_test( 1, "slti", 0x80000000, 0,  0x00000001 ),
    gen_rimm_src_dep_test( 0, "slti", 0x7fffffff, 0,  0x00000000 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dest_test
#-------------------------------------------------------------------------

def gen_srcs_dest_test():
  return [
    gen_rimm_src_eq_dest_test( "slti", 0x00000004, 5, 0x00000001 ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [
    gen_rimm_value_test( "slti", 0x00000000,  0,  0x00000000 ),
    gen_rimm_value_test( "slti", 0x00000001,  1,  0x00000000 ),
    gen_rimm_value_test( "slti", 0x00000003,  5,  0x00000001 ),
    gen_rimm_value_test( "slti", 0xffffffff,  1,  0x00000001 ),  # -1 < 1
  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in range(100):
    src  = b32( random.randint(0,0xffffffff) )
    imm  = b12( random.randint(0,0xfff) )
    dest = b32( 1 if src.int() < sext(imm,32).int() else 0 )
    asm_code.append( gen_rimm_value_test( "slti", src.uint(), imm.uint(), dest.uint() ) )
  return asm_code
