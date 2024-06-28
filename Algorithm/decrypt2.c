#include<stdio.h>
main()
{
	char s[20];
	int k[20];		//暗号化キー用
	int i;

	printf("文字列を入力してください\n");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++)
	{
		//復号化キーの入力
		printf("s[%d]の復号化キー＞", i);
		scanf("%d", &k[i]);
		//復号化キーを使って入力
		s[i] -= k[i];
	}
	printf("複合化済み文字列は、%s\n", s);
}