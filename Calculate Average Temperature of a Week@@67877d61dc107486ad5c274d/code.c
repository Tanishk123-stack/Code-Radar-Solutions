// Your code here...
#include <stdio.h>

// Structure definition
struct Day {
    char name[20];
    double temperature;
};

int main() {
    struct Day week[7];  // Array to store 7 days
    double sum = 0.0, average;

    // Input 7 days and temperatures
    for (int i = 0; i < 7; i++) {
        scanf("%s %lf", week[i].name, &week[i].temperature);
        sum += week[i].temperature;
    }

    // Calculate average temperature
    average = sum / 7.0;

    // Print result rounded to 2 decimal places
    printf("Average Temperatur: %.2lf\n", average);

    return 0;
}
