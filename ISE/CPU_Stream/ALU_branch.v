`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:40:57 03/03/2020 
// Design Name: 
// Module Name:    ALU_branch 
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
module ALU_branch(
    input [32:1] newAddress_next,
    input [32:1] Immediate,
    output reg [32:1] newAddress_branch
    );

    parameter Gap = 4;

    always @(newAddress_next or Immediate)begin
        newAddress_branch = newAddress_next + (Immediate*Gap);
        //$display($time," newAddress_branch:%b\n",newAddress_branch);
    end


endmodule
