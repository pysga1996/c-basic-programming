#include <stdio.h>

void charInputDemo() {
    char inputStr[40];
    char inputStr1[30];
    char inputStr2[20];
    // gets accepts string containing space
    printf("Enter an integer:\n");
    gets(inputStr);
    printf("Value of input string is: '%s'\n", inputStr);
    // scanf accept multiple string, separate by space
    printf("Enter a float number:\n");
    scanf("%s%s", inputStr1, inputStr2);
    // 4.8 => minimum 4 chars, maximum 8 chars
    printf("Value of 2 input strings are '%s' and '%4.8s':\n", inputStr1, inputStr2);
}