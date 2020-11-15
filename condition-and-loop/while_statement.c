#include <stdio.h>

void checkPrime(int number, int* count) {
    int isPrime = 1;
    if (number % 2 == 1 && number > 2) {
        for (int i = 3; i < number; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    } else if (number == 2) {
        isPrime = 1;
    } else {
        isPrime = 0;
    }
    if (isPrime == 1) {
        ++*count;
        printf("%d\t", number);
    }
}

void printFirstPrimes(int cap) {
    int numberOfPrimes = 0;
    int number = 0;
    printf("Print first %d primes:\n", cap);
    while (numberOfPrimes < cap) {
        checkPrime(number, &numberOfPrimes);
        ++number;
    }
    printf("\n");
}

void whileLoopDemo() {
    printf("#While loop\n");
    int numberOfPrimesToBePrinted = 0;
    do {
        printf("Enter numbers of primes to printf (enter 0 to exit):\n");
        scanf("%d", &numberOfPrimesToBePrinted);
        printFirstPrimes(numberOfPrimesToBePrinted);
    } while (numberOfPrimesToBePrinted > 0);
    printf("#\n");
}
