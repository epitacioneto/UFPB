#include <stdio.h>

int eh_divisivel(int n, int divisor) {
	int divisivel;

	if(n % divisor == 0) {
		divisivel = 1;
	}else {
		divisivel = 0;
	}

return divisivel;
}

int eh_primo(int n) {
	int i;
	static int j;
	int ehPrimo;

	for(i = 1; i <= n; i++) {
		if(eh_divisivel(n, i)) {
			j++;
		}
	}

	if(j == 2) {
		ehPrimo = 1;
	}else {
		ehPrimo = 0;
	}

return ehPrimo;
}

int main(void) {
	int n, divisor;
	int num, primo;

	printf("Digite um numero: \n");
	scanf("%d", &n);
	printf("Digite um numero para ser o divisor: \n");
	scanf("%d", &divisor);

	num = eh_divisivel(n, divisor);
	printf("%d\n", num);

	printf("Digite um numero para verificar se eh primo: \n");
	scanf("%d", &n);

	primo = eh_primo(n);
	printf("%d", primo);

return 0;
}