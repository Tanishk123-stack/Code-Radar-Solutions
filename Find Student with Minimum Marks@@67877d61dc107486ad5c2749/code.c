#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n], minStudent;
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
        if (i == 0 || students[i].marks < minStudent.marks) {
            minStudent = students[i];
        }
    }

    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n", 
            minStudent.roll, minStudent.name, minStudent.marks);

    return 0;
}
