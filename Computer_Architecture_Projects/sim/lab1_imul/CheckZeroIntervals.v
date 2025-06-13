`include "vc/arithmetic.v"

module lab1_imul_CheckZeroIntervals (
  input [31:0] in_,
  output [31:0] out
);
  genvar i;
  generate
    for (i = 0; i < 32; i = i + 1) begin : zero_comparators
      vc_ZeroComparator #(i+1) subset (
        .in(in_[i:0]),
        .out(out[i])
      );
    end
  endgenerate
endmodule