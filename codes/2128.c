#include <stdio.h>

int main(void) {

	int a, b, c, k, max, min, test;

	min = 0;

	scanf("%d", &test);

	while (test--) {

		scanf("%d %d %d", &a, &b, &c);

		if (a == b && a == c && b == c) {
			k = 10000 + a * 1000;
		}
		else if (a != b && b != c && a != c) {

			max = 0;

			if (a >= max) {
				max = a;
			}

			if (b >= max) {
				max = b;
			}

			if (c >= max) {
				max = c;
			}

			k = max * 100;

		}
		else {
			if (a == b && a != c && b != c) {
				k = 1000 + a * 100;
			}
			else if (b == c && c != a) {
				k = 1000 + b * 100;
			}
			else {
				k = 1000 + a * 100;
			}
		}

		

		if (min <= k) {
			min = k;
		}
	}

	printf("%d\n", min);


	return 0;
}