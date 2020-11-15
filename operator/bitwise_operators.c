#include <stdio.h>
#include <stdlib.h>

void printBinaryFormat(unsigned int a) {
    char buffer[33];
    itoa(a, buffer, 2);
    printf("binary: %s\n", buffer);
}

void andBitwise(unsigned int a, unsigned int b) {
    printf("a & b in ");
    printBinaryFormat(a & b);
}

void orBitwise(unsigned int a, unsigned int b) {
    printf("a | b in ");
    printBinaryFormat(a | b);
}

void xorBitwise(unsigned int a, unsigned int b) {
    printf("a ^ b in ");
    printBinaryFormat(a ^ b);
}

void notBitwise(unsigned int b) {
    printf("~b in ");
    printBinaryFormat(~b);
}

void leftShift(unsigned int b, unsigned int c) {
    printf("b << %dbit in ", b);
    printBinaryFormat(b << c);
}

void rightShift(unsigned int b, unsigned int c) {
    printf("b >> %dbit in ", c);
    printBinaryFormat(b >> c);
}

void bitwiseOperatorsDemo(int a, int b) {
    printf("#Bitwise Operators demo:\n");
    printf("a in ");
    printBinaryFormat(a);
    printf("b in ");
    printBinaryFormat(b);
    andBitwise(a, b);
    orBitwise(a, b);
    xorBitwise(a, b);
    notBitwise(b);
    leftShift(b, 8);
    rightShift(b, 9);
    printf("\n");
}
