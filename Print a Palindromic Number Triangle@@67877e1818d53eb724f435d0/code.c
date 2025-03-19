#include <stdio.h>

void printPalindromicTriangle(int N) {
    for (int i = 1; i <= N; i++) {
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line
    }
}

int main() {
    int N;
    scanf("%d", &N); // Read input
    printPalindromicTriangle(N);
    return 0;
}
