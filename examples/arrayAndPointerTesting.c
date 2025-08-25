#include <stdio.h>

int main() {
char bull[] = "meep";
//For some fucking reason C makes ag's addr be the addr of "hello"
//rather than storing a char pointer in ag[0] || maybe not?
char * ag[] = "Hello";
printf("%p\n", ag); //this one
printf("%s\n", *ag); //print hello
printf("%p\n", ag[0]); //this on can be printed as string. diff addr
printf("%p\n", &ag); //this one
printf("%p\n", &ag[0]); //and this one give the same addr
printf("End of ag.\n");
char ** ar[] = "there"; //imcompat type error still runs though...
printf("%p\n", ar);
printf("%p\n", ar[0]);
printf("%s\n", ar[0]);
printf("%p\n", &ar);
printf("%p\n", &ar[0]);
printf("end of ar\n");
char * bs = bull;
printf("%p\n", bs);
printf("bull addr %p\n", bull);
printf("%p\n", *bs);
printf("%s\n", bull); //this prints meep
printf("%s\n", bs);
return 0;
}
