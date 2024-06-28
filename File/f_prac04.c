#include<stdio.h>
#define Sol_Num 3	//�����̐�
// �\���̂̐錾
typedef struct {
	char   Wname[20];	//���햼
	int    bullet;		//�e��
	float  atk;			  //�U����
} Weapon;						//�\���̂�Weapon�Ƃ��Ē�`
typedef struct {
	char   name[20];	//������
	int    hp;				//����hp
	Weapon wpn;			  //����\���̕ϐ�
} Soldier;					//�\���̂�Soldier�Ƃ��Ē�`
// �v���g�^�C�v�錾
void SetInfo(Soldier* s, char* filename);
void Display(Soldier* s);

main()
{
	//�\���̕ϐ��̐錾
	Soldier sols[Sol_Num];
	//SetInfo�֐��̌Ăяo���i�������͍\���̕ϐ��̃A�h���X,�������̓t�@�C�����j
	SetInfo(sols, "file04.txt");
	//Display�֐��̌Ăяo���i�������͍\���̕ϐ��j
	Display(sols);
}

void SetInfo(Soldier* s, char* filename) {
	//�t�@�C���|�C���^�̐錾
	FILE* fp;
	//�t�@�C���I�[�v���A�߂�lNULL�Ȃ�G���[�\��
	int i;
	if (fp = fopen(filename, "r")) {
		for (i = 0; i < Sol_Num; i++) {
			fscanf(fp, "%s%d%s%d%f", (s+i)->name,
				&(s+i)->hp, (s+i)->wpn.Wname,
				&(s+i)->wpn.bullet, &(s+i)->wpn.atk);
		}
		//�t�@�C������ǂݎ�����l���\���̂̃����o�Ƃ��đ��
		//*s�̓|�C���^�ϐ��Ȃ̂Ń����o�̓A���[���Z�q�Ŏw��
		//wpn�͍\���̕ϐ��Ȃ̂Ń����o�̓h�b�g��t���Ďw��
		
		fclose(fp);
	}
	else {
		printf("�t�@�C���̓ǂݍ��݃G���[\n");
	}
}

void Display(Soldier* s) {
	int i;
	for (i = 0; i < Sol_Num; i++) {
		//s�͕ϐ��Ȃ̂ŁA�h�b�g(.)�Ń����o���w��
		printf("%s �̗�:%d\n", (s+i)->name, (s+i)->hp);
		printf("����:%s �@�c�e��:%d �@�U����:%.2f\n",
			(s+i)->wpn.Wname, (s+i)->wpn.bullet, (s+i)->wpn.atk);
	}
}