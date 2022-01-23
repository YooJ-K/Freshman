#include <stdio.h>

int main(void){
	int a, b, q, i, t;

	scanf("%d", &a);

	for(i=1; i<=a; i++){

		

		for(b=a; b>i;b--){
			printf(" ");
		}

		for(t=1; t<i*2+1; t=t+2){

			if(t==1){
				printf("&");
			}
			else{
				printf("&&");}
		}

		
			

		printf("\n");
	}

	return 0;
}