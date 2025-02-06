#include <stdio.h>

#define PI 3.14159  // Define constant for π

int main() {
    double radius, area;

    // Taking input from user
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculating area (π * r²)
    area = PI * radius * radius;

    // Printing the result
    printf("The area of the circle is: %.2lf\n", area);

    return 0;
}