#include <stdio.h>
#include <string.h>

int main() {
    char name[50], hobby[50];  
    int age;

    // Taking input
    scanf("%s", name);         // Read name (single word)
    scanf("%d", &age);         // Read age
    getchar();                 // Consume the newline character left by scanf
    fgets(hobby, sizeof(hobby), stdin); // Read full line for hobby

    // Removing trailing newline from fgets input
    int len = strlen(hobby);
    if (len > 0 && hobby[len - 1] == '\n') {
        hobby[len - 1] = '\0';
    }

    // Printing output
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}
