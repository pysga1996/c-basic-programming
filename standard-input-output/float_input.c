#include <stdio.h>
#include <stdlib.h>

void floatInputDemo() {
    float a;
    char inputStr[40];
    char* remainderStr;
    printf("Enter a value\n");
    gets(inputStr);
    a = strtof(inputStr, &remainderStr);
    // padding 0, total 8 digits, last 6 digit is decimal part
    printf("Value of a is: %-8.6f\n", a);
}
