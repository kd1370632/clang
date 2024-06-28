#include<stdio.h>
#define DATA_END -1

struct ken {
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct ken		ken_data[] = { {1,"–kŠC“¹",NULL},
									{2,"ÂXŒ§",NULL},
									{3,"ŠâŽèŒ§",NULL},
									{4,"‹{éŒ§",NULL},
									{5,"H“cŒ§",NULL},
									{6,"ŽRŒ`Œ§",NULL},
									{7,"•Ÿ“‡Œ§",NULL},
									{DATA_END,"",NULL}, };
	struct ken* p, * wp;

	struct ken hyogo = { 28,"•ºŒÉŒ§",NULL };
	struct ken osaka = { 27,"‘åã•{",NULL };

	//ƒŠƒ“ƒN‚ÌÝ’è
	p = wp = ken_data;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	//ƒŠƒ“ƒN‚Ì•\Ž¦
	for (p = ken_data; p->code != DATA_END; p = p->next) {
		printf("code=%d name=%s\n", p->code, p->name);
	}

	printf("---------\n");

	//–kŠC“¹‚ÆÂX‚ÌŠÔ‚É•ºŒÉŒ§‚ð‘}“ü‚·‚é
	ken_data[0].next =&hyogo ;			//–kŠC“¹‚Ìnext‚É•ºŒÉ‚ÌƒAƒhƒŒƒX‚ðƒZƒbƒg
	hyogo.next = &ken_data[1];	//•ºŒÉ‚Ìnext‚ÉÂX‚ÌƒAƒhƒŒƒX‚ðƒZƒbƒg

	//•Ÿ“‡Œ§‚ÌŒã‚ë‚É‚Q‚V,‘åã
	ken_data[6].next = &osaka;	//•Ÿ“‡‚Ìnext‚É‘åã‚ÌƒAƒhƒŒƒX‚ðƒZƒbƒg
	osaka.next = &ken_data[7];	//‘åã‚Ìnext‚Éƒf[ƒ^
	
	//ƒf[ƒ^‘}“üŒã‚ÌƒŠƒ“ƒN‚Ì•\Ž¦
	for (p = ken_data; p->code != DATA_END; p = p->next) {
		printf("code=%d name=%s\n", p->code, p->name);
	}
}