#include <stdio.h>
#include <zconf.h>

void characterTypeDemo() {
    printf("Size of char type: %llu\n", sizeof(char));
    printf("Size of signed char type: %llu\n", sizeof(signed char));
    printf("Size of unsigned char type: %llu\n", sizeof(unsigned char));
}

void booleanTypeDemo() {
    printf("Size of boolean type: %llu\n", sizeof(_Bool));
}

void intTypeDemo() {
    printf("Size of int type: %llu, range from %d to %d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("Size of short int type: %llu, range from %d to %d\n", sizeof(short int), SHRT_MIN, SHRT_MAX);
    printf("Size of long int type: %llu, range from %li to %li\n", sizeof(long int), LONG_MIN, LONG_MAX);
    printf("Size of long long int type: %llu, range from %lli to %lli\n", sizeof(long long int), LONG_LONG_MIN, LONG_LONG_MAX);
    printf("Size of signed int type: %llu\n", sizeof(signed int));
    printf("Size of unsigned int type: %llu\n", sizeof(unsigned int));
}

void floatTypeDemo() {
    printf("Size of float type: %llu\n", sizeof(float));
    printf("Size of double type: %llu\n", sizeof(double));
    printf("Size of long double type: %llu\n", sizeof(long double));
}

