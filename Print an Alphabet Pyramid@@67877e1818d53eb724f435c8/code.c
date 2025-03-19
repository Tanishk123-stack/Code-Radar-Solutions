#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read number of rows

    for (int i = 0; i < N; i++) {
        // Print alphabets with correct spacing
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
            if (j < i) {
                printf(" ");  // Add space only between letters
            }
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
