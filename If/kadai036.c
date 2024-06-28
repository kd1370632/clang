#include<stdio.h>
main()
{
	int a, b;
	printf("®”‚P");
	scanf("%d", &a);
	printf("®”‚Q");
	scanf("%d", &b);
	if (a > b) {
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢", b, a, a- b);
	}
	else {
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢", a, b, b - a);
	}
}