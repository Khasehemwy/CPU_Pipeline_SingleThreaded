`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:43:14 03/02/2020 
// Design Name: 
// Module Name:    Reg_EXEtoMEM 
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
module Reg_EXEtoMEM(
    input CLK,
    input Reset_in,PCWrite_in,isRtype_in,
    input Zero_in,
          regShouldWrite_in,
          memWrite_in,memRead_in,memToReg_in,
    input [32:1] branchAddress_in,nextAddress_in,
                 regReadData2_in,
                 aluOut_in,
    input [5:1] regWriteAddress_in,
    input [2:1] PCSrc_in,

    output reg PCWrite_out,Reset_out,isRtype_out,
               Zero_out,
               regShouldWrite_out,
               memWrite_out,memRead_out,memToReg_out,
    output reg [32:1] branchAddress_out,
                      aluOut_out,
                      regReadData2_out,
    output reg [5:1] regWriteAddress_out,
    output reg [2:1] PCSrc_out
    );

    always @(posedge CLK)begin
        if(Reset_in == 0)begin
            Reset_out <= Reset_in;
            PCWrite_out <= PCWrite_in;
            isRtype_out <= isRtype_in;

            PCSrc_out <= PCSrc_in;

            Zero_out <= Zero_in;
            aluOut_out <= aluOut_in;

            regShouldWrite_out <= regShouldWrite_in;
            regReadData2_out <= regReadData2_in;
            regWriteAddress_out <= regWriteAddress_in;

            memWrite_out <= memWrite_in;
            memRead_out <= memRead_in;
            memToReg_out <= memToReg_in;

            if( (PCSrc_in==2'b01 && aluOut_in==0) || (PCSrc_in==2'b10 && aluOut_in!=0) )begin
                branchAddress_out <= branchAddress_in; //branch accept
                end
            else begin
                branchAddress_out <= nextAddress_in; //branch false
            end
        end
        else begin
            PCWrite_out <= 0;
            regShouldWrite_out <= 0;
            memWrite_out <= 0;
            memRead_out <= 0;
        end
    end



endmodule
