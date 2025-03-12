// Your code here...
#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);

    // If number is 0, all bits are 0, so trailing zeros = 32
    if (num == 0) {
        printf("32\n");
        return 0;
    }

    // Count trailing zeros
    while ((num & 1) == 0) {
        count++;
        num >>= 1;
    }

    printf("%d\n", count);
    return 0;
}
