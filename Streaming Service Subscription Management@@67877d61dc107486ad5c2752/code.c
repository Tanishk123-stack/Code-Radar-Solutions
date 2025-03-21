// Your code here...
#include <stdio.h>
#include <string.h>

// Define the structure
struct Subscription {
    char username[50];
    char type[10];
    float cost;
};

int main() {
    int n;
    scanf("%d", &n); // Read the number of subscriptions

    struct Subscription subs[n]; // Array of structures

    // Counters for users and total revenue
    int basicUsers = 0, standardUsers = 0, premiumUsers = 0;
    float basicRevenue = 0, standardRevenue = 0, premiumRevenue = 0;

    // Read subscription data
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", subs[i].username, subs[i].type, &subs[i].cost);

        // Categorize by subscription type
        if (strcmp(subs[i].type, "Basic") == 0) {
            basicUsers++;
            basicRevenue += subs[i].cost;
        } else if (strcmp(subs[i].type, "Standard") == 0) {
            standardUsers++;
            standardRevenue += subs[i].cost;
        } else if (strcmp(subs[i].type, "Premium") == 0) {
            premiumUsers++;
            premiumRevenue += subs[i].cost;
        }
    }

    // Print the output in the required format
    printf("Basic: %d Users, Revenue: %.2f; ", basicUsers, basicRevenue);
    printf("Standard: %d Users, Revenue: %.2f; ", standardUsers, standardRevenue);
    printf("Premium: %d Users, Revenue: %.2f.\n", premiumUsers, premiumRevenue);

    return 0;
}
