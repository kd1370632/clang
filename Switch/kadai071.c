#include<stdio.h>
main()
{
	int a,b;
	char c;
	printf("seisuu1");
	scanf("%d", &a);
	printf("seisuu2");
	scanf("%d", &b);
	printf("enzansi");
	scanf("%c",& c);
	switch(c) {
			case '+':printf("%d",a+b);
				break;
			case '-':printf("%d", a - b);
				break;
			case '*':printf("%d", a * b);
				break;
			case '/':printf("%d", a / b);
				break;
			default:printf("‚»‚Ì‘¼");
	}
	

}