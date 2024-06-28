#include<stdio.h>
#include<stdlib.h>
#include<time.h>
enum BitState
{
	Base=0,				//00000000 ’ÊíUŒ‚
	Poison=1<<0,		//00000001 “Åó‘Ô
	Sleep=1<<1,			//00000010 ‡–°ó‘Ô
	Paralysis=1<<2,		//00000100 –ƒáƒó‘Ô
	Burn=1<<3,			//00001000 ‰Îó‘Ô
	AtkUp=1<<4,			//00010000 UŒ‚—Íã¸
	AtkDown=1<<5		//00100000 UŒ‚—Í’á‰º
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
	Chara chara = { "ålŒö",2000,200,100,50,Base };
	//				name  hp atk def state
	Mob mob[3] = { {"“GA",100,50,20,Bese},
				{"“GB",1000,010,40,Bese} ,
				{"“GC",5000,500,100,Bese} };
	srand(time(0));

	//ó‘Ô‚ğŠÇ—‚·‚é•Ï”MyState‚ğéŒ¾‚µ‚ÄBese(0)‚Å‰Šú‰»
	/*UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);*/
}
int DisplayMenu(void) {
	char ch;
	printf("ƒRƒ}ƒ“ƒh\n");
	printf("1:‚½‚½‚©‚¤\n2:‚Ú‚¤‚¬‚å\n");
	ch = getch();
}
void DisplayStatus(UINT s) {
	printf("*****Œ»İ‚Ìó‘Ô*****\n");
	if (s & Poison) {
		printf("“Å\n");
	}
	if (s & Sleep) {
		printf("‡–°\n");
	}
	if (s & Paralysis) {
		printf("–ƒáƒ\n");
	}
	if (s & Burn) {
		printf("‰Î\n");
	}
	if (s & AtkUp) {
		printf("UŒ‚—Íã¸\n");
	}
	if (s & AtkDown) {
		printf("UŒ‚—Í’á‰º\n");
	}
	printf("********************\n");
}
void ChangeFlag(UINT* s) {
	int a;
	while (1) {
		DisplayStatus(*s);
	printf("‚Ç‚Ìó‘Ô‚É‚µ‚Ü‚·‚©H\n");
	printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚ª 6:UŒ‚« 0:“ü—ÍI—¹>");
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
		printf("‚Ç‚Ìó‘ÔˆÙí‚ğ‰ñ•œ‚µ‚Ü‚·‚©?");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚ª 6:UŒ‚« 7:ƒXƒe[ƒ^ƒX‰ğœ@0:“ü—ÍI—¹>");
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
		case 7:		//‘S‚Ä‚Ìó‘Ô‚ğ‰ğœ(‘Sƒrƒbƒg‚ğ—‚Æ‚·)
			*s &= Base;
			break;
		default:
			break;
		}
	}
}
