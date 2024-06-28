#include<stdio.h>
#define Sol_Num 3	//隊員の数
// 構造体の宣言
typedef struct {
	char   Wname[20];	//武器名
	int    bullet;		//弾数
	float  atk;			  //攻撃力
} Weapon;						//構造体をWeaponとして定義
typedef struct {
	char   name[20];	//隊員名
	int    hp;				//隊員hp
	Weapon wpn;			  //武器構造体変数
} Soldier;					//構造体をSoldierとして定義
// プロトタイプ宣言
void SetInfo(Soldier* s, char* filename);
void Display(Soldier* s);

main()
{
	//構造体変数の宣言
	Soldier sols[Sol_Num];
	//SetInfo関数の呼び出し（第一引数は構造体変数のアドレス,第二引数はファイル名）
	SetInfo(sols, "file04.txt");
	//Display関数の呼び出し（第一引数は構造体変数）
	Display(sols);
}

void SetInfo(Soldier* s, char* filename) {
	//ファイルポインタの宣言
	FILE* fp;
	//ファイルオープン、戻り値NULLならエラー表示
	int i;
	if (fp = fopen(filename, "r")) {
		for (i = 0; i < Sol_Num; i++) {
			fscanf(fp, "%s%d%s%d%f", (s+i)->name,
				&(s+i)->hp, (s+i)->wpn.Wname,
				&(s+i)->wpn.bullet, &(s+i)->wpn.atk);
		}
		//ファイルから読み取った値を構造体のメンバとして代入
		//*sはポインタ変数なのでメンバはアロー演算子で指定
		//wpnは構造体変数なのでメンバはドットを付けて指定
		
		fclose(fp);
	}
	else {
		printf("ファイルの読み込みエラー\n");
	}
}

void Display(Soldier* s) {
	int i;
	for (i = 0; i < Sol_Num; i++) {
		//sは変数なので、ドット(.)でメンバを指定
		printf("%s 体力:%d\n", (s+i)->name, (s+i)->hp);
		printf("武器:%s 　残弾数:%d 　攻撃力:%.2f\n",
			(s+i)->wpn.Wname, (s+i)->wpn.bullet, (s+i)->wpn.atk);
	}
}