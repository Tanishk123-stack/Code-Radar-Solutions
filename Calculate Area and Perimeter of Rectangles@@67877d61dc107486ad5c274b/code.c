#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    int n;
    scanf("%d", &n);
    
    struct Rectangle rectangles[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &rectangles[i].length, &rectangles[i].breadth);
    }
    
    for (int i = 0; i < n; i++) {
        float area = (float)(rectangles[i].length * rectangles[i].breadth);
        float perimeter = 2 * (rectangles[i].length + rectangles[i].breadth);
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n", i + 1, area, perimeter);
    }

    return 0;
}
