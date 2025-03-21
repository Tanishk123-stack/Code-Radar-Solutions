// Your code here...
#include <stdio.h>

struct Student {
    int roll;
    char name[100];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);
    
    struct Student students[n];
    int allPassed = 1; // Assume all students passed initially
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
        if (students[i].marks <= 50) {
            allPassed = 0; // If any student has marks <= 50, set flag to 0
        }
    }
    
    if (allPassed) {
        printf("All Passed\n");
    } else {
        printf("Not All Passed\n");
    }

    return 0;
}
