#include <stdio.h>

int main(void) {

	int test, a, b, sum1, sum2;

	scanf("%d", &test);

	while (test--) {

		scanf("%d %d", &a, &b);

		if (a > b) {

			sum1 = (a - b) /25000;
			sum2 = (a-b) % 25000;

			if (sum2 != 0)
				printf("%d\n", sum1 + 1);
			else
					printf("%d\n", sum1);

		}
		else if (a <= b)
			printf("0\n");

	}

	return 0;
}