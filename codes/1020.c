#include <stdio.h>

int main(void)
{
	int test, a, b, first;

	scanf("%d", &test);

	while (test--) {
		scanf("%d", &first);

		a = 2;
		b = first - 2;

		if (b >= 2) {
			if (b % 2 == 0) {
				printf("%d %d\n", a, b);
			}
			else
				printf("NO\n");

		}
		else
			printf("NO\n");
	}

	return 0;
}