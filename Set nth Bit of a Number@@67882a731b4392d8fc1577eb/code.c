#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n); // Read the number and bit position

    num = num | (1 << n); // Set the nth bit to 1

    printf("%d\n", num); // Print the updated number
    return 0;
}
