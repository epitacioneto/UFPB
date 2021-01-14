#include <stdio.h>
#include <string.h>

int main(void) {
	char nome[100];
	int i, j, c;

	printf("Digite seu nome: \n");
	scanf("%s", nome);

	for(i = 0; nome[i] != '\0'; i++) {
		c = 0;
		printf("\n");
		for(j = 0; j <= i; j++) {
			printf("%c ", nome[c]);
			c++;
		}
	}

}