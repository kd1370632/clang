#include<stdio.h>
main()
{
	int a[10] = { 10 ,20, 30, 40, 50, 60, 70, 80, 90, 100  };
	int c[10];
	int i;

	for (i = 0; i < 10; i++) {
		c[9-i] = a[i];
	}
	printf(" z  a=");
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n z  c=");
	for (i = 0; i < 10; i++) {
		printf("%d ", c[i]);
	}
	
}