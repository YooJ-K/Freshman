#include <stdio.h>

int main(void){
	int x,y, test, n;

	scanf("%d", &test);

	while(test--){

		scanf("%d %d", &x, &y);

		while(y!=0){
			n=x%y;
			x = y;
			y = n;
		}

		printf("%d\n", x);
		
	}

	return 0;
}