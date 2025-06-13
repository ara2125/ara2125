//========================================================================
// Integer Multiplier Fixed-Latency Implementation
//========================================================================

`ifndef LAB1_IMUL_INT_MUL_BASE_V
`define LAB1_IMUL_INT_MUL_BASE_V

`include "vc/trace.v"
`include "vc/arithmetic.v"
`include "vc/muxes.v"
`include "vc/muxes.v"
`include "vc/regs.v"
`include "lab1_imul/CalcShift.v"


// Module including all adders, muxes, and registers. Outputs signals to communicate 
// between itself and the control unit.
module DataPath (
  input  logic        clk,
  input  logic        reset,
  input  logic [63:0] istream_msg,
  input  logic         istream_rdy,
  input  logic        a_mux_sel,
  input  logic        b_mux_sel,
  input  logic        result_mux_sel,
  input  logic        add_mux_sel,
  input  logic        result_en,
  input  logic        ostream_rdy,

  output logic        b_lsb,
  output logic [31:0] ostream_msg,
  output logic        calc_done
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
  

  // Shift calculation intermediary
  logic [5:0] shift;
 
  // Caluculate number of bits to shift a_reg and b_reg values.
  lab1_imul_CalcShift bit_shift (
  .in_(b_reg),
  .out(shift)
  );

  // Register instantiations.
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

  vc_LeftLogicalShifter #(32, 6) a_reg_shift_ (
    .in(a_reg),
    .shamt(shift),
    .out(a_shift)
  );
  
  // b_reg
  vc_Mux2 #(32) b_mux (
    .in0(istream_msg[31:0]),
    .in1(b_shift),
    .sel(b_mux_sel),
    .out(b_update)
  );

  vc_RightLogicalShifter #(32, 6) b_reg_shift_ (
    .in(b_reg),
    .shamt(shift),
    .out(b_shift)
  );

  // Before the result_reg
  vc_Mux2 #(32) result_mux (
    .in0(32'b0),
    .in1(add_mux_reg),
    .sel(result_mux_sel),
    .out(result_update)
  );

  // Post-adder mux
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

  // Assign b_lsb, ostream_msg, and calc_done.
  assign b_lsb = b_reg[0];
  assign ostream_msg = result_reg;
  assign calc_done = shift[5];

endmodule

// FSM State Transitions - dependent on signals from datapath and main module. 
module ControlUnit (
  input  logic clk,
  input  logic reset,
  input  logic istream_val,
  input  logic ostream_rdy,
  input  logic b_lsb,
  input  logic calc_done,

  output logic result_en,
  output logic a_mux_sel,
  output logic b_mux_sel,
  output logic result_mux_sel,
  output logic add_mux_sel,
  output logic istream_rdy,
  output logic ostream_val
);

// State data structure.
  typedef enum logic [1:0] {
    IDLE = 2'b00,
    CALC = 2'b01,
    DONE = 2'b10
  } State;

  State state, state_next;

  // Control signal table instantiation.
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

  // Assign control signals for each state.
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

  // Sequential - assigns next state.
  always_ff @(posedge clk or posedge reset) begin
    if (reset) begin
      state <= IDLE;
    end else begin
      state <= state_next;
    end
  end

  // Conditions for FSM progression.
  always_comb begin
    state_next = state;
    case (state)
      IDLE: begin
        if (istream_val) begin
          state_next = CALC;
        end
      end
      CALC: begin
        if (calc_done) begin
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

module lab1_imul_IntMulAlt
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
  logic b_lsb;
  logic result_en;
  logic a_mux_sel;
  logic b_mux_sel;
  logic result_mux_sel;
  logic add_mux_sel;
  logic calc_done;

  // State data structure.
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
    .b_lsb(b_lsb),
    .ostream_msg(ostream_msg),
    .calc_done(calc_done)
  );

  // Instantiate ControlUnit
  ControlUnit control_unit (
    .clk(clk),
    .reset(reset),
    .istream_val(istream_val),
    .ostream_rdy(ostream_rdy),
    .b_lsb(b_lsb),
    .calc_done(calc_done),
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
