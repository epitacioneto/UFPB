#include <stdio.h>

void converteHoras(int hora, int minuto) {

	if(hora > 12 && hora != 24) {
		printf("Sao %d:%d PM", hora-12, minuto);
	}
	if(hora <= 12) {
		printf("Sao %d:%d AM", hora, minuto);
	}
	if(hora == 24) {
		printf("Sao %d:%d AM", hora-hora, minuto);
	}

}

int main(void) {

	int hora, minuto;

	printf("Digite as horas (em notacao de 24): \n");
	scanf("%d", &hora);
	printf("Digite os minutos (em notacao de 24): \n");
	scanf("%d", &minuto);

	converteHoras(hora, minuto);

	return 0;
}
