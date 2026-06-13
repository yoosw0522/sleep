#include <stdio.h>

int main() {

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= 5; i++) {

        // 공백
        for (int j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        // 별
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}