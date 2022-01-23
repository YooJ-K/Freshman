#include<stdio.h>

int main(void){

	int max, min, t, in, sum;


	while (1) {
		max = 0;
		min = 1001;


		scanf("%d", &t);

		if (t == 0) {
			break;
		}

		while (t--) {

			scanf("%d", &in);

			if (in > max) {
				max = in;
			}

			if (in < min) {
				min = in;
			}

		}

		sum = max - min;

		if (sum % 2 == 0) {
			printf("Yes\n");
		}
		else {
			printf("No\n");
		}
	}
	return 0;


}