#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};
void display1(int a);
void display2(struct syohin_data syohin);
void display3(struct syohin_data *p); //éŒ¾‚Ì–‚Íƒ|ƒCƒ“ƒ^•Ï”‚Ì–Úˆó


main()
{
	int a = 10;
	struct syohin_data syohin = { "Á‚µƒSƒ€",50 };
	display1(a);
	display2(syohin);
	display3(&syohin);

	//‘‚«•Ï‚í‚Á‚½‚©Šm”F
	display2(syohin);

}

void display1(int a)
{
	printf("a=%d\n", a);
}

void display2(struct syohin_data syohin)
{
	printf("syohin.name=%s syohin.tanka=%d\n",
		syohin.name, syohin.tanka);
}
void display3(struct syohin_data* p)
{
	printf("p->name=%s p->tanka=%d\n",
		p->name, p->tanka);

	//ƒAƒhƒŒƒX‚ğó‚¯æ‚Á‚Ä‚¢‚é‚Ì‚Å
	//‘‚«Š·‚¦‚ª‰Â”\
	strcpy(p->name, "’lã‚°Á‚µƒSƒ€");
	//’P‰¿‚ğ‚P‚O‚O‚É‚µ‚Ä‚İ‚é
	p->tanka = p->tanka*2;
}