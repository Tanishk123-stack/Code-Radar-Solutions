#include <stdio.h>

#define PI 3.14159  // Define constant for π

int main() {
    double radius, Area;

    
    scanf("%lf", &radius);

    
    Area = PI * radius * radius;

    
    printf("Area: %.2lf\n", Area);

    return 0;
}