#=========================================================================
# sltu
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
    csrr x1, mngr2proc < 4
    csrr x2, mngr2proc < 5
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sltu x3, x1, x2
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
    gen_rr_dest_dep_test( 5, "sltu", 1, 2, 1 ),
    gen_rr_dest_dep_test( 4, "sltu", 3, 3, 0 ),
    gen_rr_dest_dep_test( 3, "sltu", 4, 3, 0 ),
    gen_rr_dest_dep_test( 2, "sltu", 5, 6, 1 ),
    gen_rr_dest_dep_test( 1, "sltu", 7, 7, 0 ),
    gen_rr_dest_dep_test( 0, "sltu", 8, 9, 1 ),
  ]

#-------------------------------------------------------------------------
# gen_src0_dep_test
#-------------------------------------------------------------------------

def gen_src0_dep_test():
  return [
    gen_rr_src0_dep_test( 5, "sltu", 1, 2, 1 ),
    gen_rr_src0_dep_test( 4, "sltu", 2, 1, 0 ),
    gen_rr_src0_dep_test( 3, "sltu", 3, 3, 0 ),
    gen_rr_src0_dep_test( 2, "sltu", 4, 5, 1 ),
    gen_rr_src0_dep_test( 1, "sltu", 5, 4, 0 ),
    gen_rr_src0_dep_test( 0, "sltu", 6, 6, 0 ),
  ]

#-------------------------------------------------------------------------
# gen_src1_dep_test
#-------------------------------------------------------------------------

def gen_src1_dep_test():
  return [
    gen_rr_src1_dep_test( 5, "sltu", 1, 2, 1 ),
    gen_rr_src1_dep_test( 4, "sltu", 2, 1, 0 ),
    gen_rr_src1_dep_test( 3, "sltu", 3, 3, 0 ),
    gen_rr_src1_dep_test( 2, "sltu", 4, 5, 1 ),
    gen_rr_src1_dep_test( 1, "sltu", 5, 4, 0 ),
    gen_rr_src1_dep_test( 0, "sltu", 6, 6, 0 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_test
#-------------------------------------------------------------------------

def gen_srcs_dep_test():
  return [
    gen_rr_srcs_dep_test( 5, "sltu", 1, 2, 1 ),
    gen_rr_srcs_dep_test( 4, "sltu", 2, 1, 0 ),
    gen_rr_srcs_dep_test( 3, "sltu", 3, 3, 0 ),
    gen_rr_srcs_dep_test( 2, "sltu", 4, 5, 1 ),
    gen_rr_srcs_dep_test( 1, "sltu", 5, 4, 0 ),
    gen_rr_srcs_dep_test( 0, "sltu", 6, 6, 0 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dest_test
#-------------------------------------------------------------------------

def gen_srcs_dest_test():
  return [
    gen_rr_src0_eq_dest_test( "sltu", 1, 2, 1 ),
    gen_rr_src1_eq_dest_test( "sltu", 3, 2, 0 ),
    gen_rr_src0_eq_src1_test( "sltu", 4, 0 ),
    gen_rr_srcs_eq_dest_test( "sltu", 5, 0 ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [
    gen_rr_value_test( "sltu", 0x00000000, 0x00000000, 0 ),
    gen_rr_value_test( "sltu", 0x00000001, 0x00000001, 0 ),
    gen_rr_value_test( "sltu", 0x00000003, 0x00000007, 1 ),
    gen_rr_value_test( "sltu", 0x00000007, 0x00000003, 0 ),

    gen_rr_value_test( "sltu", 0x00000000, 0xffff8000, 1 ),
    gen_rr_value_test( "sltu", 0x80000000, 0x00000000, 0 ),
    gen_rr_value_test( "sltu", 0x80000000, 0xffff8000, 1 ),

    gen_rr_value_test( "sltu", 0x00000000, 0x00007fff, 1 ),
    gen_rr_value_test( "sltu", 0x7fffffff, 0x00000000, 0 ),
    gen_rr_value_test( "sltu", 0x7fffffff, 0x00007fff, 0 ),

    gen_rr_value_test( "sltu", 0x80000000, 0x00007fff, 0 ),
    gen_rr_value_test( "sltu", 0x7fffffff, 0xffff8000, 1 ),

    gen_rr_value_test( "sltu", 0x00000000, 0xffffffff, 1 ),
    gen_rr_value_test( "sltu", 0xffffffff, 0x00000001, 0 ),
    gen_rr_value_test( "sltu", 0xffffffff, 0xffffffff, 0 ),
  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in range(100):
    src0 = b32( random.randint(0,0xffffffff) )
    src1 = b32( random.randint(0,0xffffffff) )
    dest = b32( 1 if src0 < src1 else 0 )
    asm_code.append( gen_rr_value_test( "sltu", src0.uint(), src1.uint(), dest.uint() ) )
  return asm_code