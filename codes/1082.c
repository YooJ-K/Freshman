#include<stdio.h>

int main(void){

	int i, test, a;
	long long sum;

	scanf("%d", &test);

	while(test--){
	
		scanf("%d %d", &a, &i);

		sum=0;

		while(a<=i){
			
			sum = sum+a;
		
			a++;
		}

		printf("%ld\n", sum);
	
	}
	return 0;
}