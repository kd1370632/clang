#include<stdio.h>
int add(int a, int b);	//�v���g�^�C�v�錾
main()
{
	int a, b, kotae;
	printf("�������Q�󔒂��J���ē���");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);
	printf("���v��%d�ł�\n", kotae);

	printf("���v��%d�ł�\n", add(a, b));
}

//�֐�add�̋L�q
int add(int a, int b)
{
	//int ans;
	//ans = a + b;
	//return ans;

	return a+b;		//�ȗ����ĂP�s�ŏ������Ƃ��\
}