// Your code here...
#include <stdio.h>

void printIncreasingNumericPyramid(int N) {
    for (int i = 1; i <= N; i++) {
        // Print leading spaces for alignment
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        
        // Print numbers in increasing order
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n"); // Move to the next line
    }
}

int main() {
    int N;
    scanf("%d", &N); // Read input
    printIncreasingNumericPyramid(N);
    return 0;
}
