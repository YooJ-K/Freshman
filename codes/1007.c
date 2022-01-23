#include <stdio.h>

int main(void)
{
	int a, b;
	float c;

	scanf("%d", &b);
	scanf("%d", &a);

	c = a  / (1 + 0.01 * b);

	printf("%.2f\n", c);

	return 0;
}