#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};
void display1(int a);
void display2(struct syohin_data syohin);
void display3(struct syohin_data *p); //�錾���́��̓|�C���^�ϐ��̖ڈ�


main()
{
	int a = 10;
	struct syohin_data syohin = { "�����S��",50 };
	display1(a);
	display2(syohin);
	display3(&syohin);

	//�����ς�������m�F
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

	//�A�h���X���󂯎���Ă���̂�
	//�����������\
	strcpy(p->name, "�l�グ�����S��");
	//�P�����P�O�O�ɂ��Ă݂�
	p->tanka = p->tanka*2;
}