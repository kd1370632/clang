#include<stdio.h>
main()
{
	int a,b;
	printf("2つの実数値？");
	scanf("%d%d", &a, &b);
	if (a > b) {
		printf("大きいほうは＝%d", a);
	}
	else {
		printf("大きいほうは＝%d", b);
	}
}