#include<stdio.h>
main()
{
	int go, a,i;
	go = 0;
	printf("整数を入力(-999で終了)");
	scanf("%d", &a);
	while (a != -999) {
		go += a;
		printf("数を入れて");
		scanf("%d", &a);
	}
	printf("合計＝%d\n平均＝%.2f\n",go,go/)
}