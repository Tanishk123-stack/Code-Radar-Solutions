#include <stdio.h>

int main() {
    int num, shift;
    
    // Taking two integer inputs
    scanf("%d %d", &num, &shift);
    
    // Performing left shift operation
    int result = num << shift;
    
    // Printing the result
    printf("%d\n", result);
    
    return 0;
}
