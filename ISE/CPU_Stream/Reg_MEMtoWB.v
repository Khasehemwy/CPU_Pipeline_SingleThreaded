`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:23:46 03/02/2020 
// Design Name: 
// Module Name:    Reg_MEMtoWB 
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
module Reg_MEMtoWB(
    input CLK,Reset_in,isRtype_in,
    input memToReg_in,regShouldWrite_in,
    input [32:1] memReadData_in,aluOut_in,
    input [5:1] regWriteAddress_in,

    output reg regShouldWrite_out,isRtype_out,
    output reg [32:1] regWriteData,
    output reg [5:1] regWriteAddress_out
    );

    always @(posedge CLK)begin
        if(Reset_in == 1) begin
            regShouldWrite_out <= 0;
        end
        else begin
            isRtype_out <= isRtype_in;
            regShouldWrite_out <= regShouldWrite_in;
            regWriteAddress_out <= regWriteAddress_in;

            if(memToReg_in==0)begin
                regWriteData <= aluOut_in;
                end
            else begin
                regWriteData <= memReadData_in;
            end
        end
    end

endmodule
