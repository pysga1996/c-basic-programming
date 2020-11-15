#include <stdio.h>

// global var
int g;

int scopeDemo() {
    // local var
    int a, b;
    a = 10;
    b = 20;
    g = a + b;

    // int g = 50; if local var and global var has a same name, local var is preferred
    printf("Value of a = %d, b = %d and g = %d\n", a, b, g);
    return 0;
}

