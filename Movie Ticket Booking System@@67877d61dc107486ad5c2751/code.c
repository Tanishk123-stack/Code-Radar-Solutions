// Your code here...
#include <stdio.h>
#include <string.h>

// Structure definition
struct MovieTicket {
    char movie[50];
    char type[10];
    float price;
};

int main() {
    int n;
    scanf("%d", &n); // Read the number of tickets

    struct MovieTicket tickets[n]; // Array of structures
    float standardTotal = 0, premiumTotal = 0, vipTotal = 0; // Revenue counters

    // Read ticket details
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", tickets[i].movie, tickets[i].type, &tickets[i].price);

        // Categorize revenue based on ticket type
        if (strcmp(tickets[i].type, "Standard") == 0) {
            standardTotal += tickets[i].price;
        } else if (strcmp(tickets[i].type, "Premium") == 0) {
            premiumTotal += tickets[i].price;
        } else if (strcmp(tickets[i].type, "VIP") == 0) {
            vipTotal += tickets[i].price;
        }
    }

    // Output total revenue with two decimal places
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f\n", standardTotal, premiumTotal, vipTotal);

    return 0;
}
