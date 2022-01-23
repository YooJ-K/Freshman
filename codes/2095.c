#include <stdio.h>

int main(void) {

	int a, i, b, c, d, e;

	scanf("%d", &a);

	for (i = 1; i <= a; i++) {

		for (b = 1; b <= 2*a-1; b++) {
			printf("%%");
		}

		printf("\n");
	}

	for (c = 1; c <= a; c++) {

		for (e = a; e > c; e--) {
			printf(" ");
		}

		for (d = 1; d <= 2*c-1; d++) {
			printf("%%");
		}

		printf("\n");
	}

	return 0;
}