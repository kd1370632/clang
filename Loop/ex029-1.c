#include<stdio.h>
main()
{
	int num,i;
	
	printf("��������");
	scanf("%d", &num);
	while (num>0) {
		printf("*");
		num--;	//i=i+1 or i+=1�ł�����
	}
}