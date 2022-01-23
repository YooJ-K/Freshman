#include <stdio.h>

int main(void){

	int test, a, b, c, d;

	scanf("%d", &test);

	while (test--){

		scanf("%d %d %d %d", &a, &b, &c, &d);

		if ( a==b && c==d){
			if (a < c)
				printf("Kim DS wins\n");
			else if (c < a)
				printf("Yoo HJ wins\n");
			else if ( a == c)
				printf("Draw\n");}

		else if ( a==b && c != d)
			printf("Kim DS wins\n");

		else if ( a!=b && c == d)
			printf("Yoo HJ wins\n");

		else if (a != b && c != d){
			if(a>=b && c>=d){
				if ((a-b)>(c-d))
					printf("Yoo HJ wins\n");
				else if ((a-b)<(c-d))
					printf("Kim DS wins\n");
				else if ((a-b)==(c-d))
					printf("Draw\n");}
			else if (a<b && c>=d){
				if ((b-a)>(c-d))
					printf("Yoo HJ wins\n");
				else if ((b-a)<(c-d))
					printf("Kim DS wins\n");
				else if ((b-a)==(c-d))
					printf("Draw\n");}
			else if (a>=b && c<d){
				if ((a-b)>(d-c))
					printf("Yoo HJ wins\n");
				else if ((a-b)<(d-c))
					printf("Kim DS wins\n");
				else if ((a-b)==(d-c))
					printf("Draw\n");}
			else if (a<b && c<d){
				if ((b-a)>(d-c))
					printf("Yoo HJ wins\n");
				else if ((b-a)<(d-c))
					printf("Kim DS wins\n");
				else if ((b-a)==(d-c))
					printf("Draw\n");}
			
		
		}

	
	}

	return 0;
  
}