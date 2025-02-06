#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b); 

    int result = a | b; 

    if (result) { 
        printf("%d\n", result);
    } else {
        printf("Result is 0\n"); 
    }

    return 0;
}

