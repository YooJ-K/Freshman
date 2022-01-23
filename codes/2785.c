#include <stdio.h>

int main(void){

	int test, a, b, c, d;

	scanf("%d", &test);

	while(test--){
		scanf("%d %d %d %d",&a, &b, &c, &d);

		if (a+b>c+d)
			printf("Kim DS wins\n");
		else if (a+b<c+d)
			printf("Yoo HJ wins\n");
		else if (a+b==c+d)
			printf("Draw\n");
	}

	return 0;
}