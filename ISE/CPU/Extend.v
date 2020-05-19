`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:58:03 02/17/2020 
// Design Name: 
// Module Name:    Extend 
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
module Extend(
    input [16:1] Immediate,
    input extendSelect,
    output reg [32:1] outData
    );

    always @(Immediate or extendSelect)begin
        case(extendSelect)
            1'b0:begin //zero extend
                outData[16:1]=Immediate;
                outData[32:17]=16'h0000;
            end

            1'b1:begin //sign extend
                outData[15:1]=Immediate[15:1];
                outData[32:16]=17'b0;
                if(Immediate[16]==1)begin
                    outData=-outData;
                end
                else
                    ;
            end

            default:begin
                outData=0;
                $display($time," extendSelect no match .\n");
            end
        endcase
    end

endmodule
