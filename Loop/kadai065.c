#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;

    printf("���l����� \n");

    do {
        scanf("%d", &num);

        if (num != -999) {
            sum += num;
            count++;
        }
    } while (num != -999);

    if (count == 0) {
        printf("�L���Ȑ��l�����͂���܂���ł����B\n");
    }
    else {
        double average = (double)sum / count;
        printf("���v: %d\n", sum);
        printf("����: %.2f\n", average);
    }

    return 0;
}