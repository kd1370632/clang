#include<stdio.h>
main()
{
	int data, sum=0, cnt=0;
	int ret;
	//入力
	printf("整数:");
	ret = scanf("%d", &data);
	while (ret!=EOF)
	{
		sum += data;
		cnt++;
		printf("整数:");
		ret = scanf("%d", &data);
	}

	//合計と平均を表示
	printf("合計=%d 平均=%.2f\n", sum, (float)sum / cnt);
}