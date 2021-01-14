#include <stdio.h>
#include <math.h>

int main(void) {

    int x, y, z;

    printf("Digite tres numeros inteiros:\n");
    scanf("%d %d %d", &x, &y, &z);

    if(x > y && x > z) {

        printf("O maior valor eh: %d\n", x);
    }

    if (y > x && y > z) {

        printf("O maior valor eh: %d\n", y);
    }

    if (z > x && z > y) {

        printf("O maior valor eh: %d\n", z);

    } else {
        if(x < 0 || y < 0 || z < 0) {

           printf("O seu valor nao eh um numero inteiro");

           }
    }

    return 0;
}
