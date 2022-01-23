#include <stdio.h>

int main(void) {

	int a, b, c, d, e;

	while (1) {

		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 &&c==0) {
			break;
		}

		if (a%c == 0 && b%c == 0) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
		
	}

}