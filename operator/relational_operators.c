#include <string.h>
#include <stdio.h>

void isEqual(int a, int b) {
    char statement[] = "a is equal b? ";
    char true[] = "true";
    char false[] = "false";
    char result[5];
    if (a == b) {
        strcpy(result, true);
    } else {
        strcpy(result, false);
    }
    strcat(statement, result);
    strcat(statement, "\n");
    printf("%s", statement);
}

void isGreaterThan(int a, int b) {
    char statement[] = "a is greater than b? ";
    char true[] = "true";
    char false[] = "false";
    char result[5];
    if (a > b) {
        strcpy(result, true);
    } else {
        strcpy(result, false);
    }
    strcat(statement, result);
    strcat(statement, "\n");
    printf("%s", statement);
}

void isGreaterThanOrEqual(int a, int b) {
    char statement[] = "a is greater than or equal b? ";
    char true[] = "true";
    char false[] = "false";
    char result[5];
    if (a >= b) {
        strcpy(result, true);
    } else {
        strcpy(result, false);
    }
    strcat(statement, result);
    strcat(statement, "\n");
    printf("%s", statement);
}

void isLessThan(int a, int b) {
    char statement[] = "a is less than b? ";
    char true[] = "true";
    char false[] = "false";
    char result[5];
    if (a < b) {
        strcpy(result, true);
    } else {
        strcpy(result, false);
    }
    strcat(statement, result);
    strcat(statement, "\n");
    printf("%s", statement);
}

void isLessThanOrEqual(int a, int b) {
    char statement[] = "a is lesser than or equal b? ";
    char true[] = "true";
    char false[] = "false";
    char result[5];
    if (a <= b) {
        strcpy(result, true);
    } else {
        strcpy(result, false);
    }
    strcat(statement, result);
    strcat(statement, "\n");
    printf("%s", statement);
}

void isDifferentFrom(int a, int b) {
    char statement[] = "a is different from b? ";
    char true[] = "true";
    char false[] = "false";
    char result[5];
    if (a != b) {
        strcpy(result, true);
    } else {
        strcpy(result, false);
    }
    strcat(statement, result);
    strcat(statement, "\n");
    printf("%s", statement);
}

void relationalOperatorsDemo(int a, int b) {
    printf("#Relational Operators demo:\n");
    isEqual(a, b);
    isGreaterThan(a, b);
    isGreaterThanOrEqual(a, b);
    isLessThan(a, b);
    isLessThanOrEqual(a, b);
    isDifferentFrom(a, b);
    printf("\n");
}
