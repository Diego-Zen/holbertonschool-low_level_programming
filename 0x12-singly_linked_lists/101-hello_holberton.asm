	segment .data
msg: 	db 	"Hello, Holberton",0x0a
len:	equ	$-msg
	segment .text
	global main
	extern write, exit
main:
	mov 	edx, len
	mov 	rsi, msg
	mov 	edi, 1
	call	write
	xor 	edi, edi
	call 	exit
