// Your code here...
4#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);

    // If number is 0, all bits are 0, so leading zeros = 32
    if (num == 0) {
        printf("32\n");
        return 0;
    }

    // Check bit by bit from the left (MSB to LSB)
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1)
            break;
        count++;
    }

    printf("%d\n", count);
    return 0;
}
