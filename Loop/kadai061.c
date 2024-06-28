#include<stdio.h>
main()
{
	int i = 1;
	while (i <= 20) {
		printf("%d ", i++);
		if (i <= 20) {
			printf(" ");
		}
		if (i%10 == 1) {
			printf("\n");
		}
	}
}