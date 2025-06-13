#=========================================================================
# sltiu
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
    sltiu x3, x1, 10    # unsigned: 5 < 10 = 1
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
    gen_rimm_dest_dep_test( 5, "sltiu", 0x00000004, 5,  0x00000001 ),
    gen_rimm_dest_dep_test( 4, "sltiu", 0x00000005, 5,  0x00000000 ),
    gen_rimm_dest_dep_test( 3, "sltiu", 0xffffffff, 0,  0x00000000 ),  # MAX_UINT < 0
    gen_rimm_dest_dep_test( 2, "sltiu", 0x00000000, 1,  0x00000001 ),  # 0 < 1
    gen_rimm_dest_dep_test( 1, "sltiu", 0x00000001, 2,  0x00000001 ),  # 1 < 2
    gen_rimm_dest_dep_test( 0, "sltiu", 0xffffffff, 0xfff, 0x00000000 ),  # MAX_UINT < sext(0xfff)
  ]

#-------------------------------------------------------------------------
# gen_src_dep_test
#-------------------------------------------------------------------------

def gen_src_dep_test():
  return [
    gen_rimm_src_dep_test( 5, "sltiu", 0x00000004, 5,  0x00000001 ),
    gen_rimm_src_dep_test( 4, "sltiu", 0x00000005, 5,  0x00000000 ),
    gen_rimm_src_dep_test( 3, "sltiu", 0xffffffff, 0,  0x00000000 ),
    gen_rimm_src_dep_test( 2, "sltiu", 0x00000000, 1,  0x00000001 ),
    gen_rimm_src_dep_test( 1, "sltiu", 0x00000001, 2,  0x00000001 ),
    gen_rimm_src_dep_test( 0, "sltiu", 0xffffffff, 0xfff, 0x00000000 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dest_test
#-------------------------------------------------------------------------

def gen_srcs_dest_test():
  return [
    gen_rimm_src_eq_dest_test( "sltiu", 0x00000004, 5, 0x00000001 ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [
    gen_rimm_value_test( "sltiu", 0x00000000,  0,  0x00000000 ),  # 0 < 0
    gen_rimm_value_test( "sltiu", 0x00000001,  1,  0x00000000 ),  # 1 < 1
    gen_rimm_value_test( "sltiu", 0x00000003,  5,  0x00000001 ),  # 3 < 5
    gen_rimm_value_test( "sltiu", 0xffffffff,  1,  0x00000000 ),  # MAX_UINT < 1
    gen_rimm_value_test( "sltiu", 0x00000000, -1,  0x00000001 ),  # 0 < sext(-1) = 0 < MAX_UINT
    gen_rimm_value_test( "sltiu", 0xfffffffe, -1,  0x00000001 ),  # (MAX_UINT-1) < MAX_UINT
  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in range(100):
    src  = b32( random.randint(0,0xffffffff) )
    imm  = b12( random.randint(0,0xfff) )
    # Unsigned comparison after sign extension of immediate
    dest = b32( 1 if src.uint() < sext(imm,32).uint() else 0 )
    asm_code.append( gen_rimm_value_test( "sltiu", src.uint(), imm.uint(), dest.uint() ) )
  return asm_code