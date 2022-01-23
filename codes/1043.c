#include<stdio.h>

int main(){

	int a, sum, test, t, i;

	scanf("%d", &test);

	while(test--){

		scanf("%d", &a);

		t=0;

		for(i=1; i<=a; i++){

		sum = i*(i+1)/2;

		

		t = t+sum;
		}


		printf("%d\n", t);
	}

	return 0;
}