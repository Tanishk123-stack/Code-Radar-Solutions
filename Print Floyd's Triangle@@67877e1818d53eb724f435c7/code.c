#include <stdio.h>

int main() {
    int N, num = 1;
    scanf("%d", &N);  // Read number of rows

    for (int i = 1; i <= N; i++) {  // Loop for rows
        for (int j = 1; j <= i; j++) {  // Loop for numbers in each row
            printf("%d ", num);
            num++;  // Increment number
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
