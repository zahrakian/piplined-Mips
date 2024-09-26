`timescale 1ns / 1ps

module MIPS(
	input clock
	);

	 wire [15:0] IFID_instr_in, IFID_instr_out;
	 wire [15:0] IFID_addr_in, IFID_addr_out;
	 wire [15:0] adder_result_EX_MEM_out;
	 wire hit_out;
	 wire [15:0] regfile_read_data_1_reg, regfile_read_data_2_reg;
	 wire Branch_decode_out, MemWrite_decode_out, MemRead_decode_out, RegWrite_decode_out;
	 wire MemToReg_decode_out, ALUSrc_decode_out, RegDst_decode_out;
	 wire [1:0] ALUOp_decode_out;
	 wire [15:0] sign_extended_output_wire;
	 wire [2:0] rt_wire, rd_wire;
	 wire [15:0] ALU_Result_EXE_out;
	 wire Zero_EXE_out;
	 wire [2:0] mux_rd_rt_output;
	 wire [15:0] ALU_Result_EX_MEM_out;
	 wire [15:0] regfile_read_data_2_EX_MEM_out;
	 wire Zero_EX_MEM_out;
	 wire [2:0] mux_rd_rt_EX_MEM_out;
	 wire MemToReg_EX_MEM_out, RegWrite_EX_MEM_out, MemRead_EX_MEM_out, MemWrite_EX_MEM_out, Branch_EX_MEM_out;
	 wire [15:0] memory_read_data_output_wire;
	 wire PCSrc_mem_out;
	 wire [15:0] memory_read_data_out_wire, alu_result_MEM_WB_out;
	 wire [2:0] mux_rd_rt_MEM_WB_out;
	 wire MemToReg_MEM_WB_out, RegWrite_MEM_WB_out;	 
	 wire [15:0] mux_wb_out;
	 wire [2:0] rt_wire1, rd_wire1; 
	 wire [15:0] addr_out_wire, sign_extended_output_wire1;
	 wire [15:0] regfile_read_data_1_out_wire, regfile_read_data_2_out_wire;
	 wire RegDst_ID_EX_out, ALUSrc_ID_EX_out, MemToReg_ID_EX_out, RegWrite_ID_EX_out, MemRead_ID_EX_out, MemWrite_ID_EX_out, Branch_ID_EX_out;
	 wire [1:0] ALUOp_ID_EX_out;
	 wire [15:0] addr_result_EXE_out;

	 
	my_dcm dcm (
    .clock_in(clock), 
    .clock_out(clk)
    ); 
	 
	
	fetch_stage fetch_module ( 
    .branch_target(addr_result_EXE_out),                     ////                       
    .PcSrc(PCSrc_mem_out),                                   ////                                      
    .clk(clk),                                               ////
    .instruction_fetch_output(IFID_instr_in),                ////
    .fetch_adderess_output(IFID_addr_in),                    ////
    .hit_fetch_output(hit_out)                               ////
    );
	 
	 IF_ID IF_ID_register (
    .clk(clk),                                               ////
    .adder_input(IFID_addr_in),                              ////
    .instruction_input(IFID_instr_in),                       ////
    .hit_fetch_input(hit_out),                               ////
    .addr_output(IFID_addr_out),                             ////
    .instruction_output(IFID_instr_out)                      ////
    );



	decode_stage decode_module (
    .clk(clk),                                                ////
    .instruction(IFID_instr_out),                             ////
    .regfile_write_data(mux_wb_out),                          ////               
    .regfile_write_register(mux_rd_rt_MEM_WB_out),            ////
    .RegWrite_out(RegWrite_MEM_WB_out),                       ////                            
    .regfile_read_data_1(regfile_read_data_1_reg),            ////
    .regfile_read_data_2(regfile_read_data_2_reg),            ////
    .sign_extended_output(sign_extended_output_wire),         ////
    .rt(rt_wire),                                             ////
    .rd(rd_wire),                                             ////
    .ALUOp(ALUOp_decode_out),                                 ////
    .RegDst(RegDst_decode_out),                               ////
    .ALUSrc(ALUSrc_decode_out),                               ////
    .MemToReg(MemToReg_decode_out),                           ////
    .RegWrite(RegWrite_decode_out),                           ////
    .MemRead(MemRead_decode_out),                             ////
    .MemWrite(MemWrite_decode_out),                           ////
    .Branch(Branch_decode_out)                                ////
    );
	 


	
	ID_EX ID_EX_egister (
    .clk(clk),                                                ////
    .hit_in(hit_out),                                         ////
    .adder_in(IFID_addr_out),                                 ////
    .sign_extended_input(sign_extended_output_wire),          ////
    .regfile_read_data_1_in(regfile_read_data_1_reg),         ////
    .regfile_read_data_2_in(regfile_read_data_2_reg),         ////
    .rt_in(rt_wire),                                          ////
    .rd_in(rd_wire),                                          ////
    .ALUOp_in(ALUOp_decode_out),                              ////
    .RegDst_in(RegDst_decode_out),                            ////
    .ALUSrc_in(ALUSrc_decode_out),                            ////
    .MemToReg_in(MemToReg_decode_out),                        ////
    .RegWrite_in(RegWrite_decode_out),                        ////
    .MemRead_in(MemRead_decode_out),                          ////
    .MemWrite_in(MemWrite_decode_out),                        //// 
    .Branch_in(Branch_decode_out),                            ////
    .adder_out(addr_out_wire),                                ////
    .sign_extended_output(sign_extended_output_wire1),        ////
    .regfile_read_data_1_out(regfile_read_data_1_out_wire),   ////
    .regfile_read_data_2_out(regfile_read_data_2_out_wire),   ////
    .rt_out(rt_wire1),                                        ////
    .rd_out(rd_wire1),                                        ////
    .RegDst_out(RegDst_ID_EX_out),                            ////
    .ALUSrc_out(ALUSrc_ID_EX_out),                            //// 
    .MemToReg_out(MemToReg_ID_EX_out),                        ////
    .RegWrite_out(RegWrite_ID_EX_out),                        ////
    .MemRead_out(MemRead_ID_EX_out),                          ////
    .MemWrite_out(MemWrite_ID_EX_out),                        ////
    .Branch_out(Branch_ID_EX_out),                            ////
    .ALUOp_out(ALUOp_ID_EX_out)                               ////
    );



	execute_stage execute_module (
	 .clk(clk), 
    .adder_in(addr_out_wire),                                 ////
    .regfile_read_data_1_in(regfile_read_data_1_out_wire),    ////
    .regfile_read_data_2_in(regfile_read_data_2_out_wire),    ////
    .sign_extended_input(sign_extended_output_wire1),         ////
    .rt_in(rt_wire1),                                         ////
    .rd_in(rd_wire1),                                         ////
    .RegDst_in(RegDst_ID_EX_out),                             ////
    .ALUSrc_in(ALUSrc_ID_EX_out),                             ////
    .ALUOp_in(ALUOp_ID_EX_out),                               ////
    .ALU_Result(ALU_Result_EXE_out),                          ////
    .adder_out(addr_result_EXE_out),                          ////
    .Zero(Zero_EXE_out),                                      ////
    .mux_rd_rt_output(mux_rd_rt_output)                       ////
    );
	 
 
	 
	EX_MEM EX_MEM_register (
    .clk(clk),                                                ////
    .ALU_Result_in(ALU_Result_EXE_out),                       ////
    .Zero_in(Zero_EXE_out),                                   ////       
    .adder_result_in(addr_result_EXE_out),                    ////
    .regfile_read_data_2_in(regfile_read_data_2_out_wire),    ////
    .mux_rd_rt_in(mux_rd_rt_output),                          ////
    .MemToReg_in(MemToReg_ID_EX_out),                         ////
    .RegWrite_in(RegWrite_ID_EX_out),                         ////
    .MemRead_in(MemRead_ID_EX_out),                           ////
    .MemWrite_in(MemWrite_ID_EX_out),                         ////
    .Branch_in(Branch_ID_EX_out),                             ////
    .hit_in(hit_out),                                         //// 
    .ALU_Result_out(ALU_Result_EX_MEM_out),                   ////
    .Zero_out(Zero_EX_MEM_out),                               ////
    .adder_result_out(adder_result_EX_MEM_out),               ////
    .regfile_read_data_2_out(regfile_read_data_2_EX_MEM_out), ////
    .mux_rd_rt_out(mux_rd_rt_EX_MEM_out),                     ////
    .MemToReg_out(MemToReg_EX_MEM_out),                       ////
    .RegWrite_out(RegWrite_EX_MEM_out),                       ////
    .MemRead_out(MemRead_EX_MEM_out),                         ////
    .MemWrite_out(MemWrite_EX_MEM_out),                       ////
    .Branch_out(Branch_EX_MEM_out)                            ////
    );
	 

	memory_stage memory_module (
    .clk(clk),                                                ////
    .memory_input_address(ALU_Result_EX_MEM_out),             ////
    .memory_write_data_input(regfile_read_data_2_EX_MEM_out), ////
    .MemWrite(MemWrite_EX_MEM_out),                           ////
    .MemRead(MemRead_EX_MEM_out),                             ////
    .Branch(Branch_EX_MEM_out),                               ////
    .Zero(Zero_EX_MEM_out),                                   ////
    .memory_read_data_output(memory_read_data_output_wire),   ////
    .PCSrc_out(PCSrc_mem_out)                                 ////
    );
	 

	 
	MEM_WB MEM_WB_register (
    .clk(clk),                                                ////
    .memory_read_data_in(memory_read_data_output_wire),       ////
    .alu_result_in(ALU_Result_EX_MEM_out),                    ////
    .mux_rd_rt_in(mux_rd_rt_EX_MEM_out),                      //// 
    .MemToReg_in(MemToReg_EX_MEM_out),                        ////
    .RegWrite_in(RegWrite_EX_MEM_out),                        //// 
    .hit_in(hit_out),                                         ////
    .memory_read_data_out(memory_read_data_out_wire),         ////
    .alu_result_out(alu_result_MEM_WB_out),                   ////
    .mux_rd_rt_out(mux_rd_rt_MEM_WB_out),                     ////
    .MemToReg_out(MemToReg_MEM_WB_out),                       ////
    .RegWrite_out(RegWrite_MEM_WB_out)                        ////
    );
	 

	 
	write_back_stage write_back_module (
    .memory_read_data_input(memory_read_data_out_wire),       ////
    .ALU_result(alu_result_MEM_WB_out),                       ////
    .MemToReg(MemToReg_MEM_WB_out),                           ////
    .mux_wb_output(mux_wb_out)                                ////
    );
endmodule
