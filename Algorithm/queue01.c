#include<stdio.h>
#define QUEUESIZE	8
int queue[QUEUESIZE];
int head = 0;
int tail = 0;

//�֐��v���g�^�C�v�錾
void display(void);
int enqueue(int d);
int dequeue(int* pd);

main()
{
	int key, data, result;

	do {

		printf("\n\n���G���L���[��i�f�L���[��o����͂��ā�");
		key = getche();
		printf("\n");

		//�G���L���[����
		if (key == 'i') {
			printf("�f�[�^���́�");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1) {
				printf("\n�������L���[����t�ł�������\n");
			}
			else {
				display();
			}
		}

		//�f�L���[����
		if (key == 'o') {
			result = dequeue(&data);
			if (result == -1) {
				printf("\n�������L���[����ł�������\n");
			}
			else {
				printf("�L���[����f�[�^(%d)�����o���܂���\n", data);
				display();
			}
		}
	} while (key != 'e');
}

//�L���[�\���֐�
void display(void)
{
	int i;
	printf("\n===���݂̃L���[���e===\n");
	for (i = 0; i < QUEUESIZE; i++) {
		printf("queue[%2d]��%5d", i, queue[i]);
		if (i == head){
			printf("�� head�������Ă��鏊(����head��%d�j", head);
			}
			if (i == tail){
				printf("�� tail�������Ă��鏊(����tail��%d�j", tail);
				}
			printf("\n");
	}
	return;
}

//�L���[�Ƀf�[�^������i�G���L���[�j�֐�
int enqueue(int d)
{
	if ((tail + 1) % QUEUESIZE == head) { return-1; }//�L���[����t�̎�
	queue[tail]=d;
	tail++;
	tail = tail % QUEUESIZE;
	return 0;
}

//�L���[����f�[�^�����o��(�f�L���[�j�֐�
int dequeue(int* pd)
{
	if (head==tail) { return -1;} //�L���[����̎�
	*pd=queue[head];
	queue[head] = 0;	//�m�F���₷�����邷�邽��
	head++;
	head = head % QUEUESIZE;
	return 0;
}