#include <stdio.h>

int main(void) {
	char nome[10];

	printf("Digite seu nome: \n");
	scanf("%s", nome);

	for(i = 0; i < 10; i++) {
		printf("%c\n", nome[i]);
	}


return 0;
}