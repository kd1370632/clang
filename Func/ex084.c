#include<stdio.h>
void strrvs(char* s1,char*s2);
main()
{
	char str1[256], str2[256];
	printf("������H�F");
	gets(str1);
	strrvs(str1, str2);
	printf("str1:%s\nstr2:%s\n", str1, str2);
}
void strrvs(char* s1, char* s2) {
	int i,j;
	for (i = 0; *(s1 + i) != '\0'; i++);
	printf("�������F%d\n", i);
	i--;		//�X�̏������Ȃ���str2���\������Ȃ�
	for (j = 0; i >= 0; i--, j++) {
		*(s2 + j) = *(s1 + i);
	}
	*(s2 + j) = '\0';
}