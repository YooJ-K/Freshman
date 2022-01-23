#include <stdio.h>

int main(void)
{

	int test,price, day, don, p;

	scanf("%d", &test);

	while(test--){

		don = 0;
		day = 1;

		scanf("%d", &price);

		while(1){

			don = 5000 + don + 200*(day / 10);

			if(don>=price)
				break;

			day++;


		}

		printf("%d\n", day);

	}

	return 0;
}