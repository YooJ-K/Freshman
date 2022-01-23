#include <stdio.h>

int main(void)
{
	int m, d1, d2, d3, test;

	scanf("%d", &test);
	
	while (test--) {

		scanf("%d %d %d %d", &m, &d1, &d2, &d3);

		if (m%d1 == 0 && m%d2 == 0 && m%d3 == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}