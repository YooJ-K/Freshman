#include <stdio.h>

int main(void)
{
	int a, b, c, x, y, z, sum1, sum2, sum3, total, test;

	scanf("%d", &test);

	while (test--) {
		scanf("%d %d %d", &a, &b, &c);
		scanf("%d %d %d", &x, &y, &z);

		if (x - a <= 5 && x - a >= -5) {
			if (x >= a)
				sum1 = x - a;
			else
				sum1 = a - x;
		}
		else {
			if (x >= a)
				sum1 = 10 - (x - a);
			else
				sum1 = 10 - (a - x);
		}

		if (y - b <= 5 && y - b >= -5) {
			if (y >= b)
				sum2 = y - b;
			else
				sum2 = b - y;
		}
		else {
			if (y >= b)
				sum2 = 10 - y + b;
			else
				sum2 = 10 - b + y;
		}

		if (z - c <= 5 && z - c >= -5) {
			if (z >= c)
				sum3 = z - c;
			else
				sum3 = c - z;
		}
		else {
			if (z >= c)
				sum3 = 10 - z + c;
			else
				sum3 = 10 - c + z;
		}

		total = sum1 + sum2 + sum3;
		printf("%d\n", total);
	}

	return 0;

}