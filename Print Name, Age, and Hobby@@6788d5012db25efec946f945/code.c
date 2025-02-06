#include <stdio.h>
#include <string.h>

int main() {
    char name[50], hobby[50];  
    int age;

    
    scanf("%s", name);         
    scanf("%d", &age);         
    scanf("%s", hobby)

    
    int len = strlen(hobby);
    if (len > 0 && hobby[len - 1] == '\n') {
        hobby[len - 1] = '\0';
    }

    
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}
