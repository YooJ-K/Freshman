#include<stdio.h>

int main() {

	int test, price, sum, sum1;

	scanf("%d", &test);

	while (test--) {

		scanf("%d", &price);

		sum = price / 30000;

		if (price > 50 * 30000) {
			printf("No\n");
		}
		else {

			if (price % 30000 == 0) {
				printf("%d\n", sum);
			}
			else if (price % 30000 != 0) {
				printf("%d\n", sum + 1);
			}

		}
		

		
	}

	return 0;
}