#include <stdio.h>

void decimalToBinary(int num) {
    int binary[32]; // To store binary representation
    int i = 0;

    if (num == 0) {
        printf("0");
        return;
    }

    while (num > 0) {
        binary[i] = num & 1; // Get the least significant bit
        num >>= 1; // Right shift the number
        i++;
    }

    // Print the binary number in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int num;
    scanf("%d", &num); // Read an integer from input
    decimalToBinary(num); // Convert and print binary
    printf("\n");
    return 0;
}
