#include<stdio.h>
main()
{
	int a, b;
	char c;
	printf("����(-999�œ��͏I��)\n");
	scanf("%d",& a);
	printf("8�i����%o		16�i����%x\n", a, a);
	while (a != -999) {
		printf("����(-999�œ��͏I��)");
		scanf("%d",& a);
		printf("8�i����%o		16�i����%x\n", a, a);
	}
	//return 0;
}