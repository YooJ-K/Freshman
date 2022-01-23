#include <stdio.h>

int main(void) {

	int a,b;
	int test;
	float x, y;

	scanf("%d", &test);

	while (test--) {
		scanf("%d:%d", &a, &b);

		x = a * 30+b*0.5;
		y = b * 6;

		printf("%.1f %.1f\n", x, y);
	}

	return 0;
}