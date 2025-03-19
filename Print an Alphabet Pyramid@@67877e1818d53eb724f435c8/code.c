#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read the number of rows

    for (int i = 0; i < N; i++) {
        // Print leading spaces for centering
        for (int j = 0; j < N - i - 1; j++) {
            printf(" ");
        }

        // Print alphabets with spaces
        for (int j = 0; j <= i; j++) {
            printf("%c ",'A' + j);
        }

        printf("\n");  // Move to the next line
    }

    return 0;
}

