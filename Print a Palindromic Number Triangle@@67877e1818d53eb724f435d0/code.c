#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);  // Removed space
        }

        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);  // Removed space
        }

        printf("\n");  // Newline after each row
    }

    return 0;
}
