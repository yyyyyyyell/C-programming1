#include <stdio.h>

int main(void) {
    int n = 5;  // �Ƕ�̵��� ����

    // �Ƕ�̵� ���
    for (int i = 1; i <= n; i++) {
        // ���� ���
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        // �� ���
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // �ٹٲ�
        printf("\n");
    }

    return 0;
}

