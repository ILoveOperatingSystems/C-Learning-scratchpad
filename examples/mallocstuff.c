#include <stdio.h>

int main() {
char * stringy;
char * stringy2;
char * mystr;

stringy = malloc(sizeof(char) * 2 );
stringy2 = (char *) stringy;
mystr = (char *) malloc(sizeof(char) * 2);

printf("string is: %p\n", stringy);
printf("stringy2 is: %p\n", stringy2);
printf("mystr is: %p\n", mystr);

return 0;
}

/*
mallocstuff.c:7: warning: implicit declaration of function 'malloc'
mallocstuff.c:7: warning: assignment makes pointer from integer without a cast
mallocstuff.c:7: warning: cast between pointer and integer of different size
mallocstuff.c:8: warning: cast between pointer and integer of different size
*/
