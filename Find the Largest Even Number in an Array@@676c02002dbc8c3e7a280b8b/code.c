// Your code here...
#include <stdio.h>

int main() {
    int N, num, maxEven = -1;
    
    // Read the size of the array
    scanf("%d", &N);
    
    // Iterate through the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        
        // Check if the number is even and update maxEven
        if (num % 2 == 0 && num > maxEven) {
            maxEven = num;
        }
    }
    
    // Print the largest even number or -1 if none exists
    printf("%d\n", maxEven);
    
    return 0;
}
