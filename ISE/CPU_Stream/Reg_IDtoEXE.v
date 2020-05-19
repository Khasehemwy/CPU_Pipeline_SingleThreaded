`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:15:22 03/02/2020 
// Design Name: 
// Module Name:    Reg_IDtoEXE 
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
module Reg_IDtoEXE(
    input CLK,Reset_in,
    input PCWrite_in,
          regShouldWrite_in,
          aluInputBSelect_in,
          memWrite_in,memRead_in,memToReg_in,
          jumpSrc,
          isRtype_in,isJal_in,
    input [32:1] newAddress_in,
                 regReadData1_in,regReadData2_in,Immediate_in,
    input [26:1] jumpAddress_in_opCode,
    input [6:1] aluOpCode_in,
    input [5:1] regWriteAddress_in,regReadAddress1_in,regReadAddress2_in,
    input [2:1] PCSrc_jump_in,PCSrc_branch_in,

    output reg Reset_out,PCWrite_out,isRtype_out,isJal_out,
           regShouldWrite_out,
           memWrite_out,memRead_out,memToReg_out,
    output reg [32:1] newAddress_out,
                      regReadData1_out,regReadData2_out,
                      aluInputB_out,Immediate_out,
    output reg [32:1] jumpAddress_out,
    output reg [6:1] aluOpCode_out,
    output reg [5:1] regWriteAddress_out,regReadAddress1_out,regReadAddress2_out,
    output reg [2:1] PCSrc_jump_out,PCSrc_branch_out
    );

    always @(posedge CLK)begin
        if(Reset_in == 0)begin
            Reset_out <= Reset_in;
            isRtype_out <= isRtype_in;
            isJal_out <= isJal_in;
            PCWrite_out <= PCWrite_in;
            PCSrc_jump_out <= PCSrc_jump_in;
            PCSrc_branch_out <= PCSrc_branch_in;
            newAddress_out <= newAddress_in;

            regShouldWrite_out <= regShouldWrite_in;

            memWrite_out <= memWrite_in;
            memRead_out <= memRead_in;
            memToReg_out <= memToReg_in;

            regReadData1_out <= regReadData1_in;
            regReadData2_out <= regReadData2_in;
            regReadAddress2_out <= regReadAddress2_in;
            regReadAddress1_out <= regReadAddress1_in;
            regWriteAddress_out <= regWriteAddress_in;

            Immediate_out <= Immediate_in;
            aluOpCode_out <= aluOpCode_in;
            if(aluInputBSelect_in == 0) aluInputB_out <= regReadData2_in;
            else    aluInputB_out <= Immediate_in;

            if(jumpSrc == 0)begin
                jumpAddress_out[32:29] <= newAddress_in[32:29];
                jumpAddress_out[28:3] <= jumpAddress_in_opCode;
                jumpAddress_out[2:1] <= 2'b00;
            end
            else begin
                jumpAddress_out <= regReadData1_in;
                //$display("jumpSrc=1,jumpAddress:%b",jumpAddress_out);
            end
            //$display($time," jumpAddress:%b\n",jumpAddress_out);
        end

        else begin
            PCWrite_out <= 0;
            regShouldWrite_out <= 0;
            memWrite_out <= 0;
            memRead_out <= 0;
        end
    end


endmodule
