#include<stdio.h>
main()
{
	char s[20];
	int k[20];		//�Í����L�[�p
	int i;

	printf("���������͂��Ă�������\n");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++)
	{
		//�������L�[�̓���
		printf("s[%d]�̕������L�[��", i);
		scanf("%d", &k[i]);
		//�������L�[���g���ē���
		s[i] -= k[i];
	}
	printf("�������ςݕ�����́A%s\n", s);
}