#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int N, count = 0;
    scanf("%d", &N);

    struct Student students[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    float threshold;
    scanf("%f", &threshold);

    for (int i = 0; i < N; i++) {
        if (students[i].marks > threshold) {
            count++;
        }
    }

    printf("Count of students scoring above %.2f: %d\n", threshold, count);

    return 0;
}
