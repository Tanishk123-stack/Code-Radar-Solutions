#include<stdio.h>
struct Student{
    int rollNumber;
    char name[50];
    float marks;
}
int main{
    int n;

    printf("Enter the numner of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for(int i = 0; i < n; i++){
        printf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);


        for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", 
               students[i].rollNo, students[i].name, students[i].marks);
    }

    return 0;





    }






}