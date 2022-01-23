#include<stdio.h>

int main() {

	int i, a, b, t, c, d, e, f, g, h, q, test;

	scanf("%d", &test);

	while (test--) {

		scanf("%d", &i);

		for (d = 1; d <= i; d++) {

			for (g = i; g > d; g--) {
				printf(" ");
			}


			for (f = 1; d >= f; f++) {
				printf("%d", f);
			}

			for (h = 1; h < d; h++) {
				printf("%d", f - 2);

				f--;
			}


			printf("\n");
		}


		for (a = 2; a <= i; a++) {

			for (b = 1; b < a; b++) {
				printf(" ");
			}

			q = 1;

			for (c = i; c >= a; c--) {
				printf("%d", q);

				q++;
			}

			for (e = i; e > a; e--) {
				printf("%d", q - 2);

				q--;
			}


			printf("\n");

		}
	}



	return 0;
}