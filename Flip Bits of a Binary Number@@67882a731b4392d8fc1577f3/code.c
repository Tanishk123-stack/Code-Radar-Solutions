#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);  // Read an integer from input
    printf("%d\n", ~num);  // Print the bitwise NOT of the number
    return 0;
}
