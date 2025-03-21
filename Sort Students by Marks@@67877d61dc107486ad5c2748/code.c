#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[100];
    float marks;
};

// Function to swap two students
void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort students by marks in descending order
void sortStudents(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    struct Student students[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
    }
    
    // Sort students by marks
    sortStudents(students, n);
    
    // Print sorted students
    for (int i = 0; i < n; i++) {
        printf("%d %s %.2f\n", students[i].roll, students[i].name, students[i].marks);
    }

    return 0;
}
