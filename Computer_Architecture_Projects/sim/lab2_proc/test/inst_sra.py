#=========================================================================
# sra
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
    csrr x1, mngr2proc < 0x00008000
    csrr x2, mngr2proc < 0x00000003
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sra x3, x1, x2
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw proc2mngr, x3 > 0x00001000
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
    gen_rr_dest_dep_test( 5, "sra", 0x80000000, 1, 0xc0000000 ),
    gen_rr_dest_dep_test( 4, "sra", 0x80000000, 2, 0xe0000000 ),
    gen_rr_dest_dep_test( 3, "sra", 0x80000000, 3, 0xf0000000 ),
    gen_rr_dest_dep_test( 2, "sra", 0x80000000, 4, 0xf8000000 ),
    gen_rr_dest_dep_test( 1, "sra", 0x80000001, 31, 0xffffffff ),
    gen_rr_dest_dep_test( 0, "sra", 0x7fffffff, 31, 0x00000000 ),
  ]

#-------------------------------------------------------------------------
# gen_src0_dep_test
#-------------------------------------------------------------------------

def gen_src0_dep_test():
  return [
    gen_rr_src0_dep_test( 5, "sra", 0x80000000, 1, 0xc0000000 ),
    gen_rr_src0_dep_test( 4, "sra", 0x80000000, 2, 0xe0000000 ),
    gen_rr_src0_dep_test( 3, "sra", 0x80000000, 3, 0xf0000000 ),
    gen_rr_src0_dep_test( 2, "sra", 0x80000000, 4, 0xf8000000 ),
    gen_rr_src0_dep_test( 1, "sra", 0x80000001, 31, 0xffffffff ),
    gen_rr_src0_dep_test( 0, "sra", 0x7fffffff, 31, 0x00000000 ),
  ]

#-------------------------------------------------------------------------
# gen_src1_dep_test
#-------------------------------------------------------------------------

def gen_src1_dep_test():
  return [
    gen_rr_src1_dep_test( 5, "sra", 0x80000000, 1, 0xc0000000 ),
    gen_rr_src1_dep_test( 4, "sra", 0x80000000, 2, 0xe0000000 ),
    gen_rr_src1_dep_test( 3, "sra", 0x80000000, 3, 0xf0000000 ),
    gen_rr_src1_dep_test( 2, "sra", 0x80000000, 4, 0xf8000000 ),
    gen_rr_src1_dep_test( 1, "sra", 0x80000001, 31, 0xffffffff ),
    gen_rr_src1_dep_test( 0, "sra", 0x7fffffff, 31, 0x00000000 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_test
#-------------------------------------------------------------------------

def gen_srcs_dep_test():
  return [
    gen_rr_srcs_dep_test( 5, "sra", 0x80000000, 1, 0xc0000000 ),
    gen_rr_srcs_dep_test( 4, "sra", 0x80000000, 2, 0xe0000000 ),
    gen_rr_srcs_dep_test( 3, "sra", 0x80000000, 3, 0xf0000000 ),
    gen_rr_srcs_dep_test( 2, "sra", 0x80000000, 4, 0xf8000000 ),
    gen_rr_srcs_dep_test( 1, "sra", 0x80000001, 31, 0xffffffff ),
    gen_rr_srcs_dep_test( 0, "sra", 0x7fffffff, 31, 0x00000000 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dest_test
#-------------------------------------------------------------------------

def gen_srcs_dest_test():
  return [
    gen_rr_src0_eq_dest_test( "sra", 0x80000000, 1, 0xc0000000 ),
    gen_rr_src1_eq_dest_test( "sra", 0x80000000, 1, 0xc0000000 ),
    gen_rr_src0_eq_src1_test( "sra", 0x80000000, 0x80000000 ),
    gen_rr_srcs_eq_dest_test( "sra", 0x80000000, 0x80000000 ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [
    gen_rr_value_test( "sra", 0x80000000, 0,  0x80000000 ),
    gen_rr_value_test( "sra", 0x80000000, 1,  0xc0000000 ),
    gen_rr_value_test( "sra", 0x80000000, 7,  0xff000000 ),
    gen_rr_value_test( "sra", 0x80000000, 14, 0xfffe0000 ),
    gen_rr_value_test( "sra", 0x80000001, 31, 0xffffffff ),
    gen_rr_value_test( "sra", 0x7fffffff, 0,  0x7fffffff ),
    gen_rr_value_test( "sra", 0x7fffffff, 1,  0x3fffffff ),
    gen_rr_value_test( "sra", 0x7fffffff, 7,  0x00ffffff ),
    gen_rr_value_test( "sra", 0x7fffffff, 14, 0x0001ffff ),
    gen_rr_value_test( "sra", 0x7fffffff, 31, 0x00000000 ),
    gen_rr_value_test( "sra", 0x81818181, 0,  0x81818181 ),
    gen_rr_value_test( "sra", 0x81818181, 1,  0xc0c0c0c0 ),
    gen_rr_value_test( "sra", 0x81818181, 4,  0xf8181818 ),
    gen_rr_value_test( "sra", 0x81818181, 8,  0xff818181 ),
    gen_rr_value_test( "sra", 0x81818181, 16, 0xffff8181 ),
    gen_rr_value_test( "sra", 0x81818181, 31, 0xffffffff ),
    gen_rr_value_test( "sra", 0x7e7e7e7e, 0,  0x7e7e7e7e ),
    gen_rr_value_test( "sra", 0x7e7e7e7e, 1,  0x3f3f3f3f ),
    gen_rr_value_test( "sra", 0x7e7e7e7e, 4,  0x07e7e7e7 ),
    gen_rr_value_test( "sra", 0x7e7e7e7e, 8,  0x007e7e7e ),
    gen_rr_value_test( "sra", 0x7e7e7e7e, 16, 0x00007e7e ),
    gen_rr_value_test( "sra", 0x7e7e7e7e, 31, 0x00000000 ),
  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in range(100):
    src0 = b32( random.randint(0,0xffffffff) )
    src1 = b32( random.randint(0,31) )
    dest = b32( src0.int() >> src1.uint() )
    asm_code.append( gen_rr_value_test( "sra", src0.uint(), src1.uint(), dest.uint() ) )
  return asm_code