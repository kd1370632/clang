#include<stdio.h>
main()
{
	int a,i;
	printf("®”H");
	scanf("%d", &a);
    if (a > 0) {
        for (i = 0; i <= 10; i++) {
            printf("%d ",a+i);
        }
    }
    else {
        printf("³‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
    }

    return 0;
}