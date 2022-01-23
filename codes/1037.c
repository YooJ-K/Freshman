#include <stdio.h>

int main(void)
{
	int day, money, sum, test, b;


	scanf("%d", &test);
	
	while (test--) {
		scanf("%d", &day);

		b = day;
		sum = 0;

		while (day--) {
			scanf("%d", &money);
			sum = money + sum;
		}

		printf("%d %d\n", sum, sum / b);
	}


	return 0;

}
