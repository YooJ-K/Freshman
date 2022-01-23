#include <stdio.h>

int main(){

	int a, b, c, d, e, f, sum1, sum2;

	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	sum1= a+ c+ e;
	sum2 = b + d+ f;

	printf("%d %d\n", sum1, sum2);

	return 0;
}