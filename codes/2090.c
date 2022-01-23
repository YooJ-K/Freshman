#include <stdio.h>

int main(void) {

	int a, b, c, d, e;

	while (1) {

		scanf("%d", &a);

		if (a == 0) {
			break;
		}

		if (a % 2 == 0) {
			b = a / 2;
		}
		else {
			b = a;
		}

		if (b % 3 == 0) {
			c = b / 3;
		}
		else {
			c = b;
		}

		if (c % 5 == 0) {
			d = c / 5;
		}
		else {
			d = c;
		}

		if (d % 7 == 0) {
			e = d / 7;
		}
		else {
			e = d;
		}

		printf("%d\n", e);
	}

}