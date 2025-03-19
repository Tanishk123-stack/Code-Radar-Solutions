#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b); // Read two integers

    // Swapping using XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("%d %d\n", a, b); // Print swapped values
    return 0;
}

