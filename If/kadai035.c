#include<stdio.h>
main()
{
	int s;
	printf("整数？");
	scanf("%d", &s);
	if (s > 0) {
		printf("入力値は「プラス」です");
		if (s == 0) {
			printf("入力値は「0」です");
			if (s < 0) {
				printf("入力値は「マイナス」です");
			}
			
		}
		
	}
	else {
		printf("その他");
	}
	
}