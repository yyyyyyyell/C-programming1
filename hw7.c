#include <stdio.h>

int main() {
    // 두 배열 선언 및 초기화
    int arr1[6] = { 1, 2, 3, 4, 5, 6 };
    int arr2[6] = { 7, 8, 9, 10, 11, 12 };

    // 포인터 변수 선언
    int* ptr1 = arr1;
    int* ptr2 = arr2;
    int temp, i;

    // swap 과정
    for (i = 0; i < 6; i++) {
        temp = *(ptr1 + i);  // arr1의 i번째 요소를 temp에 저장
        *(ptr1 + i) = *(ptr2 + i);  // arr2의 i번째 요소를 arr1에 저장
        *(ptr2 + i) = temp;  // temp 값을 arr2에 저장
    }

    // 결과 출력
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
