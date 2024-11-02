#include <stdio.h>

int main() {
    int numbers[5];
    int i;

    // 정수 5개 입력 받기
    printf("Please input five integers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // 홀수 출력
    printf("Odd numbers: ");
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    // 짝수 출력
    printf("Even numbers: ");
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    return 0;
}