#include<stdio.h>
main()
{
	int a, b;
	printf("整数１");
	scanf("%d", &a);
	printf("整数２");
	scanf("%d", &b);
	if (a > b) {
		printf("%dのほうが%dより%d小さい", b, a, a- b);
	}
	else {
		printf("%dのほうが%dより%d小さい", a, b, b - a);
	}
}