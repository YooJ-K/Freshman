#include<stdio.h>

int main(void) {

	int b, day;
	long long a, v, sum;

	sum = 0;
	day =1 ;

	scanf("%d %d %d", &a, &b, &v);

	while (1) {
		sum = sum + a;

		if (sum>= v) {
			break;
		}
		else {
			sum = sum - b;
			day++;
		}
	}

	printf("%d\n", day);

	return 0;
}