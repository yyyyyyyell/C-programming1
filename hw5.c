#include <stdio.h>

void binary(int n) {
    if (n == 0)
        return;

    binary(n / 2);
    printf("%d", n % 2);  // �������� ��� (2������ �ڸ���)
}

int main() {
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num == 0)
        printf("0");
    else
        binary(num);  // Binary �Լ� ȣ��

    return 0;
}
