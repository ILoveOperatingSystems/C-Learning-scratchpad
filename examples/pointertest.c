#include <stdio.h>

short int x = 34;
short int y = 13;
short int bs(short int *x) {
    return *x = *x + 2 ;
}
short int main() {
    printf("%i", bs(&y));
    printf("%i", bs(&x));

    return 0;
}
