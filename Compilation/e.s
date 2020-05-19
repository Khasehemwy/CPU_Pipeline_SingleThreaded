msg:    

main:
        li $t1,1
        li $t2,0
    fc: add $t2,$t1,$t2
        addi $t1,1
        slti $t3,$t1,11
        bne $t3,$0,fc
        nop