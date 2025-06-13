//========================================================================
// Integer Multiplier Fixed-Latency Implementation
//========================================================================

`ifndef LAB1_IMUL_INT_MUL_BASE_V
`define LAB1_IMUL_INT_MUL_BASE_V

`include "vc/trace.v"
`include "vc/arithmetic.v"
`include "vc/muxes.v"
`include "vc/counters.v"
`include "vc/muxes.v"
`include "vc/regs.v"


// Contains all the muxing, adders, registers, etc.
module DataPath (
  input  logic        clk,
  input  logic        reset,
  input  logic [63:0] istream_msg,
  input logic         istream_rdy,
  input  logic        a_mux_sel,
  input  logic        b_mux_sel,
  input  logic        result_mux_sel,
  input  logic        add_mux_sel,
  input  logic        result_en,
  input  logic        ostream_rdy,

  output logic        count_is_max,
  output logic        b_lsb,
  output logic [31:0] ostream_msg
);
  // a_reg inputs
  logic [31:0] a_reg;
  logic [31:0] a_shift;
  logic [31:0] a_update;
  // b_reg inputs
  logic [31:0] b_reg;
  logic [31:0] b_shift;
  logic [31:0] b_update;

  // result_reg inputs
  logic [31:0] result_reg;
  logic [31:0] result_update;
  logic [31:0] sum_reg; // after the adder
  logic [31:0] add_mux_reg; // after the add mux
  
  // Counter
  logic [4:0] counter;
  logic       count_is_zero;

  // Counts number of cycles.
  vc_BasicCounter #(6, 0, 32) counter_ (
    .clk(clk),
    .reset(reset),
    .clear(istream_rdy),
    .increment(1'b1),
    .decrement(1'b0),
    .count(counter),
    .count_is_zero(count_is_zero),
    .count_is_max(count_is_max)
  );

  vc_ResetReg #(32, 0) a_reg_ (
    .clk(clk),
    .reset(reset),
    .d(a_update),
    .q(a_reg)
  );

  vc_ResetReg #(32, 0) b_reg_ (
    .clk(clk),
    .reset(reset),
    .d(b_update),
    .q(b_reg)
  );

  vc_EnReg #(32) result_reg_ (
    .clk(clk),
    .reset(reset),
    .d(result_update),
    .q(result_reg),
    .en(result_en)
  );

  // Combinational logic
  // a_reg
  vc_Mux2 #(32) a_mux (
    .in0(istream_msg[63:32]),
    .in1(a_shift),
    .sel(a_mux_sel),
    .out(a_update)
  );

  vc_LeftLogicalShifter #(32, 1) a_reg_shift_ (
    .in(a_reg),
    .shamt(1'b1),
    .out(a_shift)
  );
  
  // b_reg
  vc_Mux2 #(32) b_mux (
    .in0(istream_msg[31:0]),
    .in1(b_shift),
    .sel(b_mux_sel),
    .out(b_update)
  );

  vc_RightLogicalShifter #(32, 1) b_reg_shift_ (
    .in(b_reg),
    .shamt(1'b1),
    .out(b_shift)
  );

  vc_Mux2 #(32) result_mux (
    .in0(32'b0),
    .in1(add_mux_reg),
    .sel(result_mux_sel),
    .out(result_update)
  );

  // post-adder mux
  vc_Mux2 #(32) add_mux (
    .in0(result_reg),
    .in1(sum_reg),
    .sel(add_mux_sel),
    .out(add_mux_reg)
  );

  // Addition
  vc_SimpleAdder #(32) adder (
    .in0(a_reg),
    .in1(result_reg),
    .out(sum_reg)
  );

  // Assign b_lsb and ostream_msg
  assign b_lsb = b_reg[0];
  assign ostream_msg = result_reg;

endmodule

// FSM State Transitions
module ControlUnit (
  input  logic clk,
  input  logic reset,
  input  logic istream_val,
  input  logic count_is_max,
  input  logic ostream_rdy,
  input  logic b_lsb,

  output logic result_en,
  output logic a_mux_sel,
  output logic b_mux_sel,
  output logic result_mux_sel,
  output logic add_mux_sel,
  output logic istream_rdy,
  output logic ostream_val
);

  typedef enum logic [1:0] {
    IDLE = 2'b00,
    CALC = 2'b01,
    DONE = 2'b10
  } State;

  State state, state_next;

  function void cs(
    input logic cs_result_en,
    input logic cs_a_mux_sel,
    input logic cs_b_mux_sel,
    input logic cs_result_mux_sel,
    input logic cs_add_mux_sel,
    input logic cs_istream_rdy,
    input logic cs_ostream_val
  );
    result_en = cs_result_en;
    a_mux_sel = cs_a_mux_sel;
    b_mux_sel = cs_b_mux_sel;
    result_mux_sel = cs_result_mux_sel;
    add_mux_sel = cs_add_mux_sel;
    istream_rdy = cs_istream_rdy;
    ostream_val = cs_ostream_val;
  endfunction

  always_comb begin 
    cs(1, 0, 0, 1, 0, 0, 0);
    case (state)
      IDLE: cs(1, 0, 0, 1, 0, 1, 0);
      CALC: cs(1, 1, 1, 1, b_lsb, 0, 0);
      DONE: if (ostream_rdy) cs(1, 1, 1, 0, b_lsb, 0, 1);
            else cs(1, 1, 1, 1, b_lsb, 0, 1);
      default: ;
    endcase
  end

  always_ff @(posedge clk or posedge reset) begin
    if (reset) begin
      state <= IDLE;
    end else begin
      state <= state_next;
    end
  end

  always_comb begin
    state_next = state;
    case (state)
      IDLE: begin
        if (istream_val) begin
          state_next = CALC;
        end
      end
      CALC: begin
        if (count_is_max) begin
          state_next = DONE;
        end
      end
      DONE: begin
        if (ostream_rdy) begin
          state_next = IDLE;
        end
      end
      default: ;
    endcase
  end

endmodule



//========================================================================
// Integer Multiplier Fixed-Latency Implementation
//========================================================================

module lab1_imul_IntMulBase
(
  input  logic        clk,
  input  logic        reset,

  input  logic        istream_val,
  output logic        istream_rdy,
  input  logic [63:0] istream_msg,

  output logic        ostream_val,
  input  logic        ostream_rdy,
  output logic [31:0] ostream_msg

);

  // Internal signals for connecting DataPath and ControlUnit
  logic count_is_max;
  logic b_lsb;
  logic result_en;
  logic a_mux_sel;
  logic b_mux_sel;
  logic result_mux_sel;
  logic add_mux_sel;

  typedef enum logic [1:0] {
    IDLE = 2'b00,
    CALC = 2'b01,
    DONE = 2'b10
  } State;

  // Instantiate DataPath
  DataPath datapath (
    .clk(clk),
    .reset(reset),
    .istream_msg(istream_msg),
    .istream_rdy(istream_rdy),
    .a_mux_sel(a_mux_sel),
    .b_mux_sel(b_mux_sel),
    .result_mux_sel(result_mux_sel),
    .add_mux_sel(add_mux_sel),
    .result_en(result_en),
    .ostream_rdy(ostream_rdy),
    .count_is_max(count_is_max),
    .b_lsb(b_lsb),
    .ostream_msg(ostream_msg)
  );

  // Instantiate ControlUnit
  ControlUnit control_unit (
    .clk(clk),
    .reset(reset),
    .istream_val(istream_val),
    .count_is_max(count_is_max),
    .ostream_rdy(ostream_rdy),
    .b_lsb(b_lsb),
    .result_en(result_en),
    .a_mux_sel(a_mux_sel),
    .b_mux_sel(b_mux_sel),
    .result_mux_sel(result_mux_sel),
    .add_mux_sel(add_mux_sel),
    .istream_rdy(istream_rdy),
    .ostream_val(ostream_val)
  );

  //----------------------------------------------------------------------
  // Line Tracing
  //----------------------------------------------------------------------

  `ifndef SYNTHESIS

  logic [`VC_TRACE_NBITS-1:0] str;
  `VC_TRACE_BEGIN
  begin

    $sformat( str, "%x", istream_msg );
    vc_trace.append_val_rdy_str( trace_str, istream_val, istream_rdy, str );

    vc_trace.append_str( trace_str, "(" );
    $sformat( str, "%x", control_unit.state);
    vc_trace.append_str( trace_str, str);
    vc_trace.append_str( trace_str, ")" );

    $sformat( str, "%x", ostream_msg );
    vc_trace.append_val_rdy_str( trace_str, ostream_val, ostream_rdy, str );

  end
  `VC_TRACE_END

  `endif /* SYNTHESIS */

endmodule

`endif /* LAB1_IMUL_INT_MUL_BASE_V */
