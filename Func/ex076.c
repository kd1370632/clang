#include<stdio.h>
void kotae(int x, int y, int *g,float *h);

main()
{
	int x,y,g;
	float h;
	printf("®”‚ğ‚Q‚Â“ü—ÍF");
	scanf("%d%d",&x,&y);
	kotae(x,y,&g,&h);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f\n", g, h);
}

void kotae(int x, int y, int *g, float *h)
{
	*g = x + y;
	*h = (x + y) / 2;
}