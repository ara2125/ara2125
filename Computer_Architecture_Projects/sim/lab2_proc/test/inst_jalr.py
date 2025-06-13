#=========================================================================
# jalr
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

    # Use r3 to track the control flow pattern
    addi  x3, x0, 0           # 0x0200
                              #
    lui x1,      %hi[label_a] # 0x0204
    addi x1, x1, %lo[label_a] # 0x0208
                              #
    nop                       # 0x020c
    nop                       # 0x0210
    nop                       # 0x0214
    nop                       # 0x0218
    nop                       # 0x021c
    nop                       # 0x0220
    nop                       # 0x0224
    nop                       # 0x0228
                              #
    jalr  x31, x1, 0          # 0x022c
    addi  x3, x3, 0b01        # 0x0230

    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop

  label_a:
    addi  x3, x3, 0b10

    # Check the link address
    csrw  proc2mngr, x31 > 0x0230

    # Only the second bit should be set if jump was taken
    csrw  proc2mngr, x3  > 0b10

  """

def gen_positive_offset_test():
  return """
  
    addi  x3, x0, 0           # Initialize x3 to track control flow
                              #
    lui x1,      %hi[label_b] # Load label_b address
    addi x1, x1, %lo[label_b] #
                              #
    nop                       # Adding some NOPs
    nop                       #
                              #
    jalr  x31, x1, 0          # Jump forward to label_b
    addi  x3, x3, 0b01        # This instruction should not execute

    nop                       # Extra NOPs after JALR
    nop                       #
    nop                       #

  label_b:
    addi  x3, x3, 0b10        # Set x3 to indicate jump was taken

    # Check link address and control flow correctness
    csrw  proc2mngr, x31 > 0x0218
    csrw  proc2mngr, x3  > 0b10
  """

def gen_negative_offset_test():
  return """
  
    addi  x3, x0, 0           # Initialize x3 to track control flow
                              #
    lui x2,      %hi[label_d] # Store label_d address for later
    addi x2, x2, %lo[label_d] #
                              #
    lui x1,      %hi[label_c] # Load label_c address
    addi x1, x1, %lo[label_c] #
                              #
    jalr  x31, x1, 0          # Jump forward
    addi  x3, x3, 0b01        # This should execute before jump back

    nop                       #
    nop                       #

  label_c:
    jalr  x31, x2, 0          # Jump backward to label_d
    addi  x3, x3, 0b10        # This should not execute

    nop                       #
    nop                       #

  label_d:
    addi  x3, x3, 0b100       # This should execute after jump back

    # Check link address and control flow correctness
    csrw  proc2mngr, x31 > 0x0228
    csrw  proc2mngr, x3  > 0b100
  """

def gen_multiple_jalr_test():
  return """
  
    addi  x3, x0, 0           # Initialize x3
                              #
    lui x1,      %hi[label_e] # Load label_e address
    addi x1, x1, %lo[label_e] #
                              #
    jalr  x31, x1, 0          # First jump
    addi  x3, x3, 0b01        # This instruction should not execute

  label_e:
    lui x1,      %hi[label_f] # Load label_f address
    addi x1, x1, %lo[label_f] #
                              #
    jalr  x31, x1, 0          # Second jump
    addi  x3, x3, 0b10        # This should not execute

  label_f:
    addi  x3, x3, 0b100       # Set x3 to indicate both jumps were taken

    # Check link addresses and control flow correctness
    csrw  proc2mngr, x31 > 0x0220
    csrw  proc2mngr, x3  > 0b100
  """

def gen_varying_nop_test():
  return """
  
    addi  x3, x0, 0           # Initialize x3
                              #
    nop                       # Adding NOPs before the JALR
    nop                       #
    nop                       #
                              #
    lui x1,      %hi[label_g] # Load label_g address
    addi x1, x1, %lo[label_g] #
                              #
    jalr  x31, x1, 0          # Jump forward
    nop                       # Extra NOPs after JALR
    nop                       #
    addi  x3, x3, 0b01        # This should not execute

  label_g:
    addi  x3, x3, 0b10        # Set x3 to indicate the jump was taken

    # Check the link address and control flow
    csrw  proc2mngr, x31 > 0x021c
    csrw  proc2mngr, x3  > 0b10
  """

