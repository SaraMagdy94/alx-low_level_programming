section .data
hello db 'Hello, Holberton',0

section .text
global main

extern printf
main:
mov rdi, hello
call printf

; Exit the program
mov eax, 0
ret

