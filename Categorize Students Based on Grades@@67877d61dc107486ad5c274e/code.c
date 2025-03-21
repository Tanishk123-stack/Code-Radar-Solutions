#include <stdio.h>

// Structure definition
struct Student {
    int roll_number;
    char name[50];
    double marks;
};

// Function to determine grade based on marks
char getGrade(double marks) {
    if (marks >= 85) {
        return 'A';
    } else if (marks >= 70) {  // Ensures marks from 70 to 84.99 fall in 'B'
        return 'B';
    } else {
        return 'C';
    }
}

int main() {
    int N;
    
    // Read number of students
    printf("Enter number of students: ");
    scanf("%d", &N);
    
    struct Student students[N];

    // Reading student details
    for (int i = 0; i < N; i++) {
        printf("Enter roll number, name, and marks: ");
        scanf("%d %s %lf", &students[i].roll_number, students[i].name, &students[i].marks);
    }

    // Display student details with grade
    printf("\nStudent Grades:\n");
    for (int i = 0; i < N; i++) {
        char grade = getGrade(students[i].marks);
        printf("Roll Number: %d, Name: %s, Grade: %c\n", students[i].roll_number, students[i].name, grade);
    }

    return 0;
}
