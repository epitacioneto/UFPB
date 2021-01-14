#include <stdio.h>
#include <math.h>

int main (void) {

    float r;
    float pi = 3.14;
    float area;

    printf("Digite aqui o raio da sua circunferencia:\n");
    scanf("%f", &r);

    if (r > 0) {
        area = pi*(r*r);

        printf("A area da sua circunferencia eh: %f\n", area);
    }
    return 0;
}
