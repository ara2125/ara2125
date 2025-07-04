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
    csrr x1, mngr2proc < 0x80008000
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    slli x3, x1, 3
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw proc2mngr, x3 > 0x00040000
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
    gen_rimm_dest_dep_test( 5, "slli", 0x00000001, 1, 0x00000002 ),
    gen_rimm_dest_dep_test( 4, "slli", 0x00000001, 2, 0x00000004 ),
    gen_rimm_dest_dep_test( 3, "slli", 0x00000001, 3, 0x00000008 ),
    gen_rimm_dest_dep_test( 2, "slli", 0x00000001, 4, 0x00000010 ),
    gen_rimm_dest_dep_test( 1, "slli", 0x00000001, 31, 0x80000000 ),
    gen_rimm_dest_dep_test( 0, "slli", 0xffffffff, 0, 0xffffffff ),
  ]

#-------------------------------------------------------------------------
# gen_src_dep_test
#-------------------------------------------------------------------------

def gen_src_dep_test():
  return [
    gen_rimm_src_dep_test( 5, "slli", 0x00000001, 1, 0x00000002 ),
    gen_rimm_src_dep_test( 4, "slli", 0x00000001, 2, 0x00000004 ),
    gen_rimm_src_dep_test( 3, "slli", 0x00000001, 3, 0x00000008 ),
    gen_rimm_src_dep_test( 2, "slli", 0x00000001, 4, 0x00000010 ),
    gen_rimm_src_dep_test( 1, "slli", 0x00000001, 31, 0x80000000 ),
    gen_rimm_src_dep_test( 0, "slli", 0xffffffff, 0, 0xffffffff ),
  ]

#-------------------------------------------------------------------------
# gen_src_eq_dest_test
#-------------------------------------------------------------------------

def gen_srcs_dest_test():
  return [
    gen_rimm_src_eq_dest_test( "slli", 0x00000001, 1, 0x00000002 ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [
    gen_rimm_value_test( "slli", 0x00000001, 0,  0x00000001 ),
    gen_rimm_value_test( "slli", 0x00000001, 1,  0x00000002 ),
    gen_rimm_value_test( "slli", 0x00000001, 7,  0x00000080 ),
    gen_rimm_value_test( "slli", 0x00000001, 14, 0x00004000 ),
    gen_rimm_value_test( "slli", 0x00000001, 31, 0x80000000 ),
    gen_rimm_value_test( "slli", 0xffffffff, 0,  0xffffffff ),
    gen_rimm_value_test( "slli", 0xffffffff, 1,  0xfffffffe ),
    gen_rimm_value_test( "slli", 0xffffffff, 7,  0xffffff80 ),
    gen_rimm_value_test( "slli", 0xffffffff, 14, 0xffffc000 ),
    gen_rimm_value_test( "slli", 0xffffffff, 31, 0x80000000 ),
    gen_rimm_value_test( "slli", 0x21212121, 0,  0x21212121 ),
    gen_rimm_value_test( "slli", 0x21212121, 1,  0x42424242 ),
    gen_rimm_value_test( "slli", 0x21212121, 4,  0x12121210 ),
    gen_rimm_value_test( "slli", 0x21212121, 8,  0x21212100 ),
    gen_rimm_value_test( "slli", 0x21212121, 16, 0x21210000 ),
    gen_rimm_value_test( "slli", 0x21212121, 31, 0x80000000 ),
  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in range(100):
    src = b32( random.randint(0,0xffffffff) )
    imm = b32( random.randint(0,31) )
    dest = src << imm
    asm_code.append( gen_rimm_value_test( "slli", src.uint(), imm.uint(), dest.uint() ) )
  return asm_code