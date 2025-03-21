#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWords(char str[]) {
    int count = 0;
    int length = strlen(str);

    // Traverse the string
    for (int i = 0; i < length; i++) {
        // Check if current character is not a space and the previous character is a space or start of string
        if ((i == 0 || isspace(str[i - 1])) && !isspace(str[i])) {
            count++;
        }
    }
    
    return count;
}

int main() {
    char str[1000];  // Assuming max length of input string is 1000 characters
    
    // Read the full input line
    fgets(str, sizeof(str), stdin);
    
    // Remove the trailing newline character if present
    str[strcspn(str, "\n")] = 0;

    // Print the word count
    printf("%d\n", countWords(str));

    return 0;
}
