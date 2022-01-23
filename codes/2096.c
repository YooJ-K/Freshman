#include <stdio.h>

int main(void){

	int test, t, in, max, min, sum;

	scanf("%d", &test);

	

	while(test--){
	
		max = -1001;
		min = 1001;

		scanf("%d", &t);

		while(t--){

			scanf("%d", &in);

			if(in>max){
				max = in;
			}

			if(in<min){
				min = in;
			}
		
		}

	sum = max - min;

	if (sum % 5 == 0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}


	}

	return 0;
}
