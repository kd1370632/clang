#include<stdio.h>
void kazu(int x, int y, int z, int* ra, int* sm, );

main()
{
	int x, y, z, ra, sm;
	printf("�������R����");
	scanf("%d%d", &x, &y);
	kazu(x, y, z, &ra, &sm);
	printf("�ő�l=%d  �ŏ��l=%d\n", ra, sm);

	void kazu(int x, int y, int z, int* ra, int* sm, )
	{

	}