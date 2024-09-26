`timescale 1ns / 1ps

module Control_Unit(
	input clk,
	input signed [15:0] a,
	output reg [1:0] Sig_AddOrSub,
	output reg rst,
	output validity
    );
		
	reg [3:0] index = 0;
	reg [1:0] tmp;	
	
	always @ (a)
	begin
		index <= 0;
		tmp <= 0;
		rst <= 1;
	end
	
	always @ (posedge clk)
	begin
		if (rst) begin
			tmp <= {a[index], 0};
			rst <= 0;
		end
		else 
			tmp <= {a[index + 1], a[index]};
			
		case (tmp)
			2'b00 : Sig_AddOrSub <= 2'b00;			// Nothing to do
			2'b01 : Sig_AddOrSub <= 2'b01;			// Add
			2'b10 : Sig_AddOrSub <= 2'b10;       	// Sub
			default : Sig_AddOrSub <= 2'b11;			// Nothing to do
		endcase
		index <= index + 1;
	
	end
	
	assign validity = index == 15 ? 1 : 0;

endmodule