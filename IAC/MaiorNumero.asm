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
  _a dd 17
  _b dd 15

.code
start:
    MOV eax, _a
    CMP eax, _b
    JGE primeiromaior
    JL segundomaior


primeiromaior:
    printf("%i eax eh maior que %i b", eax, _b)
    JMP terminaq

segundomaior:
    printf("%i b eh maior que %i eax", _b, eax)

terminaq:
    
    invoke ExitProcess, 0
end start