#ifndef FUNCTIONS_MATH_FUNCTIONS_H
#define FUNCTIONS_MATH_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void demoMathFunction(double x, double y, int z) {
    printf("Sin of %f is %f\n", x, sin(x));
    printf("Cos of %f is %f\n", x, cos(x));
    printf("Tan of %f is %f\n", x, tan(x));
    printf("Exponential of %f is %f\n", x, exp(x));
    printf("Logarithm of %f is %f\n", x, log(x));
    printf("Power of %f with exponent %f is %f\n", x, y, pow(x, y));
    printf("Square root of %f is %f\n", x , sqrt(x));
    printf("Absolute value of %f is %f\n", y, fabs(y));
    printf("Absolute value of %d is %d\n", z, abs(z));
}

#endif //FUNCTIONS_MATH_FUNCTIONS_H
