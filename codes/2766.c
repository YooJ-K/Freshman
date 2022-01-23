#include<stdio.h>

int main() {

	int a, b, c, d, e, f;

	scanf("%d", &a);

	for (c = 1; c <= a; c++) {

		for (b = a - c; b > 0; b--) {
			printf(" ");
		}

		for (d = 1; d <= c * 2 - 1; d++) {
			printf("*");
		}

		printf("\n");

	}

	for (e = 1; e < a; e++) {

		for (b = 1; b <= e; b++) {
			printf(" ");
		}

		for (d = e; d < a; d++) {
			printf("*");
		}

		for (f = a-1; f > e; f--) {
			printf("*");
		}

		printf("\n");
	}
	return 0;
}