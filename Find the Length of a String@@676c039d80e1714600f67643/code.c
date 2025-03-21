// Your code here...
\#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    
    // Iterate until the null character is reached
    while (str[length] != '\0') {
        length++;
    }
    
    return length;
}

int main() {
    char str[1000];  // Assuming max input length is 1000 characters

    // Read the input string
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character if present
    if (str[stringLength(str) - 1] == '\n') {
        str[stringLength(str) - 1] = '\0';
    }

    // Print the length of the string
    printf("%d\n", stringLength(str));

    return 0;
}
