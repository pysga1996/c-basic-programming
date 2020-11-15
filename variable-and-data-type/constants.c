#include <stdio.h>
#define SUM(x, y) (x)+(y)

const int MAX = 100;
const float PI = (float) 3.14;

void constantsDemo() {
    printf("Constant MAX value is %d\n", MAX);
    printf("Variable PI value is %f\n", PI);
    printf("Sum of 1 and 2 is %d\n", SUM(1, 2));
}
