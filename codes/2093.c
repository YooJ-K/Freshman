#include <stdio.h>

int main(void) {

	int test, t, sum;

	scanf("%d", &test);

	while (test--) {

		scanf("%d", &t);

		sum = 1;

		if (t < 0) {
			printf("Impossible\n");
		}
		else if(t>30) {
			printf("Impossible\n");
		}

		else if (t == 0) {
			printf("1\n");
		}

		else {
			while (t--) {
				sum = sum * 2;
			}

			printf("%d\n", sum);
		}

	}

}