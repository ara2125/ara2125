`include "lab1_imul/CheckZeroIntervals.v"
`include "lab1_imul/ExtractMax.v"

module lab1_imul_CalcShift(
  input logic [31:0] in_,
  output logic [5:0] out
);
    // be careful. output may not be valid when in_ should have no shift e.g. when lsb is 1
    logic [31:0] zero_interval_encoding;
    logic [5:0] shift_amount;
    lab1_imul_CheckZeroIntervals check (
    .in_(in_),
    .out(zero_interval_encoding)
    );
    lab1_imul_ExtractMax max_extractor (
    .in_(zero_interval_encoding),
    .out(shift_amount)
    );
    assign out = shift_amount + 1;
endmodule