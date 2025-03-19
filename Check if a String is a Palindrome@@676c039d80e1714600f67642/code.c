#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Declare a string with a reasonable size
    int isPalindrome = 1; // Flag to check if the string is a palindrome

    scanf("%s", str); // Read the string (without spaces)

    int length = strlen(str);

    // Check if the string reads the same forward and backward
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome) {
        printf("Yes\n"); // The string is a palindrome
    } else {
        printf("No\n"); // The string is not a palindrome
    }

    return 0;
}
