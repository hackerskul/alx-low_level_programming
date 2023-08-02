section .data
    hello_message db "Hello, Holberton!", 10    ; 10 is the ASCII code for newline
    hello_len equ $ - hello_message           ; Calculate the length of the message

section .text
global main

main:
    ; Write "Hello, Holberton!" to standard output
    mov rdi, 1                  ; file descriptor 1 (stdout)
    mov rax, 1                  ; syscall number for sys_write
    mov rsi, hello_message      ; pointer to the message to print
    mov rdx, hello_len         ; length of the message
    syscall

    ; Exit the program
    mov rax, 60                 ; syscall number for sys_exit
    xor rdi, rdi                ; exit status 0
    syscall
section .note.GNU-stack noalloc noexec nowrite progbits

