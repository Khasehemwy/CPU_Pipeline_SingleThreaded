`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:52:35 02/17/2020 
// Design Name: 
// Module Name:    RegSelect 
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
module RegSelect(
    input [5:1] rt,rd,
    input selectCode,
    output [5:1] out
    );

    assign out=(selectCode == 1'b0) ? rt : rd;

endmodule
