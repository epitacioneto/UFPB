#include <stdio.h>
#define num_pessoas 10

int main(void) {
	float altura[num_pessoas];
	float ehMaior = 0, ehMenor = 200;
	float mediaMasc, mediaFem;
	float somaMasc = 0, somaFem = 0;
	char sexo[num_pessoas];
	int posicaoMaior, posicaoMenor, i;
	static int totalMasc, totalFem;


	for(i = 0; i < num_pessoas; i++) {
		printf("Digite a altura (pessoa %d): \n", i+1);
		scanf("%f", &altura[i]);
		printf("Digite o sexo (pessoa %d): \n", i+1);
		scanf("%*c%c", &sexo[i]);
	}

	for(i = 0; i < num_pessoas; i++) {
		if(altura[i] > ehMaior) {
			ehMaior = altura[i];
			posicaoMaior = i;
		}
		if(altura[i] < ehMenor) {
			ehMenor = altura[i];
			posicaoMenor = i;
		}
		if(sexo[i] == 'F') {
			somaFem += altura[i];
			mediaFem = somaFem/i;
			totalFem++;
		}
		if(sexo[i] == 'M') {
			somaMasc += altura[i];
			mediaMasc = somaMasc/i;
			totalMasc++;
		}
	}

	printf("Maior altura: %.2f\tSexo: %c\n", ehMaior, sexo[posicaoMaior]);
	printf("Menor altura: %.2f\tSexo: %c\n", ehMenor, sexo[posicaoMenor]);
	printf("Media de altura(M): %.2f\tTotal(M): %d\n", mediaMasc, totalMasc);
	printf("Media de altura(F): %.2f\tTotal(F): %d\n", mediaFem, totalFem);

return 0;
}
