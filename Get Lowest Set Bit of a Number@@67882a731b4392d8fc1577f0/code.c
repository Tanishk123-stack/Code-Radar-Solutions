// Your code here...
#include <stdio.h>

int main() {
    int num, pos = 0;
    scanf("%d", &num);

    // Find the position of the lowest set bit
    while ((num & 1) == 0) {
        num >>= 1;
        pos++;
    }

    printf("%d\n", pos);
    return 0;
