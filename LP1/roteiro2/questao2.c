#include <stdio.h>

void ateN(int n) {
	int i, j;

	for(i = 1; i <= n; i++) {
		printf("\n");
		for(j = 1; j <= i; j++) {
			printf("%d ", i);
		}
	}
}

int main(void) {

	int n;

	printf("Digite n: \n");
	scanf("%d", &n);

	ateN(n);

	return 0;
}
