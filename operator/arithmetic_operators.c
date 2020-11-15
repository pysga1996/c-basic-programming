#include <stdio.h>

void math_plus(int a, int b) {
    printf("a + b = %d\n", a + b);
}

void math_minus(int a, int b) {
    printf("a - b = %d\n", a - b);
}

void math_multiply(int a, int b) {
    printf("a * b = %d\n", a * b);
}

void math_divide(int a, int b) {
    printf("a / b = %f\n", (float) a / (float) b);
}

void math_mod(int a, int b) {
    printf("a %% b = %d\n", a % b);
}

void arithmeticOperatorsDemo(int a, int b) {
    printf("#Arithmetic Operators demo:\n");
    math_plus(a, b);
    math_minus(a, b);
    math_multiply(a, b);
    math_divide(a, b);
    math_mod(a, b);
    printf("a %% b = %d\n", a % b);
    printf("\n");
}