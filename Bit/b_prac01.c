#include<stdio.h>
#include<stdlib.h>
#include<time.h>
enum BitState
{
	Base=0,				//00000000 通常攻撃
	Poison=1<<0,		//00000001 毒状態
	Sleep=1<<1,			//00000010 睡眠状態
	Paralysis=1<<2,		//00000100 麻痺状態
	Burn=1<<3,			//00001000 火傷状態
	AtkUp=1<<4,			//00010000 攻撃力上昇
	AtkDown=1<<5		//00100000 攻撃力低下
};
typedef unsigned int UINT;
typedef struct {
	char name[20];
	int hp;
	int mp;
	int atk;
	int def;
	UINT MyState;
}Chara;
typedef struct {
	char name[20];
	int hp;
	int mp;
	int atk;
	int def;
	UINT State;
}Mob;

void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
int DisplayMenu(void);
main()
{//					 name	 hp    mp atk def Mystate
	Chara chara = { "主人公",2000,200,100,50,Base };
	//				name  hp atk def state
	Mob mob[3] = { {"敵A",100,50,20,Bese},
				{"敵B",1000,010,40,Bese} ,
				{"敵C",5000,500,100,Bese} };
	srand(time(0));

	//状態を管理する変数MyStateを宣言してBese(0)で初期化
	/*UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);*/
}
int DisplayMenu(void) {
	char ch;
	printf("コマンド\n");
	printf("1:たたかう\n2:ぼうぎょ\n");
	ch = getch();
}
void DisplayStatus(UINT s) {
	printf("*****現在の状態*****\n");
	if (s & Poison) {
		printf("毒\n");
	}
	if (s & Sleep) {
		printf("睡眠\n");
	}
	if (s & Paralysis) {
		printf("麻痺\n");
	}
	if (s & Burn) {
		printf("火傷\n");
	}
	if (s & AtkUp) {
		printf("攻撃力上昇\n");
	}
	if (s & AtkDown) {
		printf("攻撃力低下\n");
	}
	printf("********************\n");
}
void ChangeFlag(UINT* s) {
	int a;
	while (1) {
		DisplayStatus(*s);
	printf("どの状態にしますか？\n");
	printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:入力終了>");
	scanf("%d", &a);
	if (a == 0) {
		break;
	}
	switch (a) {
	case 1:
		*s |= Poison;
		break;
	case 2:
		*s |= Sleep;
		break;
	case 3:
		*s |= Paralysis;
		break;
	case 4:
		*s |= Burn;
		break;
	case 5:
		*s |= AtkUp;
		break;
	case 6:
		*s |= AtkDown;
		break;
	defualt:
		break;
	}
	}
}
void ClearFlag(UINT* s) {
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("どの状態異常を回復しますか?");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 7:ステータス解除　0:入力終了>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a){
		case 1:
			*s &= ~Poison;
				break;
		case 2:
			*s &= ~Sleep;
				break;
		case 3:
			*s &= ~Paralysis;
				break;
		case 4:
			*s &= ~Burn;
				break;
		case 5:
			*s &= ~AtkUp;
				break;
		case 6:
			*s &= ~AtkDown;
				break;
		case 7:		//全ての状態を解除(全ビットを落とす)
			*s &= Base;
			break;
		default:
			break;
		}
	}
}
