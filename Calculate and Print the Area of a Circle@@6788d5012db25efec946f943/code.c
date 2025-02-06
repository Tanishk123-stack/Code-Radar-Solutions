#include <stdio.h>

#define PI 3.14  // More precise value of π

int main() {
    double radius, area;

    // Read input
    scanf("%lf", &radius);

    // Compute area (π * r²)
    area = PI * radius * radius;

    // Print output with exact format (up to 6 decimal places)
    printf("Area: %.4lf\n", area);

    return 0;
}

