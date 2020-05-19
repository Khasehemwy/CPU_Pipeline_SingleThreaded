`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:28:53 03/02/2020 
// Design Name: 
// Module Name:    PC 
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
module PC(
    input CLK,
    input Reset,
    input PCWrite,
    input [32:1] newAddress_normal,newAddress_branch,newAddress_jump,
    input [2:1] PCSrc_branch,PCSrc_jump,
    output reg[32:1] currentAddress
    );

    initial begin
        currentAddress <= 0;
    end

    reg [2:1] PCSrc = 2'b00;
    always @(PCSrc_branch or PCSrc_jump)begin
        if(PCSrc_branch!=2'b00) PCSrc = PCSrc_branch;
        else if(PCSrc_jump!=2'b00) PCSrc = PCSrc_jump;
        else PCSrc = 2'b00;
        //$display($time,"PCSrc:%b",PCSrc);
    end


    always @(negedge CLK or posedge Reset)
        begin
            //$display($time , "pc currentAddress = %b",currentAddress);
            //$display($time , "pc nextAddress_normal = %b",newAddress_normal);
            if(Reset==1)currentAddress <= 0;
            else begin
                if(PCWrite==0)begin 
                    currentAddress <= currentAddress;
                    //$display($time , "into cu=cu");
                    end
                else begin
                    case(PCSrc)
                        2'b00:begin
                            currentAddress <= newAddress_normal;
                            //$display($time , "into cu=normal");
                        end
                        
                        2'b11:begin
                            currentAddress <= newAddress_jump;
                            //$display($time , "into cu=jump");
                        end

                        2'b01:begin
                            currentAddress <= newAddress_branch;
                            $display($time , "into cu=branch");
                        end
                        2'b10:begin
                            currentAddress <= newAddress_branch;
                            //$display($time , "into cu=branch");
                        end

                        default:begin
                            currentAddress <= newAddress_normal;
                            //$display($time , "no match PCSrc");
                        end

                    endcase
                end
            end
            //$display($time , "pc next_currentAddress = %b\n",currentAddress);
        end

endmodule
