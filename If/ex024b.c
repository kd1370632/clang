#include<stdio.h>
main()
{
	char moji;
	printf("文字を入力");
	scanf("%c",&moji);
	if (moji >= 'A'&& moji <= 'Z')
	{
			printf("大文字\n");
	}
	else {
		printf("その他\n");
	}
}