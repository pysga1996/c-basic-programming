#include <stdio.h>
#include <stdlib.h>

void intInputDemo() {
    int a;
    char inputStr[40];
    char* remainderStr;
    printf("Enter a value\n");
    gets(inputStr);
    a = strtol(inputStr, &remainderStr, 10);
    // minimum 8 chars, filled with space if less than 8 chars
    printf("Value of a is: %8d\n", a);
}

