#include <stdio.h>

int main(void) {
	int money, test, a,b,c,d,e;

	scanf("%d", &test);

	while (test--) {
		scanf("%d", &money);

		if (money >= 10000) {
			a = money / 10000;

			if (money - a * 10000 >= 5000) {
				b = (money - a * 10000) / 5000;

				if (money - a * 10000 - b * 5000 >= 1000) {
					c = (money - a * 10000 - b * 5000) / 1000;
					if (money - a * 10000 - b * 5000 - c * 1000 >= 500) {
						d = (money - a * 10000 - b * 5000 - c * 1000) / 500;
						if (money - a * 10000 - b * 5000 - c * 1000 - d * 500 >= 100)
							e = (money - a * 10000 - b * 5000 - c * 1000 - d * 500) / 100;
						else
							e = 0;
					}
					else {
						d = 0;
						if (money - a * 10000 - b * 5000 - c * 1000 - d * 500 >= 100)
							e = (money - a * 10000 - b * 5000 - c * 1000 - d * 500) / 100;
						else
							e = 0;
					}

				}
				else {
					c = 0;
					if (money - a * 10000 - b * 5000 - c * 1000 >= 500) {
						d = (money - a * 10000 - b * 5000 - c * 1000) / 500;
						if (money - a * 10000 - b * 5000 - c * 1000 - d * 500 >= 100)
							e = (money - a * 10000 - b * 5000 - c * 1000 - d * 500) / 100;
						else
							e = 0;
					}
					else {
						d = 0;
						if (money - a * 10000 - b * 5000 - c * 1000 - d * 500 >= 100)
							e = (money - a * 10000 - b * 5000 - c * 1000 - d * 500) / 100;
						else
							e = 0;
					}
				}

			}

			else {
				b = 0;
				if (money - a * 10000 - b * 5000 >= 1000) {
					c = (money - a * 10000 - b * 5000) / 1000;
					if (money - a * 10000 - b * 5000 - c * 1000 >= 500) {
						d = (money - a * 10000 - b * 5000 - c * 1000) / 500;
						if (money - a * 10000 - b * 5000 - c * 1000 - d * 500 >= 100)
							e = (money - a * 10000 - b * 5000 - c * 1000 - d * 500) / 100;
						else
							e = 0;
					}
					else {
						d = 0;
						if (money - a * 10000 - b * 5000 - c * 1000 - d * 500 >= 100)
							e = (money - a * 10000 - b * 5000 - c * 1000 - d * 500) / 100;
						else
							e = 0;
					}

				}
				else {
					c = 0;
					if (money - a * 10000 - b * 5000 - c * 1000 >= 500) {
						d = (money - a * 10000 - b * 5000 - c * 1000) / 500;
						if (money - a * 10000 - b * 5000 - c * 1000 - d * 500 >= 100)
							e = (money - a * 10000 - b * 5000 - c * 1000 - d * 500) / 100;
						else
							e = 0;
					}
					else {
						d = 0;
						if (money - a * 10000 - b * 5000 - c * 1000 - d * 500 >= 100)
							e = (money - a * 10000 - b * 5000 - c * 1000 - d * 500) / 100;
						else
							e = 0;
					}
				}
			}
		}
		else {
			a = 0;
			if (money - a * 10000 >= 5000) {
				b = (money - a * 10000) / 5000;

				if (money - a * 10000 - b * 5000 >= 1000) {
					c = (money - a * 10000 - b * 5000) / 1000;
					if (money - a * 10000 - b * 5000 - c * 1000 >= 500) {
						d = (money - a * 10000 - b * 5000 - c * 1000) / 500;
						if (money - a * 10000 - b * 5000 - c * 1000 - d * 500 >= 100)
							e = (money - a * 10000 - b * 5000 - c * 1000 - d * 500) / 100;
						else
							e = 0;
					}
					else {
						d = 0;
						if (money - a * 10000 - b * 5000 - c * 1000 - d * 500 >= 100)
							e = (money - a * 10000 - b * 5000 - c * 1000 - d * 500) / 100;
						else
							e = 0;
					}

				}
				else {
					c = 0;
					if (money - a * 10000 - b * 5000 - c * 1000 >= 500) {
						d = (money - a * 10000 - b * 5000 - c * 1000) / 500;
						if (money - a * 10000 - b * 5000 - c * 1000 - d * 500 >= 100)
							e = (money - a * 10000 - b * 5000 - c * 1000 - d * 500) / 100;
						else
							e = 0;
					}
					else {
						d = 0;
						if (money - a * 10000 - b * 5000 - c * 1000 - d * 500 >= 100)
							e = (money - a * 10000 - b * 5000 - c * 1000 - d * 500) / 100;
						else
							e = 0;
					}
				}

			}

			else {
				b = 0;
				if (money - a * 10000 - b * 5000 >= 1000) {
					c = (money - a * 10000 - b * 5000) / 1000;
					if (money - a * 10000 - b * 5000 - c * 1000 >= 500) {
						d = (money - a * 10000 - b * 5000 - c * 1000) / 500;
						if (money - a * 10000 - b * 5000 - c * 1000 - d * 500 >= 100)
							e = (money - a * 10000 - b * 5000 - c * 1000 - d * 500) / 100;
						else
							e = 0;
					}
					else {
						d = 0;
						if (money - a * 10000 - b * 5000 - c * 1000 - d * 500 >= 100)
							e = (money - a * 10000 - b * 5000 - c * 1000 - d * 500) / 100;
						else
							e = 0;
					}

				}
				else {
					c = 0;
					if (money - a * 10000 - b * 5000 - c * 1000 >= 500) {
						d = (money - a * 10000 - b * 5000 - c * 1000) / 500;
						if (money - a * 10000 - b * 5000 - c * 1000 - d * 500 >= 100)
							e = (money - a * 10000 - b * 5000 - c * 1000 - d * 500) / 100;
						else
							e = 0;
					}
					else {
						d = 0;
						if (money - a * 10000 - b * 5000 - c * 1000 - d * 500 >= 100)
							e = (money - a * 10000 - b * 5000 - c * 1000 - d * 500) / 100;
						else
							e = 0;
					}
				}
			}
		}

		printf("%d %d %d %d %d\n", a, b, c, d, e);



	}
}