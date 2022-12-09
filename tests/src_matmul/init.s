# RISC-V baremetal init.s
# This code is executed first.
.data
array: .word 1234

.section .text.init
entry:

    la    sp, __sp   # set up the stack pointer, using a constant defined in the linker script.

    li t0, 0x21000000
	lw t1, 0(t0)
	addi t1, t1, 100
	li t0, 0x22000000
	sw t1, 0(t0)

    li t0, 0x21000004
	lw t1, 0(t0)
	li t0, 0x22000004
	sw t1, 0(t0)

	la t0, INT
	la s1, array
	csrw  mtvec, t0
	csrsi mstatus, 8
	li t0, 0x880
	csrs mie, t0

    call _start		# use this if using C runtime, std c library
  
 #   call  main          # call the main function if barebones assembly/C

end:
    j end               # loop when finished if there is no environment to return to.

INT:
	addi sp, sp, -8
	sw t0, 0(sp)
	sw t1, 4(sp)
	# Increment LEDS
	la t0, array
	lw t1, 0(t0)
	addi t1, t1, 1
	sw t1, 0(t0)
	li t0, 0x11080000
	sw t1, 0(t0)
	
	#Update MTIMECMP Low Bits
	li t0, 0x21000000
	lw t1, 0(t0)
	addi t1, t1, 50
	li t0, 0x22000000
	sw t1, 0(t0)

  	#Update MTIMECMP High Bits
  	li t0, 0x21000004
	lw t1, 0(t0)
	li t0, 0x22000004
	sw t1, 0(t0)
	
	#Restore From Stack
	lw t1, 4(sp)
	lw t0, 0(sp)
	addi sp, sp, 8
	#Return
	mret