#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read the number of rows

    for (int i = 1; i <= N; i++) {
        // Print leading spaces for centering
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }

        // Print numbers with spaces
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");  // Move to the next line
    }

    return 0;
}
