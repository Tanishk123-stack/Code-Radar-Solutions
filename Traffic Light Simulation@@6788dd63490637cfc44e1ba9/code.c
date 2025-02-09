#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char traffic;
    scanf("%c", &traffic);

    switch(traffic)
    case 'R':
    printf("Stop");
    break;
    case 'G':
    printf("Go");
    break;
    case 'Y':
    printf("Slow Down");
    break;
    default:
    printf("Invalid Input");
    return 0;
}