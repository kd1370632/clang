#include<stdio.h>
void kotae(int x, int y, int *g,float *h);

main()
{
	int x,y,g;
	float h;
	printf("�������Q���́F");
	scanf("%d%d",&x,&y);
	kotae(x,y,&g,&h);
	printf("���v��%d�A���ς�%.2f\n", g, h);
}

void kotae(int x, int y, int *g, float *h)
{
	*g = x + y;
	*h = (x + y) / 2;
}