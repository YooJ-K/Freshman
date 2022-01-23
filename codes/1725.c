#include<stdio.h>

int main() {

	int a, b,test;

	scanf("%d", &test);

	while (test--) {
		scanf("%d %d", &a, &b);

	

		if (200 <= a && a <= 300 && 100 <= b && b <= 200) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}


	return 0;
}