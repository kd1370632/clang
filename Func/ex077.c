#include<stdio.h>
void kazu(int x, int y, int z, int* ra, int* sm, );

main()
{
	int x, y, z, ra, sm;
	printf("整数を３つ入力");
	scanf("%d%d", &x, &y);
	kazu(x, y, z, &ra, &sm);
	printf("最大値=%d  最小値=%d\n", ra, sm);

	void kazu(int x, int y, int z, int* ra, int* sm, )
	{

	}