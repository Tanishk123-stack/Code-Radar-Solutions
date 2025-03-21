#include <stdio.h>
#include <string.h>

// Structure definition
struct Vehicle {
    char number[20];
    char type[10];
    float toll;
};

int main() {
    int n;
    scanf("%d", &n); // Read number of vehicles

    struct Vehicle vehicles[n]; // Array of structures
    float carToll = 0, truckToll = 0, bikeToll = 0; // Toll counters

    // Input vehicle details
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", vehicles[i].number, vehicles[i].type, &vehicles[i].toll);

        // Categorize and sum up tolls
        if (strcmp(vehicles[i].type, "Car") == 0) {
            carToll += vehicles[i].toll;
        } else if (strcmp(vehicles[i].type, "Truck") == 0) {
            truckToll += vehicles[i].toll;
        } else if (strcmp(vehicles[i].type, "Bike") == 0) {
            bikeToll += vehicles[i].toll;
        }
    }

    // Output the results with 2 decimal places
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f\n", carToll, truckToll, bikeToll);

    return 0;
}
