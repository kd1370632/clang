#include<stdio.h>
main()
{
	int tuki;
	printf("�������");
	scanf("%d", &tuki);
	if (tuki == 1 || tuki == 3 || tuki == 5 || tuki == 7 || tuki == 8 || tuki == 10 || tuki == 12)
	{
		printf("�ŏI����31��\n");
	}
	else {
		if (tuki == 4 || tuki == 6 || tuki == 9 || tuki == 11)
			printf("�ŏI����30��\n");

		else {
			if (tuki == 2)
				printf("�ŏI����29��\n");
		}

	}
}
