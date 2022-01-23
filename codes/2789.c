#include<stdio.h>

int main(void) {

	int test, price, day, money;

	scanf("%d", &test);

	while (test--) {


		scanf("%d", &price);



		day = 0;
		money = 0;

		while (1) {
			
			day++;

			if (day % 7 == 1 || day % 7 == 2|| day % 7 == 3|| day % 7 == 4|| day % 7 == 5) {
				money = money + 27000;
				
			}
			else if (day % 7 == 6) {
				money = money + 54000;
				
			}
			else if(day%7==0){
				money = money + 72000;
				
			}

			
			
			if (money >= price) {
				break;
			}
		}

		printf("%d\n", day);
	}

	return 0;

}