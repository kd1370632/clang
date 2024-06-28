#include<stdio.h>
#include<string.h>

#define CNT 4 //配列のサイズ

main()
{
	char* p_tbl[] = { "Proguramming2","Algorithm","Programming1","C" };
	char* w;
	int i, j;

	for(i=0;i<CNT-1;i++)
	{
		for (j = i + 1; j < CNT; j++)
		{
			if (strcmp(p_tbl[i], p_tbl[j]) > 0)
			{
				w = p_tbl[i];
				p_tbl[i] = p_tbl[j];
				p_tbl[j] = w;
			}
		}
	}

	//昇順に並べ替え後
	for (i = 0; i < CNT; i++) 
	{
		printf("%s\n", p_tbl[i]);
	}
}
