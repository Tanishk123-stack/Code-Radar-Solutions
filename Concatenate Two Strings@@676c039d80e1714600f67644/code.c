// Your code here...
#include <stdio.h>

void concatenateStrings(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;

    // Copy first string into result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Copy second string into result
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0';  // Null-terminate the concatenated string
}

int main() {
    char str1[1000], str2[1000], result[2000];

    // Read first string
    fgets(str1, sizeof(str1), stdin);
    // Remove newline character if present
    int len1 = 0;
    while (str1[len1] != '\0') {
        if (str1[len1] == '\n') {
            str1[len1] = '\0';
            break;
        }
        len1++;
    }

    // Read second string
    fgets(str2, sizeof(str2), stdin);
    // Remove newline character if present
    int len2 = 0;
    while (str2[len2] != '\0') {
        if (str2[len2] == '\n') {
            str2[len2] = '\0';
            break;
        }
        len2++;
    }

    // Concatenate strings
    concatenateStrings(str1, str2, result);

    // Print the concatenated string
    printf("%s\n", result);

    return 0;
}
