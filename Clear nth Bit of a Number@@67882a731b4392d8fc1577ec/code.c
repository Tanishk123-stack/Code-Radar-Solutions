#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);

    // Clear the nth bit using bitwise AND with NOT
    num = num & ~(1 << n);

    printf("%d\n", num);
    return 0;
}