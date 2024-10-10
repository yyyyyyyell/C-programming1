#include <stdio.h>

void binary(int n) {
    if (n == 0)
        return;

    binary(n / 2);
    printf("%d", n % 2);  // 나머지를 출력 (2진수의 자리수)
}

int main() {
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num == 0)
        printf("0");
    else
        binary(num);  // Binary 함수 호출

    return 0;
}
