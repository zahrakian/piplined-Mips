`timescale 1ns / 1ps

module instruction_memory(
	input [15:0] instruction_memory_input_address,
	input clk,
	
	output reg [63:0] instruction_memory_output
    );

	reg [2:0] instruction_memory_counter;
	reg [15:0] prev_inp;
	reg [7:0] instruction_memory [0:511] ;





initial 
	begin 		
		instruction_memory_counter = 0;
		prev_inp = 0;
		instruction_memory_output = {64{1'bx}};
		
		//addi r1 r0 1
		instruction_memory[0] = 8'b11100000;
		instruction_memory[1] = 8'b10000001;

		//addi r2 r0 4
		instruction_memory[2] = 8'b11100001;
		instruction_memory[3] = 8'b00000100;

		//addi r3 r0 6
		instruction_memory[4] = 8'b11100001;
		instruction_memory[5] = 8'b10000110;

		instruction_memory[6] = 8'b00000000;
		instruction_memory[7] = 8'b00000000;

		instruction_memory[8] = 8'b00000000;
		instruction_memory[9] = 8'b00000000;

		instruction_memory[10] = 8'b00000000;
		instruction_memory[11] = 8'b00000000;

		instruction_memory[12] = 8'b00000000;
		instruction_memory[13] = 8'b00000000;

		instruction_memory[14] = 8'b00000000;
		instruction_memory[15] = 8'b00000000;

		//add r4 r1 r2
		instruction_memory[16] = 8'b00000101;
		instruction_memory[17] = 8'b01000000;

		//sub r5 r3 r2
		instruction_memory[18] = 8'b00001101;
		instruction_memory[19] = 8'b01010001;

		//and r6 r3 r1
		instruction_memory[20] = 8'b00001100;
		instruction_memory[21] = 8'b11100010;

		//and r7 r3 r2
		instruction_memory[22] = 8'b00001101;
		instruction_memory[23] = 8'b01110010;

		//or r4 r3 r1
		instruction_memory[24] = 8'b00001100;
		instruction_memory[25] = 8'b11000011;

		//or r5 r3 r2
		instruction_memory[26] = 8'b00001101;
		instruction_memory[27] = 8'b01010011;

		//slt r6 r3 r1
		instruction_memory[28] = 8'b00001100;
		instruction_memory[29] = 8'b11100100;

		//slt r7 r1 r3
		instruction_memory[30] = 8'b00000101;
		instruction_memory[31] = 8'b11110100;

		//lsl r4 r3 r1
		instruction_memory[32] = 8'b00001100;
		instruction_memory[33] = 8'b11000101;

		//rsl r5 r3 r1
		instruction_memory[34] = 8'b00001100;
		instruction_memory[35] = 8'b11010110;

		//nor r6 r3 r0
		instruction_memory[36] = 8'b00001100;
		instruction_memory[37] = 8'b01100111;

		//slti r7 r3 2
		instruction_memory[38] = 8'b00101111;
		instruction_memory[39] = 8'b10000010;

		//slti r4 r3 16
		instruction_memory[40] = 8'b00101110;
		instruction_memory[41] = 8'b00010000;

		//sw r3 0(r0)                             eshteb
		instruction_memory[42] = 8'b00000000;
		instruction_memory[43] = 8'b00000000;

		//lw r5 0(r0)
		instruction_memory[44] = 8'b00000000;
		instruction_memory[45] = 8'b00000000;

		//mu1 r6 r3 r2  
		instruction_memory[46] = 8'b00001101;
		instruction_memory[47] = 8'b01101000;

		//div r7 r3 r2  
		instruction_memory[48] = 8'b00001101;
		instruction_memory[49] = 8'b01111001;

		//muli r4 r3 3  
		instruction_memory[50] = 8'b00000000;
		instruction_memory[51] = 8'b00000000;

		//divi r6 r3 3 
		instruction_memory[52] = 8'b00000000;
		instruction_memory[53] = 8'b00000000;

		//beq r3 r5 -23
		instruction_memory[54] = 8'b11001110;
		instruction_memory[55] = 8'b11101001;
		  /*instruction_memory[0]  = 8'he0 ;
		  instruction_memory[1]  = 8'h88 ;
		  instruction_memory[2]  = 8'h00 ;
		  instruction_memory[3]  = 8'h00 ;
		  instruction_memory[4]  = 8'h00 ;
		  instruction_memory[5]  = 8'h00 ;
		  instruction_memory[6]  = 8'h00 ;
		  instruction_memory[7]  = 8'h00 ;
		  instruction_memory[8]  = 8'h04 ;
		  instruction_memory[9]  = 8'h70 ;
		  instruction_memory[10] = 8'h00 ;
		  instruction_memory[11] = 8'h00 ;
		  instruction_memory[12] = 8'h00 ;
		  instruction_memory[13] = 8'h00 ;
		  instruction_memory[14] = 8'h00 ;
		  instruction_memory[15] = 8'h00 ;
		  instruction_memory[16] = 8'ha4 ;
		  instruction_memory[17] = 8'h80 ;
		  instruction_memory[18] = 8'h00 ;
		  instruction_memory[19] = 8'h00 ;
		  instruction_memory[20] = 8'h00 ;
		  instruction_memory[21] = 8'h00 ;
		  instruction_memory[22] = 8'h00 ;
		  instruction_memory[23] = 8'h00 ;		  
		  instruction_memory[24] = 8'h86 ;
		  instruction_memory[25] = 8'h80 ;
		  instruction_memory[26] = 8'hdc ;
		  instruction_memory[27] = 8'h8a ;
		  instruction_memory[28] = 8'h00 ;
		  instruction_memory[29] = 8'h00 ;
		  instruction_memory[30] = 8'h00 ;
		  instruction_memory[31] = 8'h00 ;
		  instruction_memory[32] = 8'h00 ;
		  instruction_memory[33] = 8'h00 ;
		  instruction_memory[34] = 8'h24 ;
		  instruction_memory[35] = 8'h25 ;
		  instruction_memory[36] = 8'h26 ;
		  instruction_memory[37] = 8'h27 ;	 
		  instruction_memory[38] = 8'h28 ;
		  instruction_memory[39] = 8'h29 ;
		  instruction_memory[40] = 8'h40 ;
		  instruction_memory[41] = 8'h41 ;
		  instruction_memory[42] = 8'h42 ;
		  instruction_memory[43] = 8'h43 ;
		  instruction_memory[44] = 8'h44 ;
		  instruction_memory[45] = 8'h45 ;
		  instruction_memory[46] = 8'h46 ;
		  instruction_memory[47] = 8'h47 ;
		  instruction_memory[48] = 8'h48 ;
		  instruction_memory[49] = 8'h49 ;
		  instruction_memory[50] = 8'h50 ;
		  instruction_memory[51] = 8'h51 ;
		  instruction_memory[52] = 8'h52 ;
		  instruction_memory[53] = 8'h53 ;
		  instruction_memory[54] = 8'h54 ;
		  instruction_memory[55] = 8'h55 ;
		  instruction_memory[56] = 8'h56 ;
		  instruction_memory[57] = 8'h57 ;	 
		  instruction_memory[58] = 8'h58 ;
		  instruction_memory[59] = 8'h59 ;
		  instruction_memory[60] = 8'h60 ;
		  instruction_memory[61] = 8'h61 ;
		  instruction_memory[62] = 8'h62 ;
		  instruction_memory[63] = 8'h63 ; */
	end

	always@(posedge clk)
	begin 
		if(instruction_memory_input_address[15:3] != prev_inp[15:3])
		begin	
			if(instruction_memory_counter != 0)
			begin
				instruction_memory_output = 64'bx;
				instruction_memory_counter = 1;			
			end

		end
		else
		begin
			instruction_memory_counter = instruction_memory_counter + 1;
			if(instruction_memory_counter == 4)
				instruction_memory_output <= { instruction_memory[{instruction_memory_input_address[5:3],3'b000}], instruction_memory[{instruction_memory_input_address[5:3],3'b001}], instruction_memory[{instruction_memory_input_address[5:3],3'b010}], instruction_memory[{instruction_memory_input_address[5:3],3'b011}], instruction_memory[{instruction_memory_input_address[5:3],3'b100}], instruction_memory[{instruction_memory_input_address[5:3],3'b101}], instruction_memory[{instruction_memory_input_address[5:3],3'b110}], instruction_memory[{instruction_memory_input_address[5:3],3'b111}]};
		end
		prev_inp = instruction_memory_input_address;
	end


endmodule
