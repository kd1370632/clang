#include<stdio.h>
main()
{
	//int a, b, c, ret;

	//printf("�R�̐������󔒂ŋ�؂��ē���:");
	//ret = scanf("%d%d%d",&a,&b,&c);
	//printf("ret=%d a=%d b=%d c=%d\n", ret, a, b, c);

	//printf("a=%d\n", a);
	//printf("��������́@(Ctrl+Z�ŏI��) a:");

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
	printf("%d\n", printf("����ɂ���"));
}