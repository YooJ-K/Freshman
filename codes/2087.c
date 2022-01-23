#include <stdio.h>

int main(void) {

	int a, b;

	while (1) {

		scanf("%d %d", &a, &b);

		if (a == 0 && b == 0) {
			break;
		}
		
		if (a == b) {
			printf("draw!\n");
		}
		else if ((a == 1 && b == 2)||(a==2&&b==3)||(a==3&&b==1)) {
			printf("JJH wins!\n");
		}
		else {
			printf("PEJ wins!\n");
		}
	}

}