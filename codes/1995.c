#include <stdio.h>

int main(void) {

	int a, i, b, c, d, e, f;

	scanf("%d", &a);

	for (c = 1; c <= a; c++) {

		for (d = 1; d < c; d++) {
			printf(" ");
		}

		for (e = a; e >= c; e--) {
			printf("@");
		}

		for (f = a; f > c; f--) {
			printf("@");
		}

		

		printf("\n");
	}

	for (i = 1; i <= 2*a-1; i++) {

		for (b = 1; b <= 2*a-1; b++) {
			printf("@");
		}

		printf("\n");
	}

	

	return 0;
}