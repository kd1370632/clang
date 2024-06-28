#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};
void display1(int a);
void display2(struct syohin_data syohin);
void display3(struct syohin_data *p); //宣言時の＊はポインタ変数の目印


main()
{
	int a = 10;
	struct syohin_data syohin = { "消しゴム",50 };
	display1(a);
	display2(syohin);
	display3(&syohin);

	//書き変わったか確認
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

	//アドレスを受け取っているので
	//書き換えが可能
	strcpy(p->name, "値上げ消しゴム");
	//単価を１００にしてみる
	p->tanka = p->tanka*2;
}