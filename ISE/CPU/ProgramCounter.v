`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:41:23 02/16/2020 
// Design Name: 
// Module Name:    ProgramCounter 
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
module ProgramCounter(
    input CLK,
    input Reset,
    input PCWrite,
    input [32:1] newAddress,
    output reg[32:1] currentAddress
    );

    initial begin
        currentAddress <= 0;
    end

    always @(posedge CLK or posedge Reset)
        begin
            if(Reset==1)currentAddress <= 1;
            else begin
                if(PCWrite==0)    currentAddress <= currentAddress;
                else begin 
                    currentAddress <= newAddress;
                end
            end
        end

endmodule
