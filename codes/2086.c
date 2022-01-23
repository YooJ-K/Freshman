#include <stdio.h>

int main(void) {

	int a, b, c, sum;

	while (1) {

		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 && c==0) {
			break;
		}

		sum = b * b - 4 * a*c;
		
		if (sum>0) {
			printf("real\n");
		}
		else if (sum == 0) {
			printf("multiple\n");
		}
		else {
			printf("imaginary\n");
		}
	}
	return 0;
}