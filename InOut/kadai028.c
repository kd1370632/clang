#include<stdio.h>
main()
{
	long a;
	printf("整数？");
	scanf("%ld", &a);
	printf("2倍すると%d\n", 2 * a);
	printf("3倍すると%d\n", 3 * a);
	printf("4倍すると%d", 4 * a);
}