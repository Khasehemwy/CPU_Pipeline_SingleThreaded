`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:01:42 03/03/2020 
// Design Name: 
// Module Name:    ControlUnit 
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
module ControlUnit(
    input [32:1] entireOpCode,
    output reg  Reset,PCWrite,
                regShouldWrite,
                aluInputBSelect,
                memWrite,memRead,memToReg,
                extendSelect,
                jumpSrc,isRtype,isJal,
    output reg [5:1]    regAddress1,regAddress2,regWriteAddress,
    output reg [6:1]    aluOpCode,
    output reg [16:1]   Immediate,
                        
    output reg [26:1]   jumpAddress,
    output reg [2:1]    PCSrc_jump,PCSrc_branch
    );

    parameter
        R_Type = 6'b000000,

        addi = 6'b001000,
        addiu = 6'b001001,
        andi = 6'b001100,
        ori = 6'b001101,
        xori = 6'b001110,
        lui = 6'b001111,
        slti = 6'b001010,
        sltiu = 6'b001011,


        beq = 6'b000100,
        bne = 6'b000101,
        j = 6'b000010,
        jal = 6'b000011,

        lw = 6'b100011,
        sw = 6'b101011,

        nop = 6'b111110,
        stop = 6'b111111
    ;


    //To R_Type:If the addresses of $ rs and $ rt are the same, and the previous or the first two are addi, the address assigned by addi is the same as $ rs, then add 2 or 1 nop instruction before ADD (corresponding to the previous)
    always @(entireOpCode)begin
        case(entireOpCode[32:27])
            R_Type:begin
            if(entireOpCode[26:22]!=0)begin
                if(entireOpCode[16:12]==0&&entireOpCode[6:1]==6'b001000)begin //jr
                Reset = 0;
                isRtype = 1;
                isJal = 0;
                PCWrite = 1;
                PCSrc_jump = 2'b11;//PCSrc_jump_jump
                PCSrc_branch = 2'b00;

                regShouldWrite = 0;
                regAddress1 = entireOpCode[26:22];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[16:12];

                aluInputBSelect = 0;
                aluOpCode = entireOpCode[6:1];

                Immediate = entireOpCode[16:1];
                extendSelect = 0;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 1;

                memWrite = 0;
                memRead = 0;
                memToReg = 0;
                end

                else begin
                Reset = 0;
                isRtype = 1;
                isJal = 0;
                PCWrite = 1;
                PCSrc_jump = 2'b00;
                PCSrc_branch = 2'b00;

                regShouldWrite = 1;
                regAddress1 = entireOpCode[26:22];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[16:12];

                aluInputBSelect = 0;
                aluOpCode = entireOpCode[6:1];

                Immediate = entireOpCode[16:1];
                extendSelect = 0;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 0;

                memWrite = 0;
                memRead = 0;
                memToReg = 0;
                end
            end
            else begin
                Reset = 0;
                isRtype = 1;
                isJal = 0;
                PCWrite = 1;
                PCSrc_jump = 2'b00;
                PCSrc_branch = 2'b00;

                regShouldWrite = 1;
                regAddress1 = entireOpCode[21:17];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[16:12];

                aluInputBSelect = 1;
                aluOpCode = entireOpCode[6:1];

                Immediate[16:6] = 11'b0;
                Immediate[5:1] = entireOpCode[11:7];
                extendSelect = 1;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 0;

                memWrite = 0;
                memRead = 0;
                memToReg = 0;
                end
            end

            addi:begin
                Reset = 0;
                isRtype = 0;
                isJal = 0;
                PCWrite = 1;
                PCSrc_jump = 2'b00;
                PCSrc_branch = 2'b00;

                regShouldWrite = 1;
                regAddress1 = entireOpCode[26:22];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[21:17];

                aluInputBSelect = 1;
                aluOpCode = 6'b100000;

                Immediate = entireOpCode[16:1];
                extendSelect = 1;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 0;

                memWrite = 0;
                memRead = 0;
                memToReg = 0;
            end

            addiu:begin
                Reset = 0;
                isRtype = 0;
                isJal = 0;
                PCWrite = 1;
                PCSrc_jump = 2'b00;
                PCSrc_branch = 2'b00;

                regShouldWrite = 1;
                regAddress1 = entireOpCode[26:22];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[21:17];

                aluInputBSelect = 1;
                aluOpCode = 6'b100001;

                Immediate = entireOpCode[16:1];
                extendSelect = 0;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 0;

                memWrite = 0;
                memRead = 0;
                memToReg = 0;
            end

            andi:begin
                Reset = 0;
                isRtype = 0;
                isJal = 0;
                PCWrite = 1;
                PCSrc_jump = 2'b00;
                PCSrc_branch = 2'b00;

                regShouldWrite = 1;
                regAddress1 = entireOpCode[26:22];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[21:17];

                aluInputBSelect = 1;
                aluOpCode = 6'b100100;

                Immediate = entireOpCode[16:1];
                extendSelect = 0;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 0;

                memWrite = 0;
                memRead = 0;
                memToReg = 0;
            end

            ori:begin
                Reset = 0;
                isRtype = 0;
                isJal = 0;
                PCWrite = 1;
                PCSrc_jump = 2'b00;
                PCSrc_branch = 2'b00;

                regShouldWrite = 1;
                regAddress1 = entireOpCode[26:22];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[21:17];

                aluInputBSelect = 1;
                aluOpCode = 6'b100101;

                Immediate = entireOpCode[16:1];
                extendSelect = 0;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 0;

                memWrite = 0;
                memRead = 0;
                memToReg = 0;
            end

            xori:begin
                Reset = 0;
                isRtype = 0;
                isJal = 0;
                PCWrite = 1;
                PCSrc_jump = 2'b00;
                PCSrc_branch = 2'b00;

                regShouldWrite = 1;
                regAddress1 = entireOpCode[26:22];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[21:17];

                aluInputBSelect = 1;
                aluOpCode = 6'b100110;

                Immediate = entireOpCode[16:1];
                extendSelect = 0;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 0;

                memWrite = 0;
                memRead = 0;
                memToReg = 0;
            end

            lui:begin
                Reset = 0;
                isRtype = 0;
                isJal = 0;
                PCWrite = 1;
                PCSrc_jump = 2'b00;
                PCSrc_branch = 2'b00;

                regShouldWrite = 1;
                regAddress1 = entireOpCode[26:22];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[21:17];

                aluInputBSelect = 1;
                aluOpCode = 6'b001111;

                Immediate = entireOpCode[16:1];
                extendSelect = 0;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 0;

                memWrite = 0;
                memRead = 0;
                memToReg = 0;
            end

            lw:begin
                Reset = 0;
                isRtype = 0;
                isJal = 0;
                PCWrite = 1;
                PCSrc_jump = 2'b00;
                PCSrc_branch = 2'b00;

                regShouldWrite = 1;
                regAddress1 = entireOpCode[26:22];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[21:17];

                aluInputBSelect = 1;
                aluOpCode = 6'b100000;

                Immediate = entireOpCode[16:1];
                extendSelect = 1;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 0;

                memWrite = 0;
                memRead = 1;
                memToReg = 1;
            end

            sw:begin
                Reset = 0;
                isRtype = 0;
                isJal = 0;
                PCWrite = 1;
                PCSrc_jump = 2'b00;
                PCSrc_branch = 2'b00;

                regShouldWrite = 0;
                regAddress1 = entireOpCode[26:22];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[21:17];

                aluInputBSelect = 1;
                aluOpCode = 6'b100000;

                Immediate = entireOpCode[16:1];
                extendSelect = 1;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 0;

                memWrite = 1;
                memRead = 0;
                memToReg = 0;
            end

            slti:begin
                Reset = 0;
                isRtype = 0;
                isJal = 0;
                PCWrite = 1;
                PCSrc_jump = 2'b00;
                PCSrc_branch = 2'b00;

                regShouldWrite = 1;
                regAddress1 = entireOpCode[26:22];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[21:17];

                aluInputBSelect = 1;
                aluOpCode = 6'b101010;

                Immediate = entireOpCode[16:1];
                extendSelect = 1;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 0;

                memWrite = 0;
                memRead = 0;
                memToReg = 0;
            end

            sltiu:begin
                Reset = 0;
                isRtype = 0;
                isJal = 0;
                PCWrite = 1;
                PCSrc_jump = 2'b00;
                PCSrc_branch = 2'b00;

                regShouldWrite = 1;
                regAddress1 = entireOpCode[26:22];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[21:17];

                aluInputBSelect = 1;
                aluOpCode = 6'b101011;

                Immediate = entireOpCode[16:1];
                extendSelect = 0;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 0;

                memWrite = 0;
                memRead = 0;
                memToReg = 0;
            end

            beq:begin
                Reset = 0;
                isRtype = 0;
                isJal = 0;
                PCWrite = 1;
                PCSrc_jump = 2'b00;
                PCSrc_branch = 2'b01;

                regShouldWrite = 0;
                regAddress1 = entireOpCode[26:22];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[21:17];

                aluInputBSelect = 0;
                aluOpCode = 6'b100010;

                Immediate = entireOpCode[16:1];
                extendSelect = 1;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 0;

                memWrite = 0;
                memRead = 0;
                memToReg = 0;
            end

            bne:begin   //the entire opCode should put the bigger one on $rs.
                Reset = 0;
                isRtype = 0;
                isJal = 0;
                PCWrite = 1;
                PCSrc_jump = 2'b00;
                PCSrc_branch = 2'b10;

                regShouldWrite = 0;
                regAddress1 = entireOpCode[26:22];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[21:17];

                aluInputBSelect = 0;
                aluOpCode = 6'b100010;

                Immediate = entireOpCode[16:1];
                extendSelect = 1;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 0;

                memWrite = 0;
                memRead = 0;
                memToReg = 0;
            end

            j:begin
                Reset = 0;
                isRtype = 0;
                isJal = 0;
                PCWrite = 1;
                PCSrc_jump = 2'b11;
                PCSrc_branch = 2'b00;

                regShouldWrite = 0;
                regAddress1 = entireOpCode[26:22];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[21:17];

                aluInputBSelect = 1;
                aluOpCode = 6'b100010;

                Immediate = entireOpCode[16:1];
                extendSelect = 1;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 0;

                memWrite = 0;
                memRead = 0;
                memToReg = 0;
            end

            jal:begin
                Reset = 0;
                isRtype = 0;
                isJal = 1;
                PCWrite = 1;
                PCSrc_jump = 2'b11;
                PCSrc_branch = 2'b00;

                regShouldWrite = 0;
                regAddress1 = entireOpCode[26:22];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[21:17];

                aluInputBSelect = 1;
                aluOpCode = 6'b100010;

                Immediate = entireOpCode[16:1];
                extendSelect = 1;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 0;

                memWrite = 0;
                memRead = 0;
                memToReg = 0;
            end

            sw:begin
                Reset = 0;
                isRtype = 0;
                isJal = 0;
                PCWrite = 1;
                PCSrc_jump = 2'b00;
                PCSrc_branch = 2'b00;

                regShouldWrite = 0;
                regAddress1 = entireOpCode[26:22];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[21:17];

                aluInputBSelect = 1;
                aluOpCode = 6'b100000;

                Immediate = entireOpCode[16:1];
                extendSelect = 1;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 0;

                memWrite = 1;
                memRead = 0;
                memToReg = 0;
            end

            lw:begin
                Reset = 0;
                isRtype = 0;
                isJal = 0;
                PCWrite = 1;
                PCSrc_jump = 2'b00;
                PCSrc_branch = 2'b00;

                regShouldWrite = 1;
                regAddress1 = entireOpCode[26:22];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[21:17];

                aluInputBSelect = 1;
                aluOpCode = 6'b100000;

                Immediate = entireOpCode[16:1];
                extendSelect = 1;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 0;

                memWrite = 0;
                memRead = 1;
                memToReg = 1;
            end

            

            nop:begin
                Reset = 0;
                isRtype = 0;
                isJal = 0;
                PCWrite = 1;
                PCSrc_jump = 2'b00;
                PCSrc_branch = 2'b00;

                regShouldWrite = 0;
                regAddress1 = entireOpCode[26:22];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[21:17];

                aluInputBSelect = 0;
                aluOpCode = 6'b100000;

                Immediate = entireOpCode[16:1];
                extendSelect = 0;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 0;

                memWrite = 0;
                memRead = 0;
                memToReg = 0;
            end
            stop:begin
                Reset = 0;
                isRtype = 0;
                isJal = 0;
                PCWrite = 0;
                PCSrc_jump = 2'b00;
                PCSrc_branch = 2'b00;

                regShouldWrite = 0;
                regAddress1 = entireOpCode[26:22];
                regAddress2 = entireOpCode[21:17];
                regWriteAddress = entireOpCode[21:17];

                aluInputBSelect = 0;
                aluOpCode = 6'b100000;

                Immediate = entireOpCode[16:1];
                extendSelect = 0;

                jumpAddress = entireOpCode [26:1];
                jumpSrc = 0;

                memWrite = 0;
                memRead = 0;
                memToReg = 0;
            end





            default:begin
                $display($time ,"no match entireOpCode.");
            end

        endcase
    end

endmodule
