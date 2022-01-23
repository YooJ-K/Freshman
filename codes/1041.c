#include <stdio.h>

int main(void) {

	int sum, t, i;
	int test;

	scanf("%d", &test);

	while (test--) {

		i = 1;
		sum = 1;

		scanf("%d", &t);

		while (t >= i) {

			if (sum%i == 0) {
				sum = sum / i;
			}
			else {
				sum = sum * i;
			}

			i++;
		}

		printf("%d\n", sum);
	}

	return 0;
}