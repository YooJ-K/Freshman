#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int IsPrime(int n){

	int i, limit;

	if(n<=1) return 0;
	if(n==2) return 1;
	if(n%2==0) return 0;

	limit=(int)sqrt((double)n);

	for(i=3; i<=limit; i=i+2){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int main(void){

	int test, a, b, prime, sum, q;

	scanf("%d", &test);

	while(test--){

	sum=0;
	
	scanf("%d %d", &a, &b);

	for(q=a; q<=b; q++){
		if(IsPrime(q)==1){
			sum++;
		}
	}

	printf("%d\n", sum);
	}
	

	return 0;
	
}