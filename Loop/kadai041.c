#include<stdio.h>
main()
{
	int go, a,i;
	go = 0;
	printf("���������(-999�ŏI��)");
	scanf("%d", &a);
	while (a != -999) {
		go += a;
		printf("��������");
		scanf("%d", &a);
	}
	printf("���v��%d\n���ρ�%.2f\n",go,go/)
}