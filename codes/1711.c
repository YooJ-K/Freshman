#include <stdio.h>

int main(void) {

	int a, b;
	double sum;

	scanf("%d %d", &a, &b);

	sum = a * (b * 0.01 + 1);

	printf("%.1lf\n", sum);
	
	return 0;
}