#include<stdio.h>
enum BitState
{
	Base=0,				//00000000 �ʏ�U��
	Poison=1<<0,		//00000001 �ŏ��
	Sleep=1<<1,			//00000010 �������
	Paralysis=1<<2,		//00000100 ��჏��
	Burn=1<<3,			//00001000 �Ώ����
	AtkUp=1<<4,			//00010000 �U���͏㏸
	AtkDown=1<<5		//00100000 �U���͒ቺ
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	//��Ԃ��Ǘ�����ϐ�MyState��錾����Bese(0)�ŏ�����
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}
void DisplayStatus(UINT s) {
	printf("*****���݂̏��*****\n");
	if (s & Poison) {
		printf("��\n");
	}
	if (s & Sleep) {
		printf("����\n");
	}
	if (s & Paralysis) {
		printf("���\n");
	}
	if (s & Burn) {
		printf("�Ώ�\n");
	}
	if (s & AtkUp) {
		printf("�U���͏㏸\n");
	}
	if (s & AtkDown) {
		printf("�U���͒ቺ\n");
	}
	printf("********************\n");
}
void ChangeFlag(UINT* s) {
	int a;
	while (1) {
		DisplayStatus(*s);
	printf("�ǂ̏�Ԃɂ��܂����H\n");
	printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 0:���͏I��>");
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
		printf("�ǂ̏�Ԉُ���񕜂��܂���?");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 7:�X�e�[�^�X�����@0:���͏I��>");
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
		case 7:		//�S�Ă̏�Ԃ�����(�S�r�b�g�𗎂Ƃ�)
			*s &= Base;
			break;
		default:
			break;
		}
	}
}