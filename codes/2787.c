#include <stdio.h>

int main(void){

	int test, m, n ,d1, d2;

	scanf("%d", &test);

	while(test--){
	
	scanf("%d %d %d %d", &m, &n, &d1, &d2);

	if ( m%d1==0 && m%d2==0 && n%d1==0 && n%d2==0)
		printf("YES\n");
	else
		printf("NO\n");

	}
	
	return 0;
	
}