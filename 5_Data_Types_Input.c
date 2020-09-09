#include <stdio.h>

int main() {
    char c; // %c
    short s; // %hi
    unsigned short us; // hu
    int i; // %i of %d
    unsigned int ui; // %u
    long l; // %ld of %li
    long long ll; // %lli of % lld
    unsigned long long ull; // %llu
    float f; // %f
    double d; // %lf or %lF

    scanf("%u", &ui);
    printf("%u\n", ui);
    return 0;
}