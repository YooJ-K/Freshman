#include <stdio.h>

int main() {

	int test;

	scanf("%d", &test);

	while (test--) {

		int n, m, sum = 0, count, k;

		scanf("%d", &n); // n은 가로, 세로길이다.

		if (n % 2 == 0) { // m은 출력하는 최고 숫자
			m = n / 2;
		}
		else {
			m = n / 2 + 1;
		}
		if (n == 1) {
			printf("1\n");
		}
		else {
			for (int i = 1; i <= m; i++) { // i = 행

				count = 0;
				k = 1;
				for (;;) { // k = 반복
					printf("%d", k);
					if (k < i) {
						k++;
					}
					count++;
					if (count == m) {
						break;
					}
				}

				if (n % 2 == 1) {
					count++;
				}

				for (;;) {
					if (k == m) {
						if (n % 2 == 1) {
							k--;
						}
					}

					printf("%d", k);

					if (2 * m - count == k) {
						k--;
					}

					count++;

					if (count >= 2 * m) {
						break;
					}
				}

				printf("\n");

			}

			int su;

			if (n % 2 == 0) {
				su = m;
			}
			else {
				su = m - 1;
			}


			for (int i = su; i >= 1; i--) { // i = 행

				count = 0;
				k = 1;
				for (;;) { // k = 반복
					printf("%d", k);
					if (k < i) {
						k++;
					}
					count++;
					if (count == m) {
						break;
					}
				}

				if (n % 2 == 1) {
					count++;
				}

				for (;;) {
					if (k == m) {
						if (n % 2 == 1) {
							k--;
						}
					}

					printf("%d", k);

					if (2 * m - count == k) {
						k--;
					}

					count++;

					if (count >= 2 * m) {
						break;
					}
				}

				printf("\n");

			}
		}

		printf("\n");
	}

	return 0;
}
