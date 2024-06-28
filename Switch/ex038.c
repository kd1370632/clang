#include<stdio.h>
main()
{
	int su;
	printf("整数を入力");
		scanf("%d", &su);
		switch(su/10){
		case '1':printf("10点台です");
			break;
		case '2':printf("20点台です");
			break;
		case '3':printf("30点台です");
			break;
		case '4':printf("40点台です");
			break;
		default:printf("エラー");
		}
}
