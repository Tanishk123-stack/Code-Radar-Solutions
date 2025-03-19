// Your code here...#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200]; // Buffer size for input string
    int count = 0; // Word counter


    fgets(str, sizeof(str), stdin); // Read the full string including spaces

    int len = strlen(str);

    // Check if the string contains words
    for (int i = 0; i < len; i++) {
        // Check for the start of a new word
        if ((i == 0 || isspace(str[i - 1])) && !isspace(str[i])) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
