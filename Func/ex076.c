#include<stdio.h>
void kotae(int x, int y, int *g,float *h);

main()
{
	int x,y,g;
	float h;
	printf("整数を２つ入力：");
	scanf("%d%d",&x,&y);
	kotae(x,y,&g,&h);
	printf("合計は%d、平均は%.2f\n", g, h);
}

void kotae(int x, int y, int *g, float *h)
{
	*g = x + y;
	*h = (x + y) / 2;
}