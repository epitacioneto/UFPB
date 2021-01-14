#include <stdio.h>

void ateN(int n) {
	int i, j, k;

	for(i = 1; i <= n; i++) {
		k = 1;
		printf("\n");
		for(j = 1; j <= i; j++) {
			printf("%d ", k++);
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
