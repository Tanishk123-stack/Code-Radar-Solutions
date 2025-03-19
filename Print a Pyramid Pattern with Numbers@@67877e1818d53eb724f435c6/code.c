// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read the number of rows

    for (int i = 1; i <= N; i++) {
        // Print leading spaces for center alignment
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        
        // Print numbers
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("%d", j);
        }

        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
