section		.text
	extern  printf
	global  main

main:
	mov		edit, msg
	mov		eax, 0
	call	printf


section		.data
	msg db  'Hallo, Holberton', 0xa, 0
