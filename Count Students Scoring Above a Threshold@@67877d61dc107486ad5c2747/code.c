#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);
    
    struct Student students[n], topScorer;
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);

        float threshold;
        scanf("%f", &threshold);

        for (int i = 0; i < N; i++) {
        if (students[i].marks > threshold) {
            count++;
        }
    }

        printf("%d\n", count);






        return 0;
    }
}