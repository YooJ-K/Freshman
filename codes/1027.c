#include <stdio.h>

int main(void) {

	int a, test, sum;

	scanf("%d", &test);

	while (test--) {
		scanf("%d", &a);

		sum = a * (a + 1) / 2;

		printf("%d\n", sum);
	}
	

	return 0;
}