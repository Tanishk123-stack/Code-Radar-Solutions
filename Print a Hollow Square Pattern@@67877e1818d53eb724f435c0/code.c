#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the size of the square

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // Print '*' if it's the first or last row, or first or last column
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
