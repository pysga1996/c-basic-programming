#include <stdio.h>

void increasePassByValue(int x) {
    x++;
    printf("Increase param by value, x = %d inside function\n", x);
}

void increasePassByReference(int* x) {
    (*x)++;
    printf("Increase param by reference inside function, x = %d\n", *x);
}

void demoPassByRefAndVal() {
    int x = 5;
    printf("x = %d\n", x);
    increasePassByValue(x);
    printf("Increase param by value, x = %d outside function\n", x);
    increasePassByReference(&x);
    printf("Increase param by reference, x = %d outside function\n", x);
}

