#include<stdio.h>
main()
{
	FILE* fp;
	char str[256], equip[256];
	int i ,lv, hp;
	fp = fopen("file01.txt", "r"); //存在しないファイルを書かない
	for (i = 0; i < 3; i++) {
		fscanf(fp, "%s", str);
		printf("%s\n",str);
	}
	//fscanf(fp, "%d%d%s", &lv, &hp, equip);
	//printf("lv:%d hp:%d 装備:%s\n", lv, hp, equip);
	fgets(equip, sizeof(equip), fp);
	printf("%s\n", equip);
	fclose(fp);
}