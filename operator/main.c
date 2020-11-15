#include <stdio.h>
#include "global_declarations.h"

int main() {
    int a, b;
    do {
        printf("Enter a:\n");
        scanf("%d", &a);
        printf("Enter b:\n");
        scanf("%d", &b);
        assignmentOperatorsDemo(a);
        increaseAndDecreaseOperatorsDemo(a);
        arithmeticOperatorsDemo(a, b);
        relationalOperatorsDemo(a, b);
        logicalOperatorsDemo(a, b);
        bitwiseOperatorsDemo(a, b);
    } while (a >= 0 && b >= 0);
    return 0;
}
