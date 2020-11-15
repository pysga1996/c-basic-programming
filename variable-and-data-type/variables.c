#include <stdio.h>

extern int a;
extern char b;
extern float c;
extern double d;

void variablesDemo() {
    printf("Variable a value is %d\n", a);
    printf("Variable b value is %hhi\n", b);
    printf("Variable c value is %f\n", c);
    printf("Variable d value is %lf\n", d);
}

