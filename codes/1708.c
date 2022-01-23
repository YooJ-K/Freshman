#include <stdio.h>

int main(void) {

	int  a, b, c, d;
	float sum;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	sum = (a - b)*c / (float)d;

	printf("%.2f\n", sum);

	return 0;
}