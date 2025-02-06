#include <stdio.h>


int main() {
    double num1, num2, num3, average;
    printf("enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    average = (num1+num2+num3)/ 3.0;
    printf("The average is: %.2lf\n", average);
    
    return 0;
}