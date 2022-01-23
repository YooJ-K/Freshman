#include <stdio.h>

int main(void)
{
	int test, x, y;
	char c;

	scanf("%d", &test);

	while (test--) {
		scanf("%d %d %c", &x, &y, &c);

		if (c == '+')
			printf("%d\n", x + y);
		else if (c == '*')
			printf("%d\n", x * y);
		else if (c == '/') {
			if (y == 0)
				printf("-9999\n");
			else
				printf("%d\n", x / y);
		}
		else if (c == '-')
			printf("%d\n", x - y);



	}

}
