#include <stdio.h>
#include <math.h>

int main(void) {

    float x, y;

    printf("Digite dois valores:\n");
    scanf("%f %f", &x, &y);

    if(x > y) {

        printf("O maior numero eh %f\n", x);

    } else{
        if(y > x) {

            printf("O maior numero eh %f\n", y);
        }
    }

    return 0;

}
