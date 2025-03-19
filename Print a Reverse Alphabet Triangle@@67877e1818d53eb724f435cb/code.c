#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read the number of rows

    for (int i = 1; i <= N; i++) {  // Loop for rows
        for (char ch = 'A' + i - 1; ch >= 'A'; ch--) {  // Loop for alphabets in reverse
            printf("%c ", ch);
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
