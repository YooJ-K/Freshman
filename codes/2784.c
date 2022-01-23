#include <stdio.h>

int main(void){

	int a, b, c, d, e, f, g, sum1, sum2;

	scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);

	sum1 = a + b+ c+ d+ e+ f+ g;

	printf("%d %d\n", sum1, sum1/7);
	printf("%d\n", sum1 *7000);

	return 0;
}