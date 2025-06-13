//========================================================================
// Ring Network
//========================================================================

`ifndef LAB4_SYS_NET_V
`define LAB4_SYS_NET_V

`include "vc/net-msgs.v"
`include "vc/trace.v"
`include "vc/queues.v"

`include "lab4_sys/NetRouter.v"

module lab4_sys_Net
#(
  parameter p_msg_nbits = 44
)
(
  input  logic                   clk,
  input  logic                   reset,

  // Input streams

  input  logic [p_msg_nbits-1:0] istream_msg [4],
  input  logic                   istream_val [4],
  output logic                   istream_rdy [4],

  // Output streams

  output logic [p_msg_nbits-1:0] ostream_msg [4],
  output logic                   ostream_val [4],
  input  logic                   ostream_rdy [4]
);

  // Clockwise and couter-clockwise channels

  logic [p_msg_nbits-1:0] channels_cw_msg  [4];
  logic                   channels_cw_val  [4];
  logic                   channels_cw_rdy  [4];

  logic [p_msg_nbits-1:0] channels_ccw_msg [4];
  logic                   channels_ccw_val [4];
  logic                   channels_ccw_rdy [4];

  // Instantiate 4 routers
  genvar i;
  generate
    for (i = 0; i < 4; i++) begin: router_instances
    
    // Compute indices for clockwise and counter-clockwise connections
    localparam int i_cw  = i;                    // Current channel index
    localparam int i_ccw = (i == 0) ? 3 : i - 1; // Previous channel index
 
      lab4_sys_NetRouter#(p_msg_nbits) router_inst
      (
        .clk          (clk),
        .reset        (reset),

        .router_id    (i),

        // Input streams: local input, clockwise input, counter-clockwise input
        .istream_msg  ({ istream_msg[i], channels_cw_msg[i_ccw], channels_ccw_msg[i_cw] }),
        .istream_val  ({ istream_val[i], channels_cw_val[i_ccw], channels_ccw_val[i_cw] }),
        .istream_rdy  ({ istream_rdy[i], channels_cw_rdy[i_ccw], channels_ccw_rdy[i_cw] }),

        // Output streams: local output, clockwise output, counter-clockwise output
        .ostream_msg  ({ ostream_msg[i], channels_cw_msg[i_cw], channels_ccw_msg[i_ccw] }),
        .ostream_val  ({ ostream_val[i], channels_cw_val[i_cw], channels_ccw_val[i_ccw] }),
        .ostream_rdy  ({ ostream_rdy[i], channels_cw_rdy[i_cw], channels_ccw_rdy[i_ccw] })
      );
    end
  endgenerate

  //----------------------------------------------------------------------
  // Line Tracing
  //----------------------------------------------------------------------

  `ifndef SYNTHESIS

  // Generate for loop to instantiate trace modules

  genvar j;
  generate
  for ( j = 0; j < 4; j = j + 1 ) begin: CHANNEL_TRACE

    vc_NetMsgMiniTrace#(p_msg_nbits) cw_trace
    (
      .clk   (clk),
      .reset (reset),
      .msg   (channels_cw_msg[j]),
      .val   (channels_cw_val[j]),
      .rdy   (channels_cw_rdy[j])
    );

    vc_NetMsgMiniTrace#(p_msg_nbits) ccw_trace
    (
      .clk   (clk),
      .reset (reset),
      .msg   (channels_ccw_msg[j]),
      .val   (channels_ccw_val[j]),
      .rdy   (channels_ccw_rdy[j])
    );

  end
  endgenerate

  logic [`VC_TRACE_NBITS-1:0] str;
  `VC_TRACE_BEGIN
  begin

    // Line tracing for clockwise channels

    CHANNEL_TRACE[0].cw_trace.line_trace( trace_str );
    vc_trace.append_str( trace_str, "|" );
    CHANNEL_TRACE[1].cw_trace.line_trace( trace_str );
    vc_trace.append_str( trace_str, "|" );
    CHANNEL_TRACE[2].cw_trace.line_trace( trace_str );
    vc_trace.append_str( trace_str, "|" );
    CHANNEL_TRACE[3].cw_trace.line_trace( trace_str );

    vc_trace.append_str( trace_str, "I" );

    // Line tracing for counter clockwise channels

    CHANNEL_TRACE[0].ccw_trace.line_trace( trace_str );
    vc_trace.append_str( trace_str, "|" );
    CHANNEL_TRACE[1].ccw_trace.line_trace( trace_str );
    vc_trace.append_str( trace_str, "|" );
    CHANNEL_TRACE[2].ccw_trace.line_trace( trace_str );
    vc_trace.append_str( trace_str, "|" );
    CHANNEL_TRACE[3].ccw_trace.line_trace( trace_str );

  end
  `VC_TRACE_END

  `endif /* SYNTHESIS */

endmodule

`endif /* LAB4_SYS_NET_V */
