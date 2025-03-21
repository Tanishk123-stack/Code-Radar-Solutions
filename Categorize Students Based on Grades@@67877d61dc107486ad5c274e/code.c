// Your code here...
#include <stdio.h>

struct Student {
    int roll_number;
    char name[100];
    double marks;
};

char getGrade(double marks) {
    if (marks >= 85)
        return 'A';
    else if (marks >= 70 && marks <= 84)
        return 'B';
    else
        return 'C';
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %lf", &students[i].roll_number, students[i].name, &students[i].marks);
    }

    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Grade: %c\n", 
               students[i].roll_number, students[i].name, getGrade(students[i].marks));
    }

    return 0;
}
