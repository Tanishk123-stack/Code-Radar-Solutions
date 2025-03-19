#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read number of rows

    for (int i = 1; i <= N; i++) {  // Loop for rows
        int num = i % 2;  // Start with 1 if i is odd, 0 if even
        for (int j = 1; j <= i; j++) {  // Loop for columns
            printf("%d ", num);
            num = 1 - num;  // Toggle between 1 and 0
        }
        printf("\n");  // Move to next line
    }

    return 0;
}
