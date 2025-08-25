#include <stdio.h>

int main() {

for (int i; i < 1000000; i++) {
if (i & 1) {
        printf("%i is odd\n", i);
    }   else {
        printf("%i is even\n", i);
    }
}

return 0;
}
