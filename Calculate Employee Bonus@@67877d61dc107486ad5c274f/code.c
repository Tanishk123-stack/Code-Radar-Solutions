// Your code here...
#include <stdio.h>

// Structure definition
struct Employee {
    int id;
    char name[50];
    double salary;
};

int main() {
    int n;
    scanf("%d", &n); // Read number of employees

    struct Employee emp[n]; // Array of structures

    // Input employee details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %lf", &emp[i].id, emp[i].name, &emp[i].salary);
    }

    // Process and Output employee details with bonus
    for (int i = 0; i < n; i++) {
        double bonus;

        // Calculate bonus based on salary
        if (emp[i].salary < 50000) {
            bonus = emp[i].salary * 0.10;
        } else {
            bonus = emp[i].salary * 0.05;
        }

        // Print output
        printf("ID: %d, Name: %s, Bonus: %.2lf\n", emp[i].id, emp[i].name, bonus);
    }

    return 0;
}
