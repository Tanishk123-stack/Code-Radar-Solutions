#include <stdio.h>
#include <limits.h>  // Include for INT_MIN

int main() {
    int N, num, maxEven = INT_MIN;  // Use INT_MIN to handle negative even numbers
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        
        if (num % 2 == 0 && num > maxEven) {
            maxEven = num;
        }
    }
    
    // If no even number was found, print -1
    if (maxEven == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", maxEven);
    }
    
    return 0;
}
