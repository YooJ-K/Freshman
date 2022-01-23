#include<stdio.h>

int main(void) {
	int i, a, b, c, e;
	int test;

	scanf("%d", &test);

	while (test--) {

		scanf("%d", &i);

		if (i % 2 == 0) {
			i = i + 1;
			i = (i + 1) / 2;
		}
		else {
			i = i;
			i = (i + 1) / 2;
		}

		for (a = 1; a <= i; a++) {
			for (b = i; b > a; b--) {
				printf(" ");
			}
			printf("$");

			if (a > 1) {

				for (c = 1; c <= 2 * a - 3; c++) {
					printf(" ");
				}

				printf("$");

			}
			printf("\n");
		}

		for (a = 2; a <= i; a++) {
			for (b = 1; b < a; b++) {
				printf(" ");
			}
			printf("$");
			for (c = i; c > a; c--) {
				printf(" ");
			}

			for (e = i - 1; e > a; e--) {
				printf(" ");
			}

			if (a < i) {
				printf("$");
			}
			printf("\n");
		}
	}

	return 0;
}