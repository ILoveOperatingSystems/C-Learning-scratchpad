#include <stdio.h>

void fuckingFunction(int fuckingValue) {
printf("the fucking values is: %d", fuckingValue);
}

int main() {

    short int x = 35;
    printf("x is %d\n", x);
    short int * y = &x;
    *y = 23;
    printf("x is %d\n", x);

    printf("value stored at addr y points is %d\n", *y);
    printf("y addr is %p / %d\n", &y, &y);
    printf("y value is %p / %d\n", y, y);
    printf("x addr is %p / %d\n", &x, &x);
    fuckingFunction(345678);

/* & means address of */
/* * is dereference operator gets value
 from the addr stored in pointer */

}
