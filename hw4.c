#include <stdio.h>

int main() {
    int number;
    int isPrime = 1;  // 소수 여부

    printf("Please enter a number: ");
    scanf("%d", &number);

    if (number <= 1) {
        isPrime = 0;
    }
    else {
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("It is a prime number.\n");
    else
        printf("It is not a prime number.\n");

    return 0;
}
