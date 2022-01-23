#include <stdio.h>

int main(void) {

	int a, b, c, d, e, f, g;
	float sum;

	scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);

	sum = (a + b + c + d + e + f + g);

	printf("%.2f", sum / 7);

	return 0;
}