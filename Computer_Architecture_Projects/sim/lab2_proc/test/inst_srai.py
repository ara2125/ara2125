#=========================================================================
# srai
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
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    srai x3, x1, 0x03
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
    gen_rimm_dest_dep_test( 5, "srai", 0x80000000, 0x01, 0xc0000000 ),
    gen_rimm_dest_dep_test( 4, "srai", 0x80000000, 0x02, 0xe0000000 ),
    gen_rimm_dest_dep_test( 3, "srai", 0x80000000, 0x03, 0xf0000000 ),
    gen_rimm_dest_dep_test( 2, "srai", 0x80000000, 0x04, 0xf8000000 ),
    gen_rimm_dest_dep_test( 1, "srai", 0x80000001, 0x1f, 0xffffffff ),
    gen_rimm_dest_dep_test( 0, "srai", 0x7fffffff, 0x1f, 0x00000000 ),
  ]

#-------------------------------------------------------------------------
# gen_src_dep_test
#-------------------------------------------------------------------------

def gen_src_dep_test():
  return [
    gen_rimm_src_dep_test( 5, "srai", 0x80000000, 0x01, 0xc0000000 ),
    gen_rimm_src_dep_test( 4, "srai", 0x80000000, 0x02, 0xe0000000 ),
    gen_rimm_src_dep_test( 3, "srai", 0x80000000, 0x03, 0xf0000000 ),
    gen_rimm_src_dep_test( 2, "srai", 0x80000000, 0x04, 0xf8000000 ),
    gen_rimm_src_dep_test( 1, "srai", 0x80000001, 0x1f, 0xffffffff ),
    gen_rimm_src_dep_test( 0, "srai", 0x7fffffff, 0x1f, 0x00000000 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dest_test
#-------------------------------------------------------------------------

def gen_srcs_dest_test():
  return [
    gen_rimm_src_eq_dest_test( "srai", 0x80000000, 0x01, 0xc0000000 ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [
    gen_rimm_value_test( "srai", 0x80000000, 0x00, 0x80000000 ),
    gen_rimm_value_test( "srai", 0x80000000, 0x01, 0xc0000000 ),
    gen_rimm_value_test( "srai", 0x80000000, 0x07, 0xff000000 ),
    gen_rimm_value_test( "srai", 0x80000000, 0x0e, 0xfffe0000 ),
    gen_rimm_value_test( "srai", 0x80000001, 0x1f, 0xffffffff ),
    gen_rimm_value_test( "srai", 0x7fffffff, 0x00, 0x7fffffff ),
    gen_rimm_value_test( "srai", 0x7fffffff, 0x01, 0x3fffffff ),
    gen_rimm_value_test( "srai", 0x7fffffff, 0x07, 0x00ffffff ),
    gen_rimm_value_test( "srai", 0x7fffffff, 0x0e, 0x0001ffff ),
    gen_rimm_value_test( "srai", 0x7fffffff, 0x1f, 0x00000000 ),
    gen_rimm_value_test( "srai", 0x81818181, 0x00, 0x81818181 ),
    gen_rimm_value_test( "srai", 0x81818181, 0x01, 0xc0c0c0c0 ),
    gen_rimm_value_test( "srai", 0x81818181, 0x04, 0xf8181818 ),
    gen_rimm_value_test( "srai", 0x81818181, 0x08, 0xff818181 ),
    gen_rimm_value_test( "srai", 0x81818181, 0x10, 0xffff8181 ),
    gen_rimm_value_test( "srai", 0x81818181, 0x1f, 0xffffffff ),
    gen_rimm_value_test( "srai", 0x7e7e7e7e, 0x00, 0x7e7e7e7e ),
    gen_rimm_value_test( "srai", 0x7e7e7e7e, 0x01, 0x3f3f3f3f ),
    gen_rimm_value_test( "srai", 0x7e7e7e7e, 0x04, 0x07e7e7e7 ),
    gen_rimm_value_test( "srai", 0x7e7e7e7e, 0x08, 0x007e7e7e ),
    gen_rimm_value_test( "srai", 0x7e7e7e7e, 0x10, 0x00007e7e ),
    gen_rimm_value_test( "srai", 0x7e7e7e7e, 0x1f, 0x00000000 ),
  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in range(100):
    src  = b32( random.randint(0,0xffffffff) )
    imm  = b32( random.randint(0,31) )
    dest = b32( src.int() >> imm.uint() )
    asm_code.append( gen_rimm_value_test( "srai", src.uint(), imm.uint(), dest.uint() ) )
  return asm_code