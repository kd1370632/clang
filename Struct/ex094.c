#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile pdat[5];
	struct profile *p=pdat;
	int i;
	for (i =0 ; i < 5; i++) {
		printf("%dl–Ú", i + 1);
		printf("(–¼‘O)");
		scanf("%s", p->name);
		printf("(”N)");
		scanf("%d", & p->birth[0]);
		printf("(ŒŽ)");
		scanf("%d", &p->birth[1]);
		printf("(“ú)");
		scanf("%d", &p->birth[2]);
		printf("(ŒŒ‰tŒ^)");
		scanf("%s", p->blood);
		p++;
	}
	p = pdat;
	for (i = 0; i < 5; i++) {
		if (strcmp(p->blood, "A") == 0) {
			printf("%s--", p->name);
			printf("%d”N%02dŒŽ%02d“ú¶‚Ü‚ê",
				p->birth[0], p->birth[1], p->birth[2]);
			printf("ŒŒ‰tŒ^[%sŒ^\n", p->blood);
		}
		p++;
	}
}