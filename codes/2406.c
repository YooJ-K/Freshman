#include <stdio.h>
#include <math.h>

int main(){

	int test, a, b, c, d, e, f, m,j, x, y, z, t, u, v, sum1, sum2;

	scanf("%d", &test);

	while(test--){

		scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

		j = a+b+c;
		m = d + e +f;

		if(j>m)
			printf("Joo-Ahn wins\n");
		else if (j<m)
			printf("Min-Gwang wins\n");
		else if (j=m){
			x = a % 2;
			y = b % 2;
			z = c % 2;
			t = d %2;
			u = e %2;
			v = f %2;

			sum1 = x + y +z;
			sum2 = t + u + v;

			if (sum1>sum2)
				printf("Joo-Ahn wins\n");
			else if (sum2>sum1)
				printf("Min-Gwang wins\n");
			else
				printf("Draw\n");
		}

	
	}
}