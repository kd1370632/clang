#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;

    printf("数値を入力 \n");

    do {
        scanf("%d", &num);

        if (num != -999) {
            sum += num;
            count++;
        }
    } while (num != -999);

    if (count == 0) {
        printf("有効な数値が入力されませんでした。\n");
    }
    else {
        double average = (double)sum / count;
        printf("合計: %d\n", sum);
        printf("平均: %.2f\n", average);
    }

    return 0;
}