#include <stdio.h>

int main(void) {

	int a, b, c, max, sum, test;
	float mm;

	scanf("%d", &test);

	while (test--) {

		max = 0;

		scanf("%d %d %d", &a, &b, &c);

		if (a >= max) {
			max = a;
		}

		if (b >= max) {
			max = b;
		}

		if (c >= max) {
			max = c;
		}

		if (max == a && a <= b + c) {
			sum = a * a;
			if (sum == b * b + c * c) {
				mm = b * c / 2;

				printf("%.2f\n", mm);
			}
			else {
				printf("-2\n");
			}
		}

		else if (max == b && b <= a + c) {
			sum = b * b;
			if (sum == a * a + c * c) {
				mm = a * c / 2;

				printf("%.2f\n", mm);
			}
			else {
				printf("-2\n");
			}
		}

		else if (max == c && c <= b + a) {
			sum = c * c;
			if (sum == b * b + a * a) {
				mm = b * a / 2;

				printf("%.2f\n", mm);
			}
			else {
				printf("-2\n");
			}
		}

		else {
			printf("-1\n");
		}
	}

	return 0;
}