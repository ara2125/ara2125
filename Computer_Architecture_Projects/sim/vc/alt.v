module ExtractMax (
  input [31:0] zero_interval_encoding,
  output reg [5:0] max
);
  genvar i;
  generate
    for (i = 0; i < 32; i = i + 1) begin : find_max
      always_comb begin
        if (zero_interval_encoding[31 - i]) 
          max = 31 - i;
      end
    end
  endgenerate
endmodule

module CalcShift(
  input [31:0] istream_msg,
  output [5:0] max
);
  logic [31:0] zero_interval_encoding;
  CheckZeroIntervals check (
    .istream_msg(istream_msg),
    .zero_interval_encoding(zero_interval_encoding)
  );
  ExtractMax max_extractor (
    .zero_interval_encoding(zero_interval_encoding),
    .max(max)
  );
endmodule