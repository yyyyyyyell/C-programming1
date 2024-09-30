#include <stdio.h>

int main(void) {
    int n = 5;  // 피라미드의 높이

    // 피라미드 출력
    for (int i = 1; i <= n; i++) {
        // 공백 출력
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        // 별 출력
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // 줄바꿈
        printf("\n");
    }

    return 0;
}

