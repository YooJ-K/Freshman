#include <stdio.h>

int main(){

	int test, a, b, c, d;

	scanf("%d", &test);

	while (test--){
		scanf("%d %d %d %d", &a, &b, &c, &d);

		if ( a==b && c != d)
			printf("Park wins\n");

		else if ( a!=b && c == d)
			printf("Shin wins\n");

		else if ( a==b&&c==d){
			if (a>c)
				printf("Park wins\n");
			else if (c>a)
				printf("Shin wins\n");
			else if ( a=c)
				printf("draw\n");}

		else if (a != b && c !=d){
			if ((a+b)>(c+d))
				printf("Park wins\n");
			else if ((a+b)<(c+d))
				printf("Shin wins\n");
			else
				printf("draw\n");}
	
	}

	
	
}