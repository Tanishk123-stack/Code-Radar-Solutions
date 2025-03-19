#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read input

    if (N > 0) {
        for (int i = 1; i <= N; i++) {
            printf("%d", i);
            if (i < N) {
                printf(" ");
            }
        }
    }
    
    return 0;
}
