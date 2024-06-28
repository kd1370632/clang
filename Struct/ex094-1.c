#include<stdio.h>
#include<string.h>
struct day {
	int nen;
	int tuki;
	int hi;
};

struct profile {
	char name[20];
	struct day birth;
	char blood[5];
};
main()
{
	struct profile pdat[5] = { { "aota",{1972,10,3},"A", },
								{ "siroma",{2005,8,3},"AB", },
								{ "sakamoto",{1990,2,3},"A", },
								{ "okamoto",{1998,10,3},"AB", },
								{ "maru",{1990,2,8},"O", }, };
	struct profile *p = pdat;
	int i;
	for (i = 0; i < 5; i++) {
		if (p->birth.tuki== 2){
			printf("%s--", p->name);
			printf("%d”N%02dŒŽ%02d“ú¶‚Ü‚ê",
				p->birth.nen, p->birth.tuki, p->birth.hi);
			printf("ŒŒ‰tŒ^[%sŒ^\n", p->blood);
		}
		p++;
	}
}