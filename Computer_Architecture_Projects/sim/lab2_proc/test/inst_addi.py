#=========================================================================
# addi
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
    csrr x1, mngr2proc < 0x00000005
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    addi x3, x1, 0x003
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw proc2mngr, x3 > 0x00000008
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
    gen_rimm_dest_dep_test( 5, "addi", 0x00000001, 0x001, 0x00000002 ),
    gen_rimm_dest_dep_test( 4, "addi", 0x00000002, 0x002, 0x00000004 ),
    gen_rimm_dest_dep_test( 3, "addi", 0x00000003, 0x003, 0x00000006 ),
    gen_rimm_dest_dep_test( 2, "addi", 0x00000004, 0x004, 0x00000008 ),
    gen_rimm_dest_dep_test( 1, "addi", 0x00000005, 0x005, 0x0000000a ),
    gen_rimm_dest_dep_test( 0, "addi", 0x00000006, 0x006, 0x0000000c ),
  ]

#-------------------------------------------------------------------------
# gen_src_dep_test
#-------------------------------------------------------------------------

def gen_src_dep_test():
  return [
    gen_rimm_src_dep_test( 5, "addi", 0x00000001, 0x001, 0x00000002 ),
    gen_rimm_src_dep_test( 4, "addi", 0x00000002, 0x002, 0x00000004 ),
    gen_rimm_src_dep_test( 3, "addi", 0x00000003, 0x003, 0x00000006 ),
    gen_rimm_src_dep_test( 2, "addi", 0x00000004, 0x004, 0x00000008 ),
    gen_rimm_src_dep_test( 1, "addi", 0x00000005, 0x005, 0x0000000a ),
    gen_rimm_src_dep_test( 0, "addi", 0x00000006, 0x006, 0x0000000c ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dest_test
#-------------------------------------------------------------------------

def gen_srcs_dest_test():
  return [
    gen_rimm_src_eq_dest_test( "addi", 0x00000001, 0x001, 0x00000002 ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [
    gen_rimm_value_test( "addi", 0x00000000, 0x000, 0x00000000 ),
    gen_rimm_value_test( "addi", 0x00000001, 0xfff, 0x00000000 ),  # -1
    gen_rimm_value_test( "addi", 0x00000fff, 0x001, 0x00001000 ),
    gen_rimm_value_test( "addi", 0x7fffffff, 0x000, 0x7fffffff ),  # pos overflow
    gen_rimm_value_test( "addi", 0x80000000, 0x000, 0x80000000 ),  # neg overflow
  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in range(100):
    src  = b32( random.randint(0,0xffffffff) )
    imm  = b12( random.randint(0,0xfff) )
    dest = src + sext(imm,32)
    asm_code.append( gen_rimm_value_test( "addi", src.uint(), imm.uint(), dest.uint() ) )
  return asm_code

def gen_raw_addi_test():
  return """
    # RAW Hazard: x1 is written by ADDI and read by next ADDI
    csrr x1, mngr2proc < 5
    addi x1, x1, 2      # Write to x1
    addi x2, x1, 3      # Read x1 immediately after
    nop
    nop
    nop
    nop
    csrw proc2mngr, x2 > 10
    nop
    nop
    nop
  """

def gen_war_addi_test():
  return """
    # WAR Hazard: x2 is read then written
    csrr x1, mngr2proc < 5
    csrr x2, mngr2proc < 4
    addi x3, x2, 1      # Read x2
    addi x2, x1, 2      # Write to x2
    nop
    nop
    nop
    nop
    csrw proc2mngr, x3 > 5
    nop
    nop
    nop
  """

def gen_waw_addi_test():
  return """
    # WAW Hazard: x1 is written by both ADDI instructions
    csrr x1, mngr2proc < 5
    addi x1, x1, 2      # Write to x1
    addi x1, x1, 3      # Write to x1 again
    nop
    nop
    nop
    nop
    csrw proc2mngr, x1 > 10
    nop
    nop
    nop
  """