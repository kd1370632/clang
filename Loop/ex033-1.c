#include<stdio.h>
main()
{
	int sm=0,nm=0, i=0;
	do {
		printf("数は?:");
		scanf("%d", &nm);
		i = 0;
		sm = 0;
	} while (nm != -999);
	printf("合計=%d 平均=%.2f\n", sm, sm / (float)i);
}