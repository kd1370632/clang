#include<stdio.h>
main()
{
	char m;
	printf("1文字入力");
	scanf("%c", &m);
	if (m >= 'A')
	{
		if (m <= 'Z') {

			printf("大文字\n");
		}if (m >= 'a') {

			if (m <= 'z') {
				printf("小文字\n");
			}
		}


	}
	else {
		printf("ERROR\n");
	}
}