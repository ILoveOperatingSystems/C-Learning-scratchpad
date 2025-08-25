#include <stdio.h>
short int main () {
char hi[] = {0x22, 0x36, 0x3E};
char* test[] = {22, 33, 44};
printf("%hi\n", hi[1]);
/* assignment makes pointer from integer without a cast
error produced by the following line.
*/
printf("%hi\n", test[0]); //still works right though.
return 0;
}
