#include<stdio.h>
main()
{
	char ko,s;
	int i;
	printf("�������H");
	scanf("%c", &s);
	for (ko = s; ko <= 'z'; ko++) {
		printf("%c ", ko);
	}
}