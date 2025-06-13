#=========================================================================
# extra multicore memory tests
#=========================================================================

import random

# Fix the random seed so results are reproducible
random.seed(0xdeadbeef)

from pymtl3 import *
from lab2_proc.test.inst_utils import *
#-------------------------------------------------------------------------
# gen_basic_test
#-------------------------------------------------------------------------

# Test basic load/store operations
def gen_basic_test():
  return """
    csrr x1, mngr2proc < {0x00002000,0x00002004,0x00002008,0x0000200c}
    csrr x2, mngr2proc < {0x0a0b0c0d,0x1a1b1c1d,0x2a2b2c2d,0x3a3b3c3d}
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sw   x2, 0(x1)
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lw   x3, 0(x1)
    csrw proc2mngr, x3 > {0x0a0b0c0d,0x1a1b1c1d,0x2a2b2c2d,0x3a3b3c3d}

    .data
    .word 0x01020304
    .word 0x11121314
    .word 0x21222324
    .word 0x31323334
  """

#-------------------------------------------------------------------------
# gen_boundary_test
#-------------------------------------------------------------------------
# Test memory access at boundary conditions
def gen_boundary_test():
    return """
      # Test memory boundary access
      csrr x1, mngr2proc < {0x00002000,0x00002FFC}
      csrr x2, mngr2proc < {0xDEADBEEF,0xFEEDC0DE}
      nop
      nop
      sw   x2, 0(x1)
      lw   x3, 0(x1)
      csrw proc2mngr, x3 > {0xDEADBEEF,0xFEEDC0DE}
    
      sw   x2, 0(x1)
      lw   x3, 0(x1)
      csrw proc2mngr, x3 > {0xDEADBEEF,0xFEEDC0DE}

    .data
    .word 0x01020304
    .word 0x11121314
    .word 0x21222324
    .word 0x31323334
    """

#-------------------------------------------------------------------------
# gen_memory_isolation_test
#-------------------------------------------------------------------------
# Test if each core correctly accesses its dedicated memory region
def gen_memory_isolation_test():
  return """
    csrr x1, mngr2proc < {0x00002000,0x00002400,0x00002800,0x00002c00}
    csrr x2, mngr2proc < {0x11111111,0x22222222,0x33333333,0x44444444}
    
    # Each core writes to its own region
    sw   x2, 0(x1)
    nop
    nop
    
    # Verify reads
    lw   x3, 0(x1)
    csrw proc2mngr, x3 > {0x11111111,0x22222222,0x33333333,0x44444444}
  """

#=========================================================================
# Cache Characteristic Tests
#=========================================================================

#-------------------------------------------------------------------------
# gen_cacheline_test
#-------------------------------------------------------------------------
# Test different cores accessing different words in the same cache line
def gen_cacheline_test():
  return """
   
    csrr x1, mngr2proc < {0x00002000,0x00002004,0x00002008,0x0000200c}
    csrr x2, mngr2proc < {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
    
    # Each core writes to adjacent addresses
    sw   x2, 0(x1)
    lw   x3, 0(x1)
    csrw proc2mngr, x3 > {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
    nop
    nop
    nop
    nop
    nop
    sw   x2, 4(x1)
    lw   x3, 4(x1)
    csrw proc2mngr, x3 > {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
    nop
    nop
    nop
    nop
    nop
    sw   x2, 8(x1)
    lw   x3, 8(x1)
    csrw proc2mngr, x3 > {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
    nop
    nop
    nop
    nop
    nop
    sw   x2, 12(x1)
    lw   x3, 12(x1)
    csrw proc2mngr, x3 > {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
  """

#-------------------------------------------------------------------------
# gen_cacheline_stress_test
#-------------------------------------------------------------------------
# Test to fill up all cache lines in a 2-way set associative cache
def gen_cacheline_stress_test():
  return """
    # Initialize base addresses and test data
    csrr x1, mngr2proc < {0x00002000,0x00002400,0x00002800,0x00002c00}
    csrr x2, mngr2proc < {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
    csrr x3, mngr2proc < {0x11111111,0x22222222,0x33333333,0x44444444}
    
    # Fill first way of all sets (addresses with step 16)
    # Set 0: 0x2000 (set bits: 000)
    sw   x2, 0x000(x1)
    nop
    nop
    # Set 1: 0x2010 (set bits: 001)
    sw   x2, 0x010(x1)
    nop
    nop
    # Set 2: 0x2020 (set bits: 010)
    sw   x2, 0x020(x1)
    nop
    nop
    # Set 3: 0x2030 (set bits: 011)
    sw   x2, 0x030(x1)
    nop
    nop
    # Set 4: 0x2040 (set bits: 100)
    sw   x2, 0x040(x1)
    nop
    nop
    # Set 5: 0x2050 (set bits: 101)
    sw   x2, 0x050(x1)
    nop
    nop
    # Set 6: 0x2060 (set bits: 110)
    sw   x2, 0x060(x1)
    nop
    nop
    # Set 7: 0x2070 (set bits: 111)
    sw   x2, 0x070(x1)
    nop
    nop
    
    # Fill second way of all sets (addresses with offset 0x100)
    # Set 0: 0x2100
    sw   x3, 0x100(x1)
    nop
    nop
    # Set 1: 0x2110
    sw   x3, 0x110(x1)
    nop
    nop
    # Set 2: 0x2120
    sw   x3, 0x120(x1)
    nop
    nop
    # Set 3: 0x2130
    sw   x3, 0x130(x1)
    nop
    nop
    # Set 4: 0x2140
    sw   x3, 0x140(x1)
    nop
    nop
    # Set 5: 0x2150
    sw   x3, 0x150(x1)
    nop
    nop
    # Set 6: 0x2160
    sw   x3, 0x160(x1)
    nop
    nop
    # Set 7: 0x2170
    sw   x3, 0x170(x1)
    nop
    nop
    
    # Verify data from first way
    lw   x4, 0x000(x1)
    csrw proc2mngr, x4 > {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
    lw   x4, 0x010(x1)
    csrw proc2mngr, x4 > {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
    lw   x4, 0x020(x1)
    csrw proc2mngr, x4 > {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
    lw   x4, 0x030(x1)
    csrw proc2mngr, x4 > {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
    lw   x4, 0x040(x1)
    csrw proc2mngr, x4 > {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
    lw   x4, 0x050(x1)
    csrw proc2mngr, x4 > {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
    lw   x4, 0x060(x1)
    csrw proc2mngr, x4 > {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
    lw   x4, 0x070(x1)
    csrw proc2mngr, x4 > {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
    
    # Verify data from second way
    lw   x5, 0x100(x1)
    csrw proc2mngr, x5 > {0x11111111,0x22222222,0x33333333,0x44444444}
    lw   x5, 0x110(x1)
    csrw proc2mngr, x5 > {0x11111111,0x22222222,0x33333333,0x44444444}
    lw   x5, 0x120(x1)
    csrw proc2mngr, x5 > {0x11111111,0x22222222,0x33333333,0x44444444}
    lw   x5, 0x130(x1)
    csrw proc2mngr, x5 > {0x11111111,0x22222222,0x33333333,0x44444444}
    lw   x5, 0x140(x1)
    csrw proc2mngr, x5 > {0x11111111,0x22222222,0x33333333,0x44444444}
    lw   x5, 0x150(x1)
    csrw proc2mngr, x5 > {0x11111111,0x22222222,0x33333333,0x44444444}
    lw   x5, 0x160(x1)
    csrw proc2mngr, x5 > {0x11111111,0x22222222,0x33333333,0x44444444}
    lw   x5, 0x170(x1)
    csrw proc2mngr, x5 > {0x11111111,0x22222222,0x33333333,0x44444444}
  """

#-------------------------------------------------------------------------
# gen_capacity_miss_test
#-------------------------------------------------------------------------
# Test if the cache can handle capacity misses by filling up the entire cache
def gen_capacity_miss_test():
  return """
    # Initialize base addresses and test data
    csrr x1, mngr2proc < {0x00002000,0x00002400,0x00002800,0x00002c00}
    csrr x2, mngr2proc < {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
    csrr x3, mngr2proc < {0x11111111,0x22222222,0x33333333,0x44444444}
    csrr x4, mngr2proc < {0xabcdef01,0xbcdef012,0xcdef0123,0xdef01234}
    
    # Fill the entire cache (16 cache lines)
    # First way
    sw   x2, 0x000(x1)  # Set 0
    sw   x2, 0x010(x1)  # Set 1
    sw   x2, 0x020(x1)  # Set 2
    sw   x2, 0x030(x1)  # Set 3
    sw   x2, 0x040(x1)  # Set 4
    sw   x2, 0x050(x1)  # Set 5
    sw   x2, 0x060(x1)  # Set 6
    sw   x2, 0x070(x1)  # Set 7
    nop
    nop
    
    # Second way
    sw   x3, 0x100(x1)  # Set 0
    sw   x3, 0x110(x1)  # Set 1
    sw   x3, 0x120(x1)  # Set 2
    sw   x3, 0x130(x1)  # Set 3
    sw   x3, 0x140(x1)  # Set 4
    sw   x3, 0x150(x1)  # Set 5
    sw   x3, 0x160(x1)  # Set 6
    sw   x3, 0x170(x1)  # Set 7
    nop
    nop
    
    # This will evict data from the cache
    sw   x4, 0x200(x1)  # Maps to Set 0, replaces way 0 or 1
    sw   x4, 0x210(x1)  # Maps to Set 1, replaces way 0 or 1
    sw   x4, 0x220(x1)  # Maps to Set 2, replaces way 0 or 1
    sw   x4, 0x230(x1)  # Maps to Set 3, replaces way 0 or 1
    nop
    nop
    
    # Access the original data again
    # This should cause capacity misses as the data was replaced
    lw   x5, 0x000(x1)  # Should miss, data was replaced
    lw   x6, 0x100(x1)  # Should miss, data was replaced
    lw   x7, 0x010(x1)  # Should miss, data was replaced
    lw   x8, 0x110(x1)  # Should miss, data was replaced
    
    # Verify the data (should be original values if cache works correctly)
    csrw proc2mngr, x5 > {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
    csrw proc2mngr, x6 > {0x11111111,0x22222222,0x33333333,0x44444444}
    csrw proc2mngr, x7 > {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
    csrw proc2mngr, x8 > {0x11111111,0x22222222,0x33333333,0x44444444}
    
    # Verify the replacement data is still there
    lw   x9, 0x200(x1)
    lw   x10, 0x210(x1)
    lw   x11, 0x220(x1)
    lw   x12, 0x230(x1)
    csrw proc2mngr, x9 > {0xabcdef01,0xbcdef012,0xcdef0123,0xdef01234}
    csrw proc2mngr, x10 > {0xabcdef01,0xbcdef012,0xcdef0123,0xdef01234}
    csrw proc2mngr, x11 > {0xabcdef01,0xbcdef012,0xcdef0123,0xdef01234}
    csrw proc2mngr, x12 > {0xabcdef01,0xbcdef012,0xcdef0123,0xdef01234}
  """

#-------------------------------------------------------------------------
# gen_conflict_miss_test
#-------------------------------------------------------------------------
# Test conflict misses by accessing addresses that map to the same cache sets
# but have different tags
def gen_conflict_miss_test():
  return """
    # Initialize base addresses and test data
    csrr x1, mngr2proc < {0x00002000,0x00002400,0x00002800,0x00002c00}
    csrr x2, mngr2proc < {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
    csrr x3, mngr2proc < {0x11111111,0x22222222,0x33333333,0x44444444}
    csrr x4, mngr2proc < {0xabcdef01,0xbcdef012,0xcdef0123,0xdef01234}
    
    # First access to Set 0 addresses (compulsory misses)
    sw   x2, 0x000(x1)  # Maps to Set 0, Way 1 (compulsory miss)
    sw   x3, 0x100(x1)  # Maps to Set 0, Way 0 (compulsory miss)
    sw   x4, 0x200(x1)  # Maps to Set 0, Way 1 (compulsory miss)
    nop
    nop
    
    # Verify data is in cache (should be hits)
    lw   x5, 0x200(x1)  # Should be hit
    lw   x6, 0x100(x1)  # Should be hit
    
    # Access 0x000 again - this should be a conflict miss
    # because it was replaced by 0x200
    lw   x7, 0x000(x1)  
    csrw proc2mngr, x7 > {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
    
    # Similar pattern for Set 1
    sw   x2, 0x010(x1)  # Maps to Set 1, Way 1 (compulsory miss)
    sw   x3, 0x110(x1)  # Maps to Set 1, Way 0 (compulsory miss)
    sw   x4, 0x210(x1)  # Maps to Set 1, Way 1 (compulsory miss)
    nop
    nop
    
    # Verify recent data is in cache
    lw   x8, 0x210(x1)  # Should be hit
    lw   x9, 0x110(x1)  # Should be hit
    
    # Access replaced data - should be conflict miss
    lw   x10, 0x010(x1) # This is a true conflict miss!
    csrw proc2mngr, x10 > {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
  """

#=========================================================================
# Multi-Core Access Pattern Tests
#=========================================================================

#-------------------------------------------------------------------------
# gen_memory_contention_test
#-------------------------------------------------------------------------
# Test memory access patterns with contention between multiple cores
def gen_memory_contention_test():
    return """
      csrr x1, mngr2proc < {0x00002000,0x00002000,0x00002000,0x00002000}
      csrr x2, mngr2proc < {0x12345678,0x12345678,0x12345678,0x12345678}

      # Core 0 writes
      sw   x2, 0(x1)
      nop
      nop
      lw   x3, 0(x1)
      csrw proc2mngr, x3 > {0x12345678,0x12345678,0x12345678,0x12345678}
      nop
      nop
      nop
      nop
      addi x2, x2, 1
      sw   x2, 0(x1)
      nop
      nop

      # Core 3 reads
      lw   x3, 0(x1)
      csrw proc2mngr, x3 > {0x12345679,0x12345679,0x12345679,0x12345679}
    """

#-------------------------------------------------------------------------
# gen_interleaved_access_test
#-------------------------------------------------------------------------
# Test interleaved memory access patterns between cores
def gen_interleaved_access_test():
    return """
      # Interleaved read/write pattern
      csrr x1, mngr2proc < {0x00002000,0x00002004,0x00002008,0x0000200C}
      csrr x2, mngr2proc < {0x0A0B0C0D,0x1A1B1C1D,0x2A2B2C2D,0x3A3B3C3D}

      # Core 0 writes
      sw   x2, 0(x1)
      nop
      nop

      # Core 1 reads
      lw   x3, 0(x1)
      csrw proc2mngr, x3 > {0x0A0B0C0D,0x1A1B1C1D,0x2A2B2C2D,0x3A3B3C3D}

      # Core 2 writes
      sw   x2, 4(x1)
      nop
      nop

      # Core 3 reads
      lw   x3, 4(x1)
      csrw proc2mngr, x3 > {0x0A0B0C0D,0x1A1B1C1D,0x2A2B2C2D,0x3A3B3C3D}
    """

#-------------------------------------------------------------------------
# gen_interleaved_rw_test
#-------------------------------------------------------------------------
# Test interleaved read/write pattern to ensure memory coherency
def gen_interleaved_rw_test():
  return """
    # Test interleaved read/write pattern
    csrr x1, mngr2proc < {0x00002000,0x00002400,0x00002800,0x00002c00}
    csrr x2, mngr2proc < {0x55555555,0x66666666,0x77777777,0x88888888}
    
    # Interleaved read/write operations
    sw   x2, 0(x1)
    lw   x3, 0(x1)
    csrw proc2mngr, x3 > {0x55555555,0x66666666,0x77777777,0x88888888}
    sw   x2, 4(x1)
    lw   x4, 4(x1)
    csrw proc2mngr, x4 > {0x55555555,0x66666666,0x77777777,0x88888888}
    
  """

#-------------------------------------------------------------------------
# gen_parallel_mem_test
#-------------------------------------------------------------------------
# Test parallel memory operations across cores
def gen_parallel_mem_test():
  return """
    # Initialize data for parallel operations
    csrr x1, mngr2proc < {0x00002000,0x00002400,0x00002800,0x00002c00}
    csrr x2, mngr2proc < {0xaaaaaaaa,0xbbbbbbbb,0xcccccccc,0xdddddddd}
    csrr x3, mngr2proc < {0x11111111,0x22222222,0x33333333,0x44444444}
    csrr x4, mngr2proc < {0x55555555,0x66666666,0x77777777,0x88888888}
    
    # Parallel writes to different regions
    sw   x2, 0(x1)      # Core 0 region
    nop
    nop
    nop
    nop
    sw   x2, 0x100(x1)  # Core 1 region
    nop
    nop
    nop
    nop
    sw   x2, 0x200(x1)  # Core 2 region
    nop
    nop
    sw   x2, 0x300(x1)  # Core 3 region
    nop
    nop
    
    # Parallel reads from different regions
    lw   x5, 0(x1)
    nop
    nop
    nop
    nop 
    lw   x6, 0x300(x1)
    nop
    nop
    nop
    nop
    lw   x7, 0x200(x1)
    nop
    nop
    lw   x8, 0x300(x1)
    nop
    nop
    
    # # Verify reads
    csrw proc2mngr, x5 > {0xaaaaaaaa,0xbbbbbbbb,0xcccccccc,0xdddddddd}
    csrw proc2mngr, x6 > {0xaaaaaaaa,0xbbbbbbbb,0xcccccccc,0xdddddddd}
    csrw proc2mngr, x7 > {0xaaaaaaaa,0xbbbbbbbb,0xcccccccc,0xdddddddd}
    csrw proc2mngr, x8 > {0xaaaaaaaa,0xbbbbbbbb,0xcccccccc,0xdddddddd}
    
    # Write-modify-write pattern in parallel
    add  x9, x5, x3     # Modify data
    add  x10, x6, x3
    add  x11, x7, x3
    add  x12, x8, x3
    
    # Write modified data to the next address
    sw   x9, 4(x1)
    sw   x10, 0x104(x1)
    sw   x11, 0x204(x1)
    sw   x12, 0x304(x1)
    nop
    nop
    
    # Verify modified data
    lw   x13, 4(x1)
    lw   x14, 0x104(x1)
    lw   x15, 0x204(x1)
    lw   x16, 0x304(x1)
    
    csrw proc2mngr, x13 > {0xbbbbbbbb,0xdddddddd,0xffffffff,0x22222221}
    csrw proc2mngr, x14 > {0xbbbbbbbb,0xdddddddd,0xffffffff,0x22222221}
    csrw proc2mngr, x15 > {0xbbbbbbbb,0xdddddddd,0xffffffff,0x22222221}
    csrw proc2mngr, x16 > {0xbbbbbbbb,0xdddddddd,0xffffffff,0x22222221}
  """

#-------------------------------------------------------------------------
# gen_ping_pong_test
#-------------------------------------------------------------------------
# Test alternating read/write between cores using different memory regions
def gen_ping_pong_test():
  return """
    # Initialize registers with different patterns
    csrr x1, mngr2proc < {0x00002000,0x00002400,0x00002800,0x00002c00}
    csrr x2, mngr2proc < {0xa5a5a5a5,0xb5b5b5b5,0xc5c5c5c5,0xd5d5d5d5}
    csrr x3, mngr2proc < {0x5a5a5a5a,0x5b5b5b5b,0x5c5c5c5c,0x5d5d5d5d}
    
    # Core 0 writes pattern 1
    sw   x2, 0(x1)
    nop
    nop
    
    # Core 1 reads pattern 1 and writes pattern 2
    lw   x4, 0(x1)
    csrw proc2mngr, x4 > {0xa5a5a5a5,0xb5b5b5b5,0xc5c5c5c5,0xd5d5d5d5}
    sw   x3, 4(x1)
    nop
    nop
    
    # Core 2 reads pattern 2 and writes pattern 1
    lw   x5, 4(x1)
    csrw proc2mngr, x5 > {0x5a5a5a5a,0x5b5b5b5b,0x5c5c5c5c,0x5d5d5d5d}
    sw   x2, 8(x1)
    nop
    nop
    
    # Core 3 reads pattern 1
    lw   x6, 8(x1)
    csrw proc2mngr, x6 > {0xa5a5a5a5,0xb5b5b5b5,0xc5c5c5c5,0xd5d5d5d5}
  """

#-------------------------------------------------------------------------
# gen_memory_butterfly_test
#-------------------------------------------------------------------------
# Test butterfly-pattern memory access (cross-core communication pattern)
def gen_memory_butterfly_test():
  return """
    # Initialize data for butterfly pattern
    csrr x1, mngr2proc < {0x00002000,0x00002400,0x00002800,0x00002c00}
    csrr x2, mngr2proc < {0x12345678,0x23456789,0x3456789a,0x456789ab}
    csrr x3, mngr2proc < {0xabcdef01,0xbcdef012,0xcdef0123,0xdef01234}
    
    # Stage 1: Write initial data
    sw   x2, 0(x1)      # Core 0 -> 0
    sw   x2, 0x100(x1)  # Core 1 -> 1
    sw   x2, 0x200(x1)  # Core 2 -> 2
    sw   x2, 0x300(x1)  # Core 3 -> 3
    nop
    nop
    
    # Stage 2: Cross pattern reads
    lw   x4, 0x300(x1)  # Core 0 <- 3
    lw   x5, 0(x1)      # Core 1 <- 0
    lw   x6, 0x100(x1)  # Core 2 <- 1
    lw   x7, 0x200(x1)  # Core 3 <- 2
    
    # Stage 3: Write to crossed locations
    sw   x3, 0x200(x1)  # Core 0 -> 2
    sw   x3, 0x300(x1)  # Core 1 -> 3
    sw   x3, 0(x1)      # Core 2 -> 0
    sw   x3, 0x100(x1)  # Core 3 -> 1
    nop
    nop
    
    # Verify final state
    lw   x8, 0(x1)
    lw   x9, 0x200(x1)
    lw   x10, 0x300(x1)
    lw   x11, 0x100(x1)
    
    csrw proc2mngr, x8  > {0xabcdef01,0xbcdef012,0xcdef0123,0xdef01234}
    csrw proc2mngr, x9  > {0xabcdef01,0xbcdef012,0xcdef0123,0xdef01234}
    csrw proc2mngr, x10 > {0xabcdef01,0xbcdef012,0xcdef0123,0xdef01234}
    csrw proc2mngr, x11 > {0xabcdef01,0xbcdef012,0xcdef0123,0xdef01234}
  """

#=========================================================================
# Memory Access Pattern Tests
#=========================================================================

#-------------------------------------------------------------------------
# gen_burst_access_test
#-------------------------------------------------------------------------
# Test rapid consecutive memory accesses
def gen_burst_access_test():
  return """
    csrr x1, mngr2proc < {0x00002000,0x00002400,0x00002800,0x00002c00}
    csrr x2, mngr2proc < {0xaaaaaaaa,0xbbbbbbbb,0xcccccccc,0xdddddddd}
    
    # Consecutive writes
    sw   x2, 0(x1)
    lw   x3, 0(x1)
    csrw proc2mngr, x3 > {0xaaaaaaaa,0xbbbbbbbb,0xcccccccc,0xdddddddd}
    sw   x2, 4(x1)
    lw   x4, 4(x1)
    csrw proc2mngr, x4 > {0xaaaaaaaa,0xbbbbbbbb,0xcccccccc,0xdddddddd}
    sw   x2, 8(x1)
    lw   x5, 8(x1)
    csrw proc2mngr, x5 > {0xaaaaaaaa,0xbbbbbbbb,0xcccccccc,0xdddddddd}
    sw   x2, 12(x1)
    lw   x6, 12(x1)
    csrw proc2mngr, x6 > {0xaaaaaaaa,0xbbbbbbbb,0xcccccccc,0xdddddddd} 
  """

#-------------------------------------------------------------------------
# gen_stride_access_test
#-------------------------------------------------------------------------
# Test memory access with different strides to stress cache behavior
def gen_stride_access_test():
  return """
    # Initialize base addresses and test data
    csrr x1, mngr2proc < {0x00002000,0x00002400,0x00002800,0x00002c00}
    csrr x2, mngr2proc < {0xf0f0f0f0,0xe1e1e1e1,0xd2d2d2d2,0xc3c3c3c3}
    
    # Write with stride 16 (4 words)
    sw   x2, 0(x1)
    sw   x2, 16(x1)
    sw   x2, 32(x1)
    sw   x2, 48(x1)
    nop
    nop
    
    # Read back with different stride (8 bytes)
    lw   x3, 0(x1)
    csrw proc2mngr, x3 > {0xf0f0f0f0,0xe1e1e1e1,0xd2d2d2d2,0xc3c3c3c3}
    lw   x3, 16(x1)
    csrw proc2mngr, x3 > {0xf0f0f0f0,0xe1e1e1e1,0xd2d2d2d2,0xc3c3c3c3}
    lw   x3, 32(x1)
    csrw proc2mngr, x3 > {0xf0f0f0f0,0xe1e1e1e1,0xd2d2d2d2,0xc3c3c3c3}
    lw   x3, 48(x1)
    csrw proc2mngr, x3 > {0xf0f0f0f0,0xe1e1e1e1,0xd2d2d2d2,0xc3c3c3c3}
  """

#-------------------------------------------------------------------------
# gen_memory_sweep_test
#-------------------------------------------------------------------------
# Test sequential access across entire memory space of each core
def gen_memory_sweep_test():
  return """
    # Initialize test data
    csrr x1, mngr2proc < {0x00002000,0x00002400,0x00002800,0x00002c00}
    csrr x2, mngr2proc < {0x12345678,0x23456789,0x3456789a,0x456789ab}
    csrr x3, mngr2proc < {0x89abcdef,0x9abcdef0,0xabcdef01,0xbcdef012}
    
    # Write ascending pattern
    sw   x2, 0(x1)
    sw   x2, 4(x1)
    sw   x2, 8(x1)
    sw   x2, 12(x1)
    nop
    nop
    
    # Write descending pattern
    sw   x3, 1020(x1)  # 0x3FC
    sw   x3, 1016(x1)  # 0x3F8
    sw   x3, 1012(x1)  # 0x3F4
    sw   x3, 1008(x1)  # 0x3F0
    nop
    nop
    
    # Verify ascending pattern
    lw   x4, 0(x1)
    csrw proc2mngr, x4 > {0x12345678,0x23456789,0x3456789a,0x456789ab}
    lw   x4, 12(x1)
    csrw proc2mngr, x4 > {0x12345678,0x23456789,0x3456789a,0x456789ab}
    
    # Verify descending pattern
    lw   x5, 1020(x1)
    csrw proc2mngr, x5 > {0x89abcdef,0x9abcdef0,0xabcdef01,0xbcdef012}
    lw   x5, 1008(x1)
    csrw proc2mngr, x5 > {0x89abcdef,0x9abcdef0,0xabcdef01,0xbcdef012}
  """

#-------------------------------------------------------------------------
# gen_memory_walk_test
#-------------------------------------------------------------------------
# Test walking through memory with different patterns
def gen_memory_walk_test():
  return """
    # Initialize test data
    csrr x1, mngr2proc < {0x00002000,0x00002400,0x00002800,0x00002c00}
    csrr x2, mngr2proc < {0x01234567,0x89abcdef,0xfedbca98,0x76543210}
    
    # Forward walk with increasing stride
    sw   x2, 0(x1)    # stride 1
    sw   x2, 4(x1)
    nop
    nop
    sw   x2, 8(x1)    # stride 2
    sw   x2, 16(x1)
    nop
    nop
    sw   x2, 24(x1)   # stride 3
    sw   x2, 36(x1)
    nop
    nop
    
    # Backward walk with decreasing stride
    sw   x2, 1020(x1) # stride 3
    sw   x2, 1008(x1)
    nop
    nop
    sw   x2, 1000(x1) # stride 2
    sw   x2, 992(x1)
    nop
    nop
    sw   x2, 988(x1)  # stride 1
    sw   x2, 984(x1)
    
    # Verify forward pattern
    lw   x3, 0(x1)
    csrw proc2mngr, x3 > {0x01234567,0x89abcdef,0xfedbca98,0x76543210}
    lw   x3, 16(x1)
    csrw proc2mngr, x3 > {0x01234567,0x89abcdef,0xfedbca98,0x76543210}
    lw   x3, 36(x1)
    csrw proc2mngr, x3 > {0x01234567,0x89abcdef,0xfedbca98,0x76543210}
    
    # Verify backward pattern
    lw   x4, 1020(x1)
    csrw proc2mngr, x4 > {0x01234567,0x89abcdef,0xfedbca98,0x76543210}
    lw   x4, 1000(x1)
    csrw proc2mngr, x4 > {0x01234567,0x89abcdef,0xfedbca98,0x76543210}
    lw   x4, 984(x1)
    csrw proc2mngr, x4 > {0x01234567,0x89abcdef,0xfedbca98,0x76543210}
  """

#-------------------------------------------------------------------------
# gen_mixed_pattern_test
#-------------------------------------------------------------------------
# Test complex patterns of reads and writes with multiple registers
def gen_mixed_pattern_test():
  return """
    # Initialize multiple registers with different patterns
    csrr x1, mngr2proc < {0x00002000,0x00002400,0x00002800,0x00002c00}
    csrr x2, mngr2proc < {0xf1f1f1f1,0xf2f2f2f2,0xf3f3f3f3,0xf4f4f4f4}
    csrr x3, mngr2proc < {0xe1e1e1e1,0xe2e2e2e2,0xe3e3e3e3,0xe4e4e4e4}
    csrr x4, mngr2proc < {0xd1d1d1d1,0xd2d2d2d2,0xd3d3d3d3,0xd4d4d4d4}
    csrr x5, mngr2proc < {0xc1c1c1c1,0xc2c2c2c2,0xc3c3c3c3,0xc4c4c4c4}
    
    # Complex write pattern
    sw   x2, 0(x1)    # Core 0 writes
    nop
    nop
    sw   x3, 16(x1)   # Core 0 writes with stride
    nop
    nop
    sw   x4, 4(x1)    # Core 1 writes
    nop
    nop
    sw   x5, 20(x1)   # Core 1 writes with stride
    nop
    nop
    
    # Interleaved reads
    lw   x6, 0(x1)
    csrw proc2mngr, x6 > {0xf1f1f1f1,0xf2f2f2f2,0xf3f3f3f3,0xf4f4f4f4}
    nop
    nop
    lw   x7, 16(x1)
    csrw proc2mngr, x7 > {0xe1e1e1e1,0xe2e2e2e2,0xe3e3e3e3,0xe4e4e4e4}
    nop
    nop
    lw   x8, 4(x1)
    csrw proc2mngr, x8 > {0xd1d1d1d1,0xd2d2d2d2,0xd3d3d3d3,0xd4d4d4d4}
    nop
    nop
    lw   x9, 20(x1)
    csrw proc2mngr, x9 > {0xc1c1c1c1,0xc2c2c2c2,0xc3c3c3c3,0xc4c4c4c4}
    # add the values from different locations and store the result
    add  x10, x6, x7  
    sw   x10, 8(x1)
    lw   x11, 8(x1)
    csrw proc2mngr, x11 > {0xd3d3d3d2,0xd5d5d5d4,0xd7d7d7d6,0xd9d9d9d8}
  """

#=========================================================================
# Stress Tests
#=========================================================================

#-------------------------------------------------------------------------
# gen_multi_register_test
#-------------------------------------------------------------------------
# Test using multiple registers to store different values and access memory
def gen_multi_register_test():
  return """
    # Load multiple values into different registers
    csrr x1, mngr2proc < {0x00002000,0x00002400,0x00002800,0x00002c00}
    csrr x2, mngr2proc < {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
    csrr x3, mngr2proc < {0x11111111,0x22222222,0x33333333,0x44444444}
    csrr x4, mngr2proc < {0xaaaaaaaa,0xbbbbbbbb,0xcccccccc,0xdddddddd}
    
    # Write different values to different addresses
    sw   x2, 0(x1)
    sw   x3, 4(x1)
    sw   x4, 8(x1)
    nop
    nop
    
    # Read back and verify
    lw   x5, 0(x1)
    csrw proc2mngr, x5 > {0xdeadbeef,0xcafebabe,0xbaadf00d,0x8badf00d}
    lw   x6, 4(x1)
    csrw proc2mngr, x6 > {0x11111111,0x22222222,0x33333333,0x44444444}
    lw   x7, 8(x1)
    csrw proc2mngr, x7 > {0xaaaaaaaa,0xbbbbbbbb,0xcccccccc,0xdddddddd}
  """

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------
# Test random memory access patterns to stress test the system
def gen_random_test():
  # Generate random test data for each core
  gen_num = 128  # 32 data entries per core
  data = []
  for i in range(gen_num * 4):  # Total data for 4 cores
    data.append(random.randint(0,0xffffffff))
  
  # Generate assembly code
  asm_code = []
  for i in range(20):  # Generate 20 test groups
    # Generate random indices for each core
    a = [
        random.randint(0, gen_num-1),          # Core 0: 0-127
        random.randint(gen_num, 2*gen_num-1),  # Core 1: 128-255
        random.randint(2*gen_num, 3*gen_num-1),# Core 2: 256-383
        random.randint(3*gen_num, 4*gen_num-1) # Core 3: 384-511
    ]
    b = [
        random.randint(0, gen_num-1),          # Core 0: 0-127
        random.randint(gen_num, 2*gen_num-1),  # Core 1: 128-255
        random.randint(2*gen_num, 3*gen_num-1),# Core 2: 256-383
        random.randint(3*gen_num, 4*gen_num-1) # Core 3: 384-511
    ]

    # Generate test for each core
    for j in range(4):
        base   = 0x2000 + (j * 0x400) + (4*b[j])  # Each core has its own base region
        offset = 4*(a[j] - b[j])
        result = data[a[j]]
        
        asm_code.append(gen_st_value_test(
            "sw",
            offset,
            base,
            result
        ))
  
  return asm_code


