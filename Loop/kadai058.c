#include<stdio.h>
main()
{
	int i;
	printf("ASCII�R�[�h�\�F\n");
	for (i = 0x21; i <= 0x7E; i++) {
		printf("0x%02X:%c\n", i, i);
		printf("\nJIS X 0201�J�^�J�i�R�[�h�\�F\n");
		for (i = 0x41; i <= 0xDF; i++) {
			printf("0x%02X:%c\n", i, i);
		}
	}
}