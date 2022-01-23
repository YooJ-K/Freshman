#include <stdio.h>

int main(void) {

	int a, b, c, d, e;
	int test;

	scanf("%d", &test);

	while (test--) {

		scanf("%d %d %d %d", &a, &b, &c, &d);

		if (b*b == a * c) {
			e = (b / a)*d;
		}
		else {
			e = (b - a) + d;
		}
		printf("%d\n", e);
	}

	return 0;
}