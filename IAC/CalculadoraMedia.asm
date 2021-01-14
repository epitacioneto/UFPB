.386

;-------------- -------Alunos: Epitacio Neto e Julio Gusmao --------------------

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

;variaveis para nota
nota1 real8 ?
nota2 real8 ?
nota3 real8 ?

;variaveis para calculo da media
somaDasNotas real8 ?
mediaDasNotas real8 3.0 ;numero de avaliacoes

;variaveis para calculo de nota na final
notaParaFinal real8 25.0
mediaNotasFinal real8 2.0 ;numero de avaliacoes

;variaveis para verificar se aluno foi aprovado ou reprovado ou digitou errado
aprovado real8 7.0 ;nota minima para ser aprovado
reprovado real8 4.0 ;nota minima para ir a final
digitouErrado real8 10.0 ;nota maxima possivel

;strings para read/write console
mensagem1 db 'Digite a primeira nota: '
mensagem2 db 'Digite a segunda nota: '
mensagem3 db 'Digite a terceira nota: '
mensagem4 db 'Aluno aprovado.'
mensagem5 db 'Aluno reprovado.'
mensagem6 db 'Nota que o aluno precisa na final: '
mensagem7 db 'Digite valores validos para nota. '

;variaveis para read/write console
consoleoutput real8 ?
bytesWritten dd ?

;notas armazenadas em strings para input
nota1str db 4 dup(?)
nota2str dw 4 dup(?)
nota3str dw 4 dup(?)
mediaStr dw 4 dup(?)
notaFinal dw 4 dup(?)

.code

TratamentoDeCarriage:
    mov al, [esi] ; Mover caracter atual para al
    inc esi ; Apontar para o proximo caracter
    cmp al, 48 ; Verificar se menor que ASCII 48 -FINALIZAR
    jl terminar
    cmp al, 58 ; Verificar se menor que ASCII 58 -CONTINUAR
    jl TratamentoDeCarriage
    terminar:
    dec esi ; Apontar para caracter anterior
    xor al, al ; 0 ou NULL
    mov [esi], al ; Inserir NULL logo apos o termino do numero
    xor eax, eax
    ret

TratamentoDeInput:
    ;nota1
    push STD_OUTPUT_HANDLE
    call GetStdHandle
    invoke WriteConsole, eax, addr mensagem1, sizeof mensagem1, addr bytesWritten, NULL
    
    push STD_INPUT_HANDLE
    call GetStdHandle
    invoke ReadConsole, eax, addr nota1str, sizeof nota1str, addr bytesWritten, NULL
    ;mov esi, offset nota1str
    ;call TratamentoDeCarriage
    ;invoke atodw, addr [nota1str]
    ;mov nota1, eax
                               
    invoke StrToFloat, addr [nota1str], addr [nota1]
    
    ;nota2
    push STD_OUTPUT_HANDLE
    call GetStdHandle
    invoke WriteConsole, eax, addr mensagem2, sizeof mensagem2, addr bytesWritten, NULL
    
    push STD_INPUT_HANDLE
    call GetStdHandle
    invoke ReadConsole, eax, addr nota2str, sizeof nota2str, addr bytesWritten, NULL
    ;mov esi, offset nota2str
    ;call TratamentoDeCarriage
    ;invoke atodw, addr [nota2str]
    ;mov nota2, eax
    
    invoke StrToFloat, addr [nota2str], addr[nota2]
    
    ;nota3
    push STD_OUTPUT_HANDLE
    call GetStdHandle
    invoke WriteConsole, eax, addr mensagem3, sizeof mensagem3, addr bytesWritten, NULL
    
    push STD_INPUT_HANDLE
    call GetStdHandle
    invoke ReadConsole, eax, addr nota3str, sizeof nota3str, addr bytesWritten, NULL
    ;mov esi, offset nota3str
    ;call TratamentoDeCarriage
    ;invoke atodw, addr [nota3str]
    ;mov nota3, eax
    
    invoke StrToFloat, addr [nota3str], addr[nota3]
    ret


CalculoMedia:
    
;--------------------------------- Somar Notas --------------------------------------

    finit
    fld [nota1] 
    fld [nota2] 
    fadd ;nota1 = nota1 + nota2
    fld [nota3] 
    fadd ;nota1 = nota1 + nota 2 + nota3 
    fstp [somaDasNotas]    

;------------------------------- Media das Notas -------------------------------------

    finit                         
    fld [somaDasNotas] 
    fld [mediaDasNotas]
    fdiv ;mediaDasNotas = somaDasNotas / mediaDasNotas (contem o valor 3 armazenado)
    fstp [mediaDasNotas]    

;--------------------------------- Aprovacao ------------------------------------------

    finit
    fld [aprovado]
    fld [mediaDasNotas]
    fcompp
    fstsw ax
    fwait
    sahf
    jae AlunoAprovado ;mediaDasNotas >= 7?

;--------------------------------- Reprovacao -----------------------------------------

    finit
    fld [reprovado]
    fld [mediaDasNotas]
    fcompp
    fstsw ax
    fwait
    sahf
    jb AlunoReprovado ;mediaDasNotas < 4?

;--------------------------------- Purgatorio -----------------------------------------

    finit
    fld [notaParaFinal]
    fld [somaDasNotas]
    fsub ;notaParaFinal = notaParaFinal (contem o valor 25 armazenado) - somaDasNotas 
    fstp [notaParaFinal]

    finit
    fld [notaParaFinal]
    fld [mediaNotasFinal]
    fdiv ;notaParaFinal = notaParaFinal / mediaNotasFinal (contem 2 armazenado)
    fstp [notaParaFinal]
    jmp AlunoNaFinal
    

;----------------------------------- "Main" -------------------------------------------
 
start:
    xor eax, eax
    xor ebx, ebx
    call TratamentoDeInput
    jmp CalculoMedia

AlunoReprovado:
    push STD_OUTPUT_HANDLE
    call GetStdHandle
    invoke WriteConsole, eax, addr mensagem5, sizeof mensagem5, addr bytesWritten, NULL
    jmp termina

AlunoAprovado:
    push STD_OUTPUT_HANDLE
    call GetStdHandle
    invoke WriteConsole, eax, addr mensagem4, sizeof mensagem4, addr bytesWritten, NULL
    jmp termina

AlunoNaFinal:
    push STD_OUTPUT_HANDLE
    call GetStdHandle
    invoke WriteConsole, eax, addr mensagem6, sizeof mensagem6, addr bytesWritten, NULL
    invoke FloatToStr, [notaParaFinal], addr [notaFinal]
    push STD_OUTPUT_HANDLE
    call GetStdHandle
    invoke WriteConsole, eax, addr notaFinal, sizeof notaFinal, addr bytesWritten, NULL

termina:


invoke ExitProcess, 0
end start
