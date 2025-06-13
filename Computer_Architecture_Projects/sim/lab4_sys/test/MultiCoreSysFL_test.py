#=========================================================================
# MultiCoreSysFL_test.py
#=========================================================================
# We apply select tests from lab2 to the multi core system. Keep in mind
# that different cores should not load/store the same word! If two cores
# load, modify, store different values to the same address there is no
# guarantee what the final correct result should be. This is a "race
# condition". You may need to exclude some of your SW tests from lab 2 if
# you cannot guarantee that a LW always produces the same value
# regardless of what the other cores are doing.

import pytest

from pymtl3 import *

from lab4_sys.test.harness import asm_test
from lab4_sys.test.harness import run_mcore_test as run_test

from lab4_sys.MultiCoreSysFL import MultiCoreSysFL

from lab2_proc.test import inst_csr
from lab2_proc.test import inst_add
from lab2_proc.test import inst_mul
from lab2_proc.test import inst_addi
from lab2_proc.test import inst_lw
from lab2_proc.test import inst_sw
from lab2_proc.test import inst_bne
from lab2_proc.test import inst_jal
from lab2_proc.test import assembly_sequence

from lab4_sys.test  import inst_csr_mcore
from lab4_sys.test  import inst_rr_mcore
from lab4_sys.test  import inst_rimm_mcore
from lab4_sys.test  import inst_branch_mcore
from lab4_sys.test  import inst_jump_mcore

#-------------------------------------------------------------------------
# Tests
#-------------------------------------------------------------------------

@pytest.mark.usefixtures("cmdline_opts")
class Tests:

  @classmethod
  def setup_class( cls ):
    cls.SysType = MultiCoreSysFL

  #-----------------------------------------------------------------------
  # csr
  #-----------------------------------------------------------------------

  @pytest.mark.parametrize( "name,test", [
    asm_test( inst_csr.gen_basic_test      ),
    asm_test( inst_csr.gen_bypass_test     ),
    asm_test( inst_csr.gen_value_test      ),
    asm_test( inst_csr.gen_random_test     ),
  ])
  def test_csr( s, name, test ):
    run_test( s.SysType, test, cmdline_opts=s.__class__.cmdline_opts )

  def test_csr_delays( s ):
    run_test( s.SysType, inst_csr.gen_random_test, delays=True,
              cmdline_opts=s.__class__.cmdline_opts )

  #-----------------------------------------------------------------------
  # csr
  #-----------------------------------------------------------------------

  @pytest.mark.parametrize( "name,test", [
    asm_test( inst_csr_mcore.gen_proc2mngr_sinks_test ),
    asm_test( inst_csr_mcore.gen_proc2mngr_srcs_test ),
    asm_test( inst_csr_mcore.gen_proc2mngr_srcs_sinks_test ),
    asm_test( inst_csr_mcore.gen_core_stats_test ),
  ])
  def test_csr_mcore( s, name, test ):
    run_test( s.SysType, test, cmdline_opts=s.__class__.cmdline_opts )

  #-----------------------------------------------------------------------
  # add
  #-----------------------------------------------------------------------
  
  # Test cases from lab2
  @pytest.mark.parametrize( "name,test", [

    asm_test( inst_add.gen_basic_test     ),
    asm_test( inst_add.gen_dest_dep_test  ),
    asm_test( inst_add.gen_src0_dep_test  ),
    asm_test( inst_add.gen_src1_dep_test  ),
    asm_test( inst_add.gen_srcs_dep_test  ),
    asm_test( inst_add.gen_srcs_dest_test ),
    asm_test( inst_add.gen_value_test     ),
    asm_test( inst_add.gen_random_test    ),
  ])
  def test_add( s, name, test ):
    run_test( s.SysType, test, cmdline_opts=s.__class__.cmdline_opts )

  def test_add_delays( s ):
    run_test( s.SysType, inst_add.gen_random_test, delays=True,
              cmdline_opts=s.__class__.cmdline_opts )
  
  # Test cases from lab4
  @pytest.mark.parametrize( "name,test", [
    asm_test( inst_rr_mcore.add_gen_pos_pos_test ),
    asm_test( inst_rr_mcore.add_gen_pos_neg_test ),
    asm_test( inst_rr_mcore.add_gen_neg_neg_test ),
    asm_test( inst_rr_mcore.add_gen_0_pos_test ),
    asm_test( inst_rr_mcore.add_gen_random_test ),
  ])
  def test_add_mcore( s, name, test ):
    run_test( s.SysType, test, cmdline_opts=s.__class__.cmdline_opts )
  
  def test_add_rr_mcore_delays( s ):
    run_test( s.SysType, inst_rr_mcore.add_gen_random_test, delays=True,
              cmdline_opts=s.__class__.cmdline_opts )

  #-----------------------------------------------------------------------
  # mul
  #-----------------------------------------------------------------------
  
  # Test cases from lab2
  @pytest.mark.parametrize( "name,test", [
    asm_test( inst_mul.gen_basic_test     ),
    asm_test( inst_mul.gen_dest_dep_test  ),
    asm_test( inst_mul.gen_src0_dep_test  ),
    asm_test( inst_mul.gen_src1_dep_test  ),
    asm_test( inst_mul.gen_srcs_dep_test  ),
    asm_test( inst_mul.gen_srcs_dest_test ),
    asm_test( inst_mul.gen_value_test     ),
    asm_test( inst_mul.gen_random_test    ),
  ])
  def test_mul( s, name, test ):
    run_test( s.SysType, test, cmdline_opts=s.__class__.cmdline_opts )

  def test_mul_delays( s ):
    run_test( s.SysType, inst_mul.gen_random_test, delays=True,
            cmdline_opts=s.__class__.cmdline_opts )

  # Test cases from lab4
  @pytest.mark.parametrize( "name,test", [
    asm_test( inst_rr_mcore.mul_gen_pos_pos_test ),
    asm_test( inst_rr_mcore.mul_gen_pos_neg_test ),
    asm_test( inst_rr_mcore.mul_gen_neg_neg_test ),
    asm_test( inst_rr_mcore.mul_gen_0_pos_test ),
    asm_test( inst_rr_mcore.mul_gen_random_test ),
  ])
  def test_mul_mcore( s, name, test ):
    run_test( s.SysType, test, cmdline_opts=s.__class__.cmdline_opts )
  
  def test_mul_rr_mcore_delays( s ):
    run_test( s.SysType, inst_rr_mcore.mul_gen_random_test, delays=True,
              cmdline_opts=s.__class__.cmdline_opts )

  #-----------------------------------------------------------------------
  # addi
  #-----------------------------------------------------------------------

  # Test cases from lab2
  @pytest.mark.parametrize( "name,test", [
    asm_test( inst_addi.gen_basic_test     ) ,
    asm_test( inst_addi.gen_dest_dep_test  ),
    asm_test( inst_addi.gen_src_dep_test   ),
    asm_test( inst_addi.gen_src_dest_test  ),
    asm_test( inst_addi.gen_value_test     ),
    asm_test( inst_addi.gen_random_test    ),
  ])
  def test_addi( s, name, test ):
    run_test( s.SysType, test, cmdline_opts=s.__class__.cmdline_opts )

  def test_addi_delays( s ):
    run_test( s.SysType, inst_addi.gen_random_test, delays=True,
              cmdline_opts=s.__class__.cmdline_opts )

  # Test cases from lab4
  @pytest.mark.parametrize( "name,test", [
    asm_test( inst_rimm_mcore.addi_gen_pos_pos_test ),
    asm_test( inst_rimm_mcore.addi_gen_pos_neg_test ),
    asm_test( inst_rimm_mcore.addi_gen_neg_pos_test ),
    asm_test( inst_rimm_mcore.addi_gen_zero_imm_test ),
    asm_test( inst_rimm_mcore.addi_gen_random_test ),
  ])
  def test_addi_mcore( s, name, test ):
    run_test( s.SysType, test, cmdline_opts=s.__class__.cmdline_opts )
  
  def test_addi_rimm_mcore_delays( s ):
    run_test( s.SysType, inst_rimm_mcore.addi_gen_random_test, delays=True,
              cmdline_opts=s.__class__.cmdline_opts )

  #-----------------------------------------------------------------------
  # lw
  #-----------------------------------------------------------------------

  @pytest.mark.parametrize( "name,test", [
    asm_test( inst_lw.gen_basic_test     ) ,
    asm_test( inst_lw.gen_dest_dep_test  ) ,
    asm_test( inst_lw.gen_base_dep_test  ) ,
    asm_test( inst_lw.gen_srcs_dest_test ) ,
    asm_test( inst_lw.gen_addr_test      ) ,
    asm_test( inst_lw.gen_random_test    ) ,
  ])
  def test_lw( s, name, test ):
    run_test( s.SysType, test, cmdline_opts=s.__class__.cmdline_opts )

  def test_lw_delays( s ):
    run_test( s.SysType, inst_lw.gen_random_test, delays=True,
              cmdline_opts=s.__class__.cmdline_opts )

  #-----------------------------------------------------------------------
  # sw
  #-----------------------------------------------------------------------

  @pytest.mark.parametrize( "name,test", [
    asm_test( inst_sw.gen_basic_test     ),
    asm_test( inst_sw.gen_src_dep_test   ),
    asm_test( inst_sw.gen_base_dep_test  ),
    asm_test( inst_sw.gen_srcs_src_test  ),
    asm_test( inst_sw.gen_addr_test      ),
    asm_test( inst_sw.gen_random_test    ),
  ])
  def test_sw( s, name, test ):
    run_test( s.SysType, test, cmdline_opts=s.__class__.cmdline_opts )

  def test_sw_delays( s ):
    run_test( s.SysType, inst_sw.gen_random_test, delays=True,
              cmdline_opts=s.__class__.cmdline_opts )

  #-----------------------------------------------------------------------
  # bne
  #-----------------------------------------------------------------------
  
  # Test cases from lab2
  @pytest.mark.parametrize( "name,test", [
    asm_test( inst_bne.gen_basic_test             ),
    asm_test( inst_bne.gen_src0_dep_taken_test    ),
    asm_test( inst_bne.gen_src0_dep_nottaken_test ),
    asm_test( inst_bne.gen_src1_dep_taken_test    ),
    asm_test( inst_bne.gen_src1_dep_nottaken_test ),
    asm_test( inst_bne.gen_srcs_dep_taken_test    ),
    asm_test( inst_bne.gen_srcs_dep_nottaken_test ),
    asm_test( inst_bne.gen_src0_eq_src1_test      ),
    asm_test( inst_bne.gen_value_test             ),
    asm_test( inst_bne.gen_random_test            ),
  ])
  def test_bne( s, name, test ):
    run_test( s.SysType, test, cmdline_opts=s.__class__.cmdline_opts )

  def test_bne_delays( s ):
    run_test( s.SysType, inst_bne.gen_random_test, delays=True,
              cmdline_opts=s.__class__.cmdline_opts )

  # Test cases from lab4
  @pytest.mark.parametrize( "name,test", [
    asm_test( inst_branch_mcore.gen_basic_test ),
  ])
  def test_bne_mcore( s, name, test ):
    run_test( s.SysType, test, cmdline_opts=s.__class__.cmdline_opts )

  def test_bne_mcore_delays( s ):
    run_test( s.SysType, inst_branch_mcore.gen_basic_test, delays=True,
              cmdline_opts=s.__class__.cmdline_opts )

  #-----------------------------------------------------------------------
  # jal
  #-----------------------------------------------------------------------
  
  # Test cases from lab2
  @pytest.mark.parametrize( "name,test", [
    asm_test( inst_jal.gen_basic_test        ) ,
    asm_test( inst_jal.gen_basic_test2         ),
    asm_test( inst_jal.gen_multijump_test      ),
    asm_test( inst_jal.gen_multijump_5nops_test),
    asm_test( inst_jal.gen_multijump_4nops_test),
    asm_test( inst_jal.gen_multijump_3nops_test),
    asm_test( inst_jal.gen_multijump_2nops_test),
    asm_test( inst_jal.gen_multijump_1nops_test),
    asm_test( inst_jal.gen_multijump_0nops_test),
    asm_test( inst_jal.gen_back_to_back_test   ),
  ])

  def test_jal( s, name, test ):
    run_test( s.SysType, test, cmdline_opts=s.__class__.cmdline_opts )

  def test_jal_delays( s ):
    run_test( s.SysType, inst_jal.gen_back_to_back_test, delays=True,
              cmdline_opts=s.__class__.cmdline_opts )

  # Test cases from lab4
  @pytest.mark.parametrize( "name,test", [
    asm_test( inst_jump_mcore.gen_basic_test ),
  ])
  def test_jal_mcore( s, name, test ):
    run_test( s.SysType, test, cmdline_opts=s.__class__.cmdline_opts )
  
  def test_jal_mcore_delays( s ):
    run_test( s.SysType, inst_jump_mcore.gen_basic_test, delays=True,
              cmdline_opts=s.__class__.cmdline_opts )

  #-----------------------------------------------------------------------
  # Mixed Instruction Tests
  #-----------------------------------------------------------------------
  @pytest.mark.parametrize( "name,test", [
    asm_test( assembly_sequence.gen_Inst1_test ),
    # asm_test( assembly_sequence.gen_Inst2_test ), # will cause race condition
    asm_test( assembly_sequence.gen_Inst3_test ),
    asm_test( assembly_sequence.gen_Inst4_test ),
  ])
  def test_assembly_program( s, name, test ):
    run_test( s.SysType, test, cmdline_opts=s.__class__.cmdline_opts )

  def test_assembly_delays( s ):
    run_test( s.SysType, assembly_sequence.gen_Inst3_test, delays=True,
              cmdline_opts=s.__class__.cmdline_opts )