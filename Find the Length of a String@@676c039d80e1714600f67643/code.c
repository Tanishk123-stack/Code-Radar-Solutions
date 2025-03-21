#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[1000];  // Assuming a max length of 1000 characters

    // Read input
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("0\n"); // If input is empty, return 0
        return 0;
    }

    // Remove trailing newline character if present
    int len = stringLength(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;  // Adjust length
    }

    // Print correct length
    printf("%d\n", len);
    return 0;
}
