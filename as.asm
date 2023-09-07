global _start
    section .text
_start:
    mov rax, 1
    mov rdi, 1
    mov rsi, [rsp+16]
    inc byte [rsi]
    mov byte [rsi+1], `\n`
    mov rdx, 2
    syscall
exit:
    mov rax, 60
    xor rdi, rdi
    syscall
