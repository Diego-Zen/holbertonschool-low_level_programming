section .data				;data section for declaring constants
	msg db "Hello, Holberton",0x0a,0	;msg constant

section .text				;text section is for code
	global _start			;tells the kernel where to start

_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 16
	syscall

	mov rax, 60
	mov rdi, 0
	syscall
