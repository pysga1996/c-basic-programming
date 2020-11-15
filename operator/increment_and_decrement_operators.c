#include <stdio.h>

void iado_increase(int a) {
    printf("++a = %d\n", ++a);
    printf("a++ = %d\n", a++);
}

void iado_decrease(int a) {
    printf("--a = %d\n", --a);
    printf("a-- = %d\n", a--);
}

void increaseAndDecreaseOperatorsDemo(int a) {
    printf("#Increase and Decrease Operators demo:\n");
    iado_increase(a);
    iado_decrease(a);
    printf("\n");
}
