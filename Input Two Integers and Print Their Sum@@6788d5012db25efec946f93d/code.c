#include <stdio.h>

int main() {
    int a, b;

    // Corrected scanf format string
    scanf("%d %d", &a, &b);
    
    int c = a + b;
    printf("Sum: %d\n", c);
    
    return 0;
}
