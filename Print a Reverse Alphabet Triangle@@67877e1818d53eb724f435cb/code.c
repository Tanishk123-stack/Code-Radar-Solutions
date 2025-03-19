#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read number of rows

    for (int i = N; i >= 1; i--) {  // Loop for rows (reverse order)
        for (char ch = 'A'; ch < 'A' + i; ch++) {  // Print A to current row number
            printf("%c ", ch);
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
