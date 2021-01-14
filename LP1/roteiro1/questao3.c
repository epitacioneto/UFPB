#include <stdio.h>

int main (void) {
	int maiorValor = 0, valor;

	while(valor != 0) {
		printf("Digite um valor: \n");
		scanf("%d", &valor);

		if(valor > maiorValor) {
			maiorValor = valor;
			printf("O maior valor digitado eh %d\n", maiorValor);
		}
	}
	printf("Ate logo!");

return 0;
}
