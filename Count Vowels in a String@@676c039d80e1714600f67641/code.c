#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Declare a string with a reasonable size
    int count = 0; // Counter for vowels

    fgets(str, sizeof(str), stdin); // Use fgets to read the entire line, including spaces

    // Loop through the string
    for (int i = 0; i < strlen(str); i++) {
        char c = str[i];
        // Check if the character is a vowel
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
