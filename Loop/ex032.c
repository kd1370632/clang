#include<stdio.h>
main()
{
	int n, i;
	printf("数を入れて:");
	scanf("%d", &n);
	for (i = 1; i <= 5; i++) {
		printf("%d " , n * i);
	}

}