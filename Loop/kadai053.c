#include<stdio.h>
main()
{
	int a,i;
	printf("整数？");
	scanf("%d", &a);
    if (a > 0) {
        for (i = 0; i <= 10; i++) {
            printf("%d ",a+i);
        }
    }
    else {
        printf("正の整数を入力してください。\n");
    }

    return 0;
}