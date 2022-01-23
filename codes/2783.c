#include <stdio.h>

int main(void){

	int a, b, c, d, e, f, g, h, sum1, sum2;

	scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);

	sum1 = a + c+e+g;
	sum2 = b + d + f+ h;

	printf("%d %d\n", sum2, sum1);

	return 0;
}