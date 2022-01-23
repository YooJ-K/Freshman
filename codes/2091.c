#include <stdio.h>

int main()
{
	int m, n, i, t, sum;

	while (1) {
		i = 1;
		
		scanf("%d %d", &m, &n);

		if (m == 0 && n == 0) {
			break;
		}

		t = m;
		
		while (t >= i) {

			m = m + i;
			i = i + 2;

		}

		sum = m % n;

		
		if (sum == 0) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}