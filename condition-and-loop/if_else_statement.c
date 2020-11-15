#include <stdio.h>

void ifStatementDemo() {
    printf("#If condition:\n");
    int a;
    printf("Enter a:\n");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("a is an even number!\n");
    }
    printf("\n");
}

void ifElseStatementDemo() {
    printf("#If else condition:\n");
    int b;
    printf("Enter b:\n");
    scanf("%d", &b);
    if (b % 2 == 0) {
        printf("b is an even number!\n");
    } else {
        printf("b is an odd number!\n");
    }
    printf("\n");
}

void ifElseifElseStatementDemo() {
    printf("#If elseif else condition:\n");
    int c;
    printf("Enter c:\n");
    scanf("%d", &c);
    if (c > 0) {
        printf("c is c positive number!\n");
    } else if (c < 0) {
        printf("c is c negative number!\n");
    } else {
        printf("c is zero!\n");
    }
    printf("\n");
}
