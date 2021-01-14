#include <stdio.h>
#include <string.h>

int main(void) {

	int i, x = 1;
	char str[10];

	printf("Valida e corrige numero de telefone\n");
	printf("Telefone: ");
	scanf("%s", str);

	x = strlen(str);

	if(x < 8) {
		printf("Telefone possui 7 digitos. Vou acrescentar o digito 3 na frente.\n");
		printf("Telefone corrigido sem formatacao: 3");
		for(i = 0; i < 8; i++) {
			if(i == 3) {
				printf("-");
			}
			printf("%c", str[i]);
		}
	}

	if(x >= 8 && str[0] != '3') {
		printf("Telefone corrigido: 3");
		printf("%s", str);
	}

	if(x >= 8 && str[0] == '3') {
		printf("Telefone corrigido: ");
		if(i == 4) {
			printf("-");
		}
		printf("%c", str[i]);
	}

return 0;
}