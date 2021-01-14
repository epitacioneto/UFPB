#include <stdio.h>

int main(void) {
	int n, i;
	int termo1 = 1, termo2;

	printf("Digite o numero de termos: \n");
	scanf("%d", &n);

	int termos[n];
	termos[0] = 1;
	termos[1] = 1;

	for(i = 2; i < n; i++) {
		termo2 = termos[i-2];
		termo1 += termo2;
		termos[i] = termo1;
	}
	for(i = 0; i < n; i++) {
		printf("%d ", termos[i]);
	}

return 0;
}
