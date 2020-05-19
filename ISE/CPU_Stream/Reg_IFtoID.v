`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:05:48 03/02/2020 
// Design Name: 
// Module Name:    Reg_IFtoID 
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
module Reg_IFtoID(
    input CLK,
    input [32:1] entireOpCode_in,newAddress_in,
    output reg [32:1] entireOpCode_out,newAddress_out
    );

    always @(posedge CLK)begin 
        entireOpCode_out <= entireOpCode_in;
        newAddress_out <= newAddress_in;
    end


endmodule
