#include <stdio.h>

int main() {
    unsigned int a = 1, b = 2, next;
    int n = 98;

    printf("%u, %u", a, b);

    for (int i = 3; i <= n; i++) {
        next = a + b;

        if (next < 0) {
            unsigned int upper = next >> 16;  // Get the upper 16 bits
            unsigned int lower = next & 0xFFFF; // Get the lower 16 bits

            printf(", %u%u", upper, lower);
        } else {
            printf(", %u", next);
        }

        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}
