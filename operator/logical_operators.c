#include <stdio.h>
#include <string.h>

void andOperator(int a, int b) {
    char statement[] = "a is greater than 5 and b is less than 10? ";
    char true[] = "true";
    char false[] = "false";
    char result[5];
    if (a > 5 && b < 10) {
        strcpy(result, true);
    } else {
        strcpy(result, false);
    }
    strcat(statement, result);
    strcat(statement, "\n");
    printf("%s", statement);
}

void orOperator(int a, int b) {
    char statement[] = "a is equal 0 and b is less than 6? ";
    char true[] = "true";
    char false[] = "false";
    char result[5];
    if (a == 0 || b < 6) {
        strcpy(result, true);
    } else {
        strcpy(result, false);
    }
    strcat(statement, result);
    strcat(statement, "\n");
    printf("%s", statement);
}

void notOperator(int a, int b) {
    char statement[] = "a is less than 3 and b is equal 2? ";
    char true[] = "true";
    char false[] = "false";
    char result[5];
    if (a < 6 || b == 2) {
        strcpy(result, true);
    } else {
        strcpy(result, false);
    }
    strcat(statement, result);
    strcat(statement, "\n");
    printf("%s", statement);
}

void logicalOperatorsDemo(int a, int b) {
    printf("#Logical Operators demo:\n");
    andOperator(a, b);
    orOperator(a, b);
    notOperator(a, b);
    printf("\n");
}
