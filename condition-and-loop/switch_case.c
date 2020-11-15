#include <stdio.h>

void countDaysInMonth(int month) {
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("The given month has 31 days!\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("The given month has 31 days!\n");
            break;
        case 2:
            printf("The given month has 28 or 29 days!\n");
            break;
        default:
            printf("Not a valid month!\n");
    }
}

void switchCaseDemo() {
    printf("#Switch case:\n");
    int month;
    do {
        printf("Enter a number presenting a month (enter 0 to exit):\n");
        scanf("%d", &month);
        countDaysInMonth(month);
    } while (month > 0 && month < 13);
    printf("\n");
}
