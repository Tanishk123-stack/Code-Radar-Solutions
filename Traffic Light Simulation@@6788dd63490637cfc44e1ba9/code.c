#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char traffic;
    scanf("%c", &traffic);

    switch(traffic){
    case 'R':
        printf("Stop\n");
        break;
    case 'G':
        printf("Go\n");
            break;
    case 'Y':
        printf("Slow Down\n");
        break;
    default:
        printf("Invalid input\n");
        }
    return 0;
}