#include <stdio.h>

int main(void) {
	float bruto, desconto, liquido;

	printf("Digite seu salario bruto: ");
	scanf("%f", &bruto);

	if(bruto < 420) {
		desconto = bruto * (0.08);
		liquido = bruto - desconto;
	}
	if(bruto >= 420 &&  bruto < 1350) {
		desconto = bruto * (0.09);
		liquido = bruto - desconto;
	}
	if(bruto >= 1350) {
		desconto = bruto * (0.1);
		liquido = bruto - desconto;
	}

	printf("O valor do desconto foi R$%.2f e o valor do salario liquido foi R$%.2f", desconto, liquido);

return 0;
}