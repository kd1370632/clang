#include<stdio.h>
main()
{
	char m;
	printf("1��������");
	scanf("%c", &m);
	if (m >= 'A')
	{
		if (m <= 'Z') {

			printf("�啶��\n");
		}if (m >= 'a') {

			if (m <= 'z') {
				printf("������\n");
			}
		}


	}
	else {
		printf("ERROR\n");
	}
}