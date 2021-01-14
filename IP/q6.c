#include <stdio.h>
#include <math.h>

int main(void) {

    int x, y, z;
    int soma, produto;

    printf("Digite tres valores inteiros:\n");
    scanf("%d %d %d", &x, &y, &z);

    if(x,y,z > 0) {

        soma = x+y+z;
        produto = x*y*z;

        printf("A sua soma tem valor de %d e seu produto tem valor de %d.\n", soma, produto);
    }
    return 0;
}
