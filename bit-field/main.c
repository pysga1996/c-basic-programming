#include <stdio.h>

struct {
    unsigned int chieurong: 1;
    unsigned int chieucao: 1;
} trangthai;

int main() {
    printf("%llu", sizeof(trangthai));
}
