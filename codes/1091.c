#include <stdio.h>

int main(void) {

	int a, b, c, max, sum, test;
	float mm;

	scanf("%d", &test);

	while (test--) {

		scanf("%d %d %d", &a, &b, &c);

		if (b*b - 4 * a*c >0) {
			printf("This Equation has two answers\n");
		}
		else if (b*b - 4 * a*c == 0) {
			printf("This Equation has only one answer\n");
		}
		else {
			printf("This Equation has no answer\n");
		}

	}

	return 0;
}