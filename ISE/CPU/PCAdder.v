`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:49:31 02/17/2020 
// Design Name: 
// Module Name:    PCAdder 
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
module PCAdder(
    input branchSelect,
    input [2:1] PCSrc,
    input [32:1] currentAddress,branchData,Reg1SubReg2,
    input [26:1] jumpAddress,
    output reg [32:1] newAddress
    );

    reg [32:1] next_normal,next_branch,next_jump;
    parameter gap = 4;  //32/8=4;

    always @(PCSrc or currentAddress or branchSelect or branchData or jumpAddress or Reg1SubReg2)begin

        next_normal = currentAddress + gap;

        next_branch = next_normal + (branchData*gap);
        
        next_jump[32:29] = next_normal[32:29];
        next_jump[28:3] = jumpAddress;
        next_jump[2:1] = 2'b00; 

        case(PCSrc)
            2'b00:begin
                newAddress = next_normal;
            end

            2'b01:begin//branch
                if(branchSelect==0 && Reg1SubReg2==0)begin//equal
                    newAddress = next_branch;
                end
                else if(branchSelect==1 && Reg1SubReg2!=0)begin//not equal
                    newAddress = next_branch;
                end
                else begin
                    newAddress = next_normal;
                end
            end

            2'b10:begin//jump
                newAddress = next_jump;
            end

            default:begin
                $display($time," PCSrc no match.\n");
            end
        endcase
    end

endmodule
