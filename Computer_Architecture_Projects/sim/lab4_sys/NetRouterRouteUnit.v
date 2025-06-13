//========================================================================
// Network Router Route Unit
//========================================================================

// The route units implement the routing algorithm by using 
// (1)the network message’s destination field and (2)the router id
// to decide which switch unit to send the network message. 

`ifndef LAB4_SYS_NET_ROUTER_ROUTE_UNIT_V
`define LAB4_SYS_NET_ROUTER_ROUTE_UNIT_V

`include "vc/net-msgs.v"
`include "vc/trace.v"

module lab4_sys_NetRouterRouteUnit
#(
  parameter p_msg_nbits = 44
)
(
  input  logic                   clk,
  input  logic                   reset,

  // Router id (which router is this in the network?)

  input  logic [1:0]             router_id,

  // Input stream

  input  logic [p_msg_nbits-1:0] istream_msg,
  input  logic                   istream_val,
  output logic                   istream_rdy,

  // Output streams

  output logic [p_msg_nbits-1:0] ostream_msg [3],
  output logic                   ostream_val [3],
  input  logic                   ostream_rdy [3]
);

  net_msg_hdr_t istream_msg_hdr;
  assign istream_msg_hdr = istream_msg[`VC_NET_MSGS_HDR(p_msg_nbits)];

  // Forward message to all output channels
  assign ostream_msg[0] = istream_msg;
  assign ostream_msg[1] = istream_msg;
  assign ostream_msg[2] = istream_msg;

  // Calculate distances
  logic [1:0] cw_dist;
  logic [1:0] ccw_dist;
  
  assign cw_dist = (istream_msg_hdr.dest > router_id) ? 
                  (istream_msg_hdr.dest - router_id) :
                  (4 + istream_msg_hdr.dest - router_id);
  
  assign ccw_dist = (istream_msg_hdr.dest < router_id) ?
                   (router_id - istream_msg_hdr.dest) :
                   (4 + router_id - istream_msg_hdr.dest);

  // Determine output channel
  logic [1:0] selected_channel;
  
  always_comb begin
    // Default values
    selected_channel = 2'b11; // Invalid value
    
    if (istream_msg_hdr.dest == router_id)
      selected_channel = 2'b00;  // Local channel
    else if (ccw_dist < cw_dist)
      selected_channel = 2'b10;  // Counter-clockwise
    else
      selected_channel = 2'b01;  // Clockwise (including equal distances)
  end

  // Generate valid signals
  always_comb begin
    
    // Initialize signals to their default values
    ostream_val[0] = 0;              // Default: output channel 0 not valid
    ostream_val[1] = 0;              // Default: output channel 1 not valid
    ostream_val[2] = 0;              // Default: output channel 2 not valid
    istream_rdy = 0;
    
    if (istream_val) begin
      case (selected_channel)
        2'b00: begin 
          ostream_val[0] = 1; 
          istream_rdy = ostream_rdy[0]; end
        2'b01: begin 
          ostream_val[1] = 1; 
          istream_rdy = ostream_rdy[1]; end
        2'b10: begin 
          ostream_val[2] = 1; 
          istream_rdy = ostream_rdy[2]; end
        default: begin 
          ostream_val[0] = 0; 
          ostream_val[1] = 0; 
          ostream_val[2] = 0; 
          istream_rdy = 0; end
      endcase
    end
  end

  //----------------------------------------------------------------------
  // Line Tracing
  //----------------------------------------------------------------------

  `ifndef SYNTHESIS

  logic [`VC_TRACE_NBITS-1:0] str;
  `VC_TRACE_BEGIN
  begin

    if ( istream_val && istream_rdy ) begin
      $sformat( str, "%d", istream_msg_hdr.dest );
      vc_trace.append_str( trace_str, str );
    end
    else
      vc_trace.append_str( trace_str, " " );

  end
  `VC_TRACE_END

  `endif /* SYNTHESIS */

endmodule

`endif /* NET_ROUTER_ROUTE_UNIT_V */
