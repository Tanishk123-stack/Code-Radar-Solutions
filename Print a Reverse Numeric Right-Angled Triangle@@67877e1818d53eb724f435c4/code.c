#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the number of rows

    // Loop for each row
    for (int i = N; i >= 1; i--) {
        // Print numbers in reverse order with spaces
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
