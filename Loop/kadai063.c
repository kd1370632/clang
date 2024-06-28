#include <stdio.h>

int main() {
    int i = 20;

    while (i >= 1) {
        printf("%d", i--);
        if (i >= 1) {
            printf(" ");
        }
        if (i % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}