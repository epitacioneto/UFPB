#include <stdio.h>

int main(void) {

	int idade;
	float sapato = 100, desconto;

	printf("Digite sua idade para calcularmos o valor com desconto aplicado: \n");
	scanf("%d", &idade);

	if(idade <= 18) {
		desconto = sapato * (0.1);
		sapato = sapato - desconto;
		printf("O valor do desconto foi R$%.2f e o preco final do sapato foi R$%.2f", desconto, sapato);
	}else {
		desconto = sapato * (0.2);
		sapato = sapato - desconto;
		printf("O valor do desconto foi R$%.2f e o preco final do sapato foi R$%.2f", desconto, sapato);
	}

return 0;
}
