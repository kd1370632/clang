#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohin_data syohin[3] = { {"‰”•M",30,5},
										{"Á‚µƒSƒ€",50,2},
										{"•M” ",500,3} };
	struct syohin_data* p = syohin;
	int i;
	for (i = 0; i < 3; i++) {
		printf("¤•i–¼:%s\t", p->name);
		printf("’P‰¿:%4d\t", p->tanka);
		printf("ŒÂ”:%4d\n", p->kosuu);
		printf("‹àŠz:\\%4d\n", p->tanka * p->kosuu);
		p++;
	}
}