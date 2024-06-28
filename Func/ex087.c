#include<stdio.h>
#include<stdlib.h>

main(int argc, char* argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) + atoi(argv[2]);
		printf("%s+%s=%d\n", argv[1], argv[2], sum);
	}
	else
	{
		printf("2つの引数（整数）を設定して実行してください。");
	}
}