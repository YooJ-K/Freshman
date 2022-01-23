#include <stdio.h>

int main()
{

	int m, n, k, sum, sum2;

	while (1) {
		scanf("%d %d %d", &m, &n, &k);

		if (m == 0 && n == 0 && k == 0) {
			break;
		}

		sum = n * (n + 1) / 2 - m * (m - 1) / 2;

		sum2 = sum % k;

		if (sum2 == 0) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}