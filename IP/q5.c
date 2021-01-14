#include <stdio.h>
#include <math.h>

int main(void) {

    float polegada;
    float centimetro = 2.54;
    float resultado;

    printf("Digite um valor em polegada a ser convertido para centimetro:\n");
    scanf("%f", &polegada);

    if(polegada > 0) {

        resultado = polegada * centimetro;

        printf("O valor digitado convertido para centimetro eh igual a: %f\n", resultado);
    }
    return 0;
}
