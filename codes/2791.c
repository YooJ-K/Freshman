#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int IsPrime(int n) {

	int i, limit;

	if (n <= 1) return 0;
	if (n == 2) return 1;
	if (n % 2 == 0) return 0;

	limit = (int)sqrt((double)n);

	for (i = 3; i <= limit; i = i + 2) {
		if (n%i == 0) {
			return 0;
		}
	}
	return 1;
}

int main(void) {

	int  a, b, x, q, r;

	while (1) {

		scanf("%d %d", &a, &b);

		if (a == 0 && b == 0) {
			break;
		}

		x = 1;
		q = r = 0;

		if(b>=a){

			for (a = a; a + 2 <= b; a++) {

				if (IsPrime(a) == 1 && IsPrime(a + 2) == 1) {

					printf("%d:(%d,%d)\n", x, a, a + 2);
					x++;
				}
				else {
					q++;
				}
				r++;
			}

			if (q == r) {
				printf("No Twin Primes!\n");
			}
		}

		else{
			for (b = b; b + 2 <= a; b++) {

				if (IsPrime(b) == 1 && IsPrime(b + 2) == 1) {

					printf("%d:(%d,%d)\n", x, b, b + 2);
					x++;
				}
				else {
					q++;
				}
				r++;
			}

			if (q == r) {
				printf("No Twin Primes!\n");
			}
		}

	}
	return 0;

}