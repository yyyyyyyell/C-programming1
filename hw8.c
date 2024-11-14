#include <stdio.h>
#include <math.h>

// 표준편차 계산 함수
double calculateStandardDeviation(double arr[], int size) {
    double sum = 0.0, mean, variance = 0.0, stddev;

    // 평균 계산
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    mean = sum / size;

    // 분산 계산
    for (int i = 0; i < size; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    variance = variance / size;

    // 표준편차 계산
    stddev = sqrt(variance);
    return stddev;
}

int main() {
    double numbers[5];
    int size = 5;

    // 5개의 실수 입력
    printf("Enter 5 real numbers: ");
    for (int i = 0; i < size; i++) {
        scanf("%lf", &numbers[i]);
    }

    // 표준편차 계산 및 출력
    double stddev = calculateStandardDeviation(numbers, size);
    printf("Standard Deviation = %.3f\n", stddev);

    return 0;
}

}
