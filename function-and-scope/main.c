#include <stdio.h>
#include "function-and-scope.h"

int main() {
    double x, y;
    int z;
    printf("Enter values of x, y, z respectively:\n");
    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%d", &z);
    demoMathFunction(x, y, z);
    demoPassByRefAndVal();
    scopeDemo();
    return 0;
}
