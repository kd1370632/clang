#include<stdio.h>
main()
{
	int a, b;
	char c;
	printf("整数(-999で入力終了)\n");
	scanf("%d",& a);
	printf("8進数＝%o		16進数＝%x\n", a, a);
	while (a != -999) {
		printf("整数(-999で入力終了)");
		scanf("%d",& a);
		printf("8進数＝%o		16進数＝%x\n", a, a);
	}
	//return 0;
}