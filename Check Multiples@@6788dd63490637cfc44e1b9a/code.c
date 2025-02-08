#include <stdio.h>

int main() {
    int num, divisor;
    scanf("%d %d", &num, &divisor);

    if (num % divisor == 0)
        printf("Yes");
    else
        printf("No");

    return 0;
}
