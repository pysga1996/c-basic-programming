#include <stdio.h>

void assignment_equalAssign(int* a, int number) {
    *a = number;
}

void assignment_additionAssign(int* a, int number) {
    *a += number;
}

void assignment_subtractionAssign(int* a, int number) {
    *a -= number;
}

void assignment_multiplicationAssign(int* a, int number) {
    *a *= number;
}

void assignment_divisionAssign(int* a, int number) {
    *a /= number;
}

void assignment_moderationAssign(int* a, int number) {
    *a %= number;
};

void assignmentOperatorsDemo(int a) {
    printf("#Relational Operators demo:\n");
    printf("Before assignment, a is %d\n", a);
    assignment_equalAssign(&a, 3);
    printf("After assignment, a is %d\n", a);
    printf("Before addition assignment, a is %d\n", a);
    assignment_additionAssign(&a, 7);
    printf("After addition assignment, a is %d\n", a);
    printf("Before subtraction assignment, a is %d\n", a);
    assignment_subtractionAssign(&a, 9);
    printf("After subtraction assignment, a is %d\n", a);
    printf("Before multiplication assignment, a is %d\n", a);
    assignment_multiplicationAssign(&a, 5);
    printf("After multiplication assignment, a is %d\n", a);
    printf("Before division assignment, a is %d\n", a);
    assignment_divisionAssign(&a, 2);
    printf("After division assignment, a is %d\n", a);
    printf("Before moderation assignment, a is %d\n", a);
    assignment_moderationAssign(&a, 1);
    printf("After moderation assignment, a is %d\n", a);
    printf("\n");
}
