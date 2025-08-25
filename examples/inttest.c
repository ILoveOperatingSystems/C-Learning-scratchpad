#include <stdio.h>
#include <limits.h>
short int main() {
int bs = 0;
printf("size in bytes of int: %d\n", sizeof(bs));
printf("upper limit of a short is: %d\n", SHRT_MAX);
printf("lower limit of a short is: %d\n", SHRT_MIN);
printf("upper limit of int: %d\n", INT_MAX);
printf("lower limit of int: %d\n", INT_MIN);
printf("upper limit of uint: %d\n", UINT_MAX);
printf("upper limit of ushort: %d\n", USHRT_MAX);
return 0;
}
