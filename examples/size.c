#include <stdio.h>

short int main() {
    char bs[8];
    printf("size of 8 arrary char: %lu bytes\n", sizeof(bs));
    printf("size of char: %lu bytes\n", sizeof(char));
    printf("size of int: %lu bytes\n", sizeof(int));
    printf("size of double: %lu bytes\n", sizeof(double));
    printf("size of float: %lu bytes\n", sizeof(float));
    printf("size of lone: %lu bytes\n", sizeof(long));
    printf("size of short: %lu bytes\n", sizeof(short));
    return 0;
}
