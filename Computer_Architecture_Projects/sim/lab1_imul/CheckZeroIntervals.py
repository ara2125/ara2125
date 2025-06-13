from pymtl3 import *
from pymtl3.passes.backends.verilog import *
from pymtl3.stdlib.stream.ifcs import IStreamIfc, OStreamIfc

class CheckZeroIntervals( VerilogPlaceholder, Component ):
  def construct( s ):
    s.in_ = InPort ( 32 )
    s.out = OutPort( 32 )

    s.set_metadata( VerilogPlaceholderPass.has_clk, False )
    s.set_metadata( VerilogPlaceholderPass.has_reset, False )
