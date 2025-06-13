#=========================================================================
# auipc
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
    auipc x1, 0x00010                       # PC=0x200
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw  proc2mngr, x1 > 0x00010200
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
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [
    gen_imm_value_test( "auipc", 0x00000, 0x00000200 ),
    gen_imm_value_test( "auipc", 0x00001, 0x00001208 ),
    gen_imm_value_test( "auipc", 0x7ffff, 0x7ffff210 ),
    gen_imm_value_test( "auipc", 0x80000, 0x80000218 ),
    gen_imm_value_test( "auipc", 0xfffff, 0xfffff220 ),
    gen_imm_value_test( "auipc", 0x12345, 0x12345228 ),
    gen_imm_value_test( "auipc", 0x54321, 0x54321230 ),
    gen_imm_value_test( "auipc", 0xabcde, 0xabcde238 ),
  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in range(100):
    imm = b20( random.randint(0,0xfffff) )
    pc = 0x200 + (i * 8)  # PC starts at 0x200 and increments by 8 for each instruction
    dest = (imm.uint() << 12) + pc  # Shift immediate by 12 bits and add to PC
    asm_code.append( gen_imm_value_test( "auipc", imm.uint(), dest ) )
  return asm_code