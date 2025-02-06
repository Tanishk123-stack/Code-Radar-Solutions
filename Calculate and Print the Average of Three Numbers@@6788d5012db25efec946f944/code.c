#include <stdio.h>


int main() {
    double num1, num2, num3, Average;
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    Average = (num1+num2+num3)/ 3.0;
    printf("Average: %.2lf\n", Average);
    
    return 0;
}