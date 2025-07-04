#=========================================================================
# ProcDpathImmGen unit tests
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.test_utils import run_test_vector_sim

from lab2_proc.ProcDpathImmGen import ProcDpathImmGen

#-------------------------------------------------------------------------
# test I-type
#-------------------------------------------------------------------------

def test_immgen_i( cmdline_opts ):
  dut = ProcDpathImmGen()

  run_test_vector_sim( dut, [
    ('imm_type inst                                imm*'),
    [ 0,       0b11111111111100000000000000000000, 0b11111111111111111111111111111111],
    [ 0,       0b00000000000011111111111111111111, 0b00000000000000000000000000000000],
    [ 0,       0b01111111111100000000000000000000, 0b00000000000000000000011111111111],
    [ 0,       0b11111111111000000000000000000000, 0b11111111111111111111111111111110],
  ], cmdline_opts )

#-------------------------------------------------------------------------
# test B-type
#-------------------------------------------------------------------------

def test_immgen_b( cmdline_opts ):
  dut = ProcDpathImmGen()

  run_test_vector_sim( dut, [
    ('imm_type inst                                imm*'),
    [ 2,       0b11111110000000000000111110000000, 0b11111111111111111111111111111110],
    [ 2,       0b00000001111111111111000001111111, 0b00000000000000000000000000000000],
    [ 2,       0b11000000000000000000111100000000, 0b11111111111111111111010000011110],
  ], cmdline_opts )

#-------------------------------------------------------------------------
# test S-type
#-------------------------------------------------------------------------

def test_immgen_s( cmdline_opts ):
  dut = ProcDpathImmGen()

  run_test_vector_sim( dut, [
    ('imm_type inst                                imm*'),
    [ 1,       0b10000000000000000000000000000000, 0b11111111111111111111100000000000],
    [ 1,       0b00000000000000000000000010000000, 0b00000000000000000000000000000001],
    [ 1,       0b00000000000000000000111110000000, 0b00000000000000000000000000011111],
   
  ], cmdline_opts )

#-------------------------------------------------------------------------
# test J-type
#-------------------------------------------------------------------------

def test_immgen_j( cmdline_opts ):
  dut = ProcDpathImmGen()

  run_test_vector_sim( dut, [
    ('imm_type inst                                imm*'),
    [ 4,       0b11111111111111111111111111111111, 0b11111111111111111111111111111110],
    [ 4,       0b01111111111111111111111111111111, 0b00000000000011111111111111111110],
    [ 4,       0b00000000000100000000000000000000, 0b00000000000000000000100000000000],
    [ 4,       0b00000001111100000000000000000000, 0b00000000000000000000100000011110],
    
  ], cmdline_opts )

#-------------------------------------------------------------------------
# test U-type
#-------------------------------------------------------------------------

def test_immgen_u( cmdline_opts ):
  dut = ProcDpathImmGen()

  run_test_vector_sim( dut, [
    ('imm_type inst                                imm*'),
    [ 3,       0b11111111111111111111000000000000, 0b11111111111111111111000000000000],
    [ 3,       0b00000000000000000000111111111111, 0b00000000000000000000000000000000],
    [ 3,       0b10101010101010101010000000000000, 0b10101010101010101010000000000000],
    [ 3,       0b01010101010101010101111111111111, 0b01010101010101010101000000000000],
  ], cmdline_opts )