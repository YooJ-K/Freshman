#include<stdio.h>

int main() {

	int i, a, b, t, c, d, e, f, g, h;

	scanf("%d", &i);

	for (a = 1; a <= i; a++) {

		for (b = 1; b < a; b++) {
			printf(" ");
		}

		for (c = i; c >= a; c--) {
			printf("@");
		}

		for (e = i; e > a; e--) {
			printf("@");
		}

		
		printf("\n");

	}


	for (d = 2; d <=i; d++) {

		for (g = i; g > d; g--) {
			printf(" ");
		}


		for (f = 1; d >= f; f++) {
			printf("@");
		}

		for (h = 1; h < d; h++) {
			printf("@");
		}

		
		printf("\n");
	}

	return 0;
}