// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%[^\n]", str);

    int n = strlen(str);
  
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    int max = 0;
    char mostfrequent;
    for (int i = 0; i < n; i++) {
        if (str[i] == ' ') continue;
        
        int count = 1;
        while (i + 1 < n && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        if (count > max) {
            max = count;
            mostfrequent = str[i];
        }
    }

    printf("%c", mostfrequent);

    return 0;
}