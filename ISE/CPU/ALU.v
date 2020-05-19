`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:58:04 02/13/2020 
// Design Name: 
// Module Name:    ALU 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ALU(
	inputA,inputB, aluOpCode,out
	);
    parameter N=32;
    parameter 
		ADD=6'b100000,
		SUB=6'b100001,
		AND=6'b100100,
		OR =6'b100101,
		XOR=6'b100110,
		NOR=6'b100111,
		SLL=6'b000000;
    
	input [N:1]inputA;
    input [N:1]inputB;
    input [6:1]aluOpCode;
    output reg [N:1]out;
    
    always @(inputA or inputB or aluOpCode) begin
            case(aluOpCode)
                ADD:    out=inputA+inputB;
                SUB:    out=inputA-inputB;
                AND:    out=inputA&inputB;
                OR:     out=inputA|inputB;
                XOR:    out=inputA^inputB;
                NOR:    out=~(inputA|inputB);
				SLL:    out=inputA<<inputB;

                default:begin
                    out=-1;
                    $display ($time," aluCode no match.\n");
                end
                
			endcase
        end


endmodule
