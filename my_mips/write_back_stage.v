`timescale 1ns / 1ps

module write_back_stage(
	input [15:0] memory_read_data_input,
	input [15:0] ALU_result,
	input MemToReg,
	
	output [15:0] mux_wb_output
	);
	
	multiplexer2_1 mux_module (
    .mux_input_line0(ALU_result),
    .mux_input_line1(memory_read_data_input), 
    .select_line(MemToReg), 
    .mux_output(mux_wb_output)
    );


endmodule
