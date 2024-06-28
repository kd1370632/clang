#include<stdio.h>
main()
{
	int n;
	printf("0‚©‚ç100‚Ü‚Å‚Ì®”H");
	scanf("%d", &n);
	if (n >= 90){
		printf("5");
	}else if (80 <= n < 90){
		printf("4");
	}else if (50 <= n < 80){
		printf("3");
	}else if (30 <= n < 50){
		printf("2");
	}else {
		printf("1");
	}
}