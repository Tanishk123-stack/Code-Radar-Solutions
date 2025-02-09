#include <stdio.h>


int main() {
    int num1, num2;
    char op;

    printf("Enter two numbers and an operator (+, -, *, /): ");
    scanf("%d %d %c", &num1, &num2, &op);


    switch(op) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            else {
                printf("%d\n", num1 / num2);
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}
    