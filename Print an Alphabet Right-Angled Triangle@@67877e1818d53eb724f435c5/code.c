#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the number of rows

    // Loop for each row
    for (int i = 0; i < N; i++) {
        // Print alphabets starting from 'A'
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
