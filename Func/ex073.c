#include<stdio.h>
void error_msg(void);

main()
{
	int a, b;
	printf("data1 data2 ?:");
	if (b == 0) {
		error_msg();
	}
	else {
		printf("%d/%d=%d�E�E�E%d\n", a, b, a / b, a % b);
	}
}


void error_msg(void)
{
	printf("0�Ŋ���Z�͂ł��܂���\n");
	return;
}