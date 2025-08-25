#include <stdio.h>
#include <stdint.h>

uint32_t state = 92854;

// from wikipedia
uint32_t lcg_parkmiller(uint32_t *state)
{
	return *state = (uint64_t)*state * 48271 % 0x7fffffff;
}
// endof wiki code

short int main() {
    for (int i = 0; i < 1000000; i++) {
        printf("%i\n", lcg_parkmiller(&state));
    }

return 0;
}
