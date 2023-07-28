section .data
    hello_message db "Hello, Holberton,", 0
    format db "%s", 10, 0  ; "%s" is the format specifier for a string, 10 is the ASCII code for a newline, and 0 is the null terminator

section .text
    global _start

_start:
    ; Set up the stack pointer (required by C library functions)
    mov rdi, rsp

    ; Call printf with the hello_message string as the argument
    mov rsi, hello_message
    mov rax, 0   ; RAX = 0 to indicate printf
    call printf

    ; Exit the program
    mov rax, 60   ; RAX = 60 to indicate exit system call
    xor rdi, rdi  ; RDI = 0 to indicate success exit code
    syscall

section .bss
    ; Reserve space to hold the return value of printf
    output resq 1

extern printf

section .data
    hello_message db "Hello, Holberton,", 0
    format db "%s", 10, 0  ; "%s" is the format specifier for a string, 10 is the ASCII code for a newline, and 0 is the null terminator

