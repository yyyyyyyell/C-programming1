#include <stdio.h>
#include <math.h>

// ǥ������ ��� �Լ�
double calculateStandardDeviation(double arr[], int size) {
    double sum = 0.0, mean, variance = 0.0, stddev;

    // ��� ���
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    mean = sum / size;

    // �л� ���
    for (int i = 0; i < size; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    variance = variance / size;

    // ǥ������ ���
    stddev = sqrt(variance);
    return stddev;
}

int main() {
    double numbers[5];
    int size = 5;

    // 5���� �Ǽ� �Է�
    printf("Enter 5 real numbers: ");
    for (int i = 0; i < size; i++) {
        scanf("%lf", &numbers[i]);
    }

    // ǥ������ ��� �� ���
    double stddev = calculateStandardDeviation(numbers, size);
    printf("Standard Deviation = %.3f\n", stddev);

    return 0;
}

}
