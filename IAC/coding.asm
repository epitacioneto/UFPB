.386

.model flat, stdcall
option casemap :none
include \masm32\include\windows.inc
include \masm32\include\kernel32.inc
include \masm32\include\masm32.inc
include \masm32\include\msvcrt.inc
include \masm32\macros\macros.asm
includelib \masm32\lib\kernel32.lib
includelib \masm32\lib\masm32.lib
includelib \masm32\lib\msvcrt.lib

.data
  _a dd 16
  _b dd 2

.code
start:
    MOV edx, 0
    MOV eax, _a

    DIV _b

    CMP edx, 1
    JE impar

    printf("%i eh par", _a)
    JMP terminaq

impar:
    printf("%i eh impar", _a)

terminaq:
    
    invoke ExitProcess, 0
end start