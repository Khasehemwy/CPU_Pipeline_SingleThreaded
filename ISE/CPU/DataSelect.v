`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:00:36 02/17/2020 
// Design Name: 
// Module Name:    DataSelect 
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
module DataSelect(
    input [32:1] inputA,inputB,
    input selectCode,
    output [32:1] out
    );

    assign out = (selectCode==0) ? inputA : inputB;

endmodule
