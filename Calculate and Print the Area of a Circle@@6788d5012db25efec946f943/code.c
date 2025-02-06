#include <stdio.h>

#define PI 3.14159  // Define constant for π

int main() {
    double radius, Area;

    // Taking input from user
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculating area (π * r²)
    Area = PI * radius * radius;

    // Printing the result
    printf("Area: %.2lf\n", Area);

    return 0;
}