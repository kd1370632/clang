#include<stdio.h>
main()
{
	int a, b;
	printf("�����P");
	scanf("%d", &a);
	printf("�����Q");
	scanf("%d", &b);
	if (a > b) {
		printf("%d�̂ق���%d���%d������", b, a, a- b);
	}
	else {
		printf("%d�̂ق���%d���%d������", a, b, b - a);
	}
}