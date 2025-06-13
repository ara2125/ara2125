#=========================================================================
# jal
#=========================================================================
import random

random.seed(0xdeadbeef)

from pymtl3 import *
from lab2_proc.test.inst_utils import *

#-------------------------------------------------------------------------
# gen_basic_test
#-------------------------------------------------------------------------

def gen_basic_test():
  return """

    # Use r3 to track the control flow pattern
    addi  x3, x0, 0     # 0x0200
                        #
    nop                 # 0x0204
    nop                 # 0x0208
    nop                 # 0x020c
    nop                 # 0x0210
    nop                 # 0x0214
    nop                 # 0x0218
    nop                 # 0x021c
    nop                 # 0x0220
                        #
    jal   x1, label_a   # 0x0224
    addi  x3, x3, 0b01  # 0x0228

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
    csrw  proc2mngr, x1 > 0x0228

    # Only the second bit should be set if jump was taken
    csrw  proc2mngr, x3 > 0b10

  """

def gen_positive_offset_test():
  return """
  
    addi  x3, x0, 0     # Initialize x3 to track control flow

    nop                 # Adding some NOPs
    nop

    jal   x1, label_b   # Jump forward to label_b
    addi  x3, x3, 0b01  # This instruction should not execute

    nop                 # Extra NOPs after JAL
    nop
    nop

  label_b:
    addi  x3, x3, 0b10  # Set x3 to indicate jump was taken

    # Check link address and control flow correctness
    csrw  proc2mngr, x1 > 0x0210
    csrw  proc2mngr, x3 > 0b10
  """


def gen_negative_offset_test():
  return """
  
    addi  x3, x0, 0     # Initialize x3 to track control flow

    jal   x1, label_c   # Jump forward
    addi  x3, x3, 0b01  # This should execute before the jump back

    nop
    nop

  label_c:
    jal   x1, label_d   # Jump backward
    addi  x3, x3, 0b10  # This should not execute

    nop
    nop

  label_d:
    addi  x3, x3, 0b100 # This should execute after the jump back

    # Check link address and control flow correctness
    csrw  proc2mngr, x1 > 0x0218
    csrw  proc2mngr, x3 > 0b100
  """

def gen_multiple_jal_test():
  return """
  
    addi  x3, x0, 0     # Initialize x3

    jal   x1, label_e   # First jump
    addi  x3, x3, 0b01  # This instruction should not execute

  label_e:
    jal   x1, label_f   # Second jump
    addi  x3, x3, 0b10  # This should not execute

  label_f:
    addi  x3, x3, 0b100 # Set x3 to indicate both jumps were taken

    # Check link addresses and control flow correctness
    csrw  proc2mngr, x1 > 0x0210
    csrw  proc2mngr, x3 > 0b100
  """

def gen_varying_nop_test():
  return """
  
    addi  x3, x0, 0     # Initialize x3

    nop                 # Adding NOPs before the JAL
    nop
    nop
    jal   x1, label_g   # Jump forward
    nop                 # Extra NOPs after the JAL
    nop
    addi  x3, x3, 0b01  # This should not execute

  label_g:
    addi  x3, x3, 0b10  # Set x3 to indicate the jump was taken

    # Check the link address and control flow
    csrw  proc2mngr, x1 > 0x0214
    csrw  proc2mngr, x3 > 0b10
  """

def gen_back_to_back_test():
  return """
     # Test backwards walk (back to back jumps)

     csrr x1, mngr2proc < 1   # Load test value for proc2mngr

     jal  x2, X0              # First jump in sequence
     csrw proc2mngr, x0
     nop
     a0:
      csrw proc2mngr, x1 > 1
      jal  x2, y0
     b0:
      jal  x2, a0
      c0:
      jal  x2, b0
      d0:
      jal  x2, c0
      e0:
       jal  x2, d0
      f0:
       jal  x2, e0
      g0:
       jal  x2, f0
      h0:
       jal  x2, g0
      i0:
       jal  x2, h0
     X0:
      jal  x2, i0
     y0:
      nop
      nop
      nop
      nop
      nop
      nop
      nop
  """

def gen_raw_jal_test():
  return """
    # RAW Hazard: x1 is written by JAL then read
    csrr x2, mngr2proc < 4
    jal x1, label1      # Write to x1 (return address)
    add x3, x1, x2      # Read x1 immediately after
    nop
    label1:
    nop
    nop
    csrw proc2mngr, x3 > 0  # Value depends on PC
    nop
    nop
    nop
  """

def gen_war_jal_test():
  return """
    # WAR Hazard: x1 is read then written by JAL
    csrr x1, mngr2proc < 5
    add x2, x1, x1      # Read x1
    jal x1, label1      # Write to x1
    nop
    label1:
    nop
    nop
    csrw proc2mngr, x2 > 10
    nop
    nop
    nop
  """


