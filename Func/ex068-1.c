#include<stdio.h>
main()
{
	//int a, b, c, ret;

	//printf("３つの整数を空白で区切って入力:");
	//ret = scanf("%d%d%d",&a,&b,&c);
	//printf("ret=%d a=%d b=%d c=%d\n", ret, a, b, c);

	//printf("a=%d\n", a);
	//printf("整数を入力　(Ctrl+Zで終了) a:");

	int c;
	char dumy[256];
	char data, data2;

	c = scanf("%c%c",&data,&data2);

	while (c != EOF)
	{
		printf("%d", c);
		putchar('\n');
		gets(dumy);
		c = scanf("%c%c", &data, &data2);
	}

	printf("%d\n", printf("HELLO"));
	printf("%d\n", printf("こんにちは"));
}