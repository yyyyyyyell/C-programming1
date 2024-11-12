#include <stdio.h>

int main() {
    // �� �迭 ���� �� �ʱ�ȭ
    int arr1[6] = { 1, 2, 3, 4, 5, 6 };
    int arr2[6] = { 7, 8, 9, 10, 11, 12 };

    // ������ ���� ����
    int* ptr1 = arr1;
    int* ptr2 = arr2;
    int temp, i;

    // swap ����
    for (i = 0; i < 6; i++) {
        temp = *(ptr1 + i);  // arr1�� i��° ��Ҹ� temp�� ����
        *(ptr1 + i) = *(ptr2 + i);  // arr2�� i��° ��Ҹ� arr1�� ����
        *(ptr2 + i) = temp;  // temp ���� arr2�� ����
    }

    // ��� ���
    printf("arr1: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("arr2: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
