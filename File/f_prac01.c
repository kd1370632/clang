#include<stdio.h>
main()
{
	int score = 0;
	char ch;
	char name[20];
	FILE* fp;
	printf("プレイヤーの名前は:");
	scanf("%s\n",name);
	while (1) {
		printf("現在のスコア:%d(Enterでスコア+1,eで終了)\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
		//ファイルscore.txtへの書き込み
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
	}

}