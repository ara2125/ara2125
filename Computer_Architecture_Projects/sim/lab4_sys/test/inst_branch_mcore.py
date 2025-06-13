#=========================================================================
# extra multicore branch tests
#=========================================================================

import random

# Fix the random seed so results are reproducible
random.seed(0xdeadbeef)

from pymtl3 import *
from lab2_proc.test.inst_utils import *

#-------------------------------------------------------------------------
# bne
#-------------------------------------------------------------------------

def gen_basic_test():
  return """

    # Use x3 to track the control flow pattern
    addi  x3, x0, 0

    csrr  x1, mngr2proc < {1,2,3,4}
    csrr  x2, mngr2proc < {2,3,4,5}

    # This branch should be taken
    bne   x1, x2, label_a
    addi  x3, x3, 0b01

  label_a:
    addi  x3, x3, 0b10

    # Only the second bit should be set if branch was taken
    csrw  proc2mngr, x3 > {0b10,0b10,0b10,0b10}

  """