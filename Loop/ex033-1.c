#include<stdio.h>
main()
{
	int sm=0,nm=0, i=0;
	do {
		printf("����?:");
		scanf("%d", &nm);
		i = 0;
		sm = 0;
	} while (nm != -999);
	printf("���v=%d ����=%.2f\n", sm, sm / (float)i);
}