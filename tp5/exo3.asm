.data
tableau: .word 1, 2, 3, 4, 5
taille: .word 5
somme: .word 0
.text
.globl main
.main:
lw $t0, taille

lw $t1, somme

la $t2, tableau 
la $t3, fin

loop:
beq $t2, $t3, end 
lw $t4, 0($t2)

add $t1, $t1, $t4 
addi $t2, $t2, 4
j loop

end:
sw $t1, somme


lw $a0, somme
li $v0, 1
syscall
li $v0, 10
syscall
