`timescale 1ns / 1ps

module divide(
	input [15:0] divisor, dividend,
	input clk,
	output reg validity,
	output [31:0] quotient_remainder
    );

	reg [15:0] remainder;
	reg [31:0] remainder_dividend;
	reg [31:0] new_divisor;
	reg [31:0] temp;
	reg [15:0] quotient;
	reg [4:0] counter;
	
	initial 
	begin 
		counter = 16;
		temp = 0;
		quotient = 0;
		validity = 0;
		remainder = 16'd0;
	end
	
	always@(*)
	begin
		remainder_dividend = {remainder, dividend};
		new_divisor = {divisor, 16'd0};
	end

	always@(posedge clk)
	begin
		temp = remainder_dividend - new_divisor;
		if(temp[31] == 1)
		begin
			quotient = { quotient[14:0] , 1'b0 };
		end
		else
		begin
			remainder_dividend = temp;
			quotient = { quotient[14:0] , 1'b1 };
		end
		new_divisor = new_divisor >> 1 ;
		counter = counter - 1;
		if(counter == 0)
		begin
			validity = 1;
		end
	end
	assign quotient_remainder = {quotient, remainder_dividend[15:0]};

endmodule
