#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    double price;
};

int main() {
    int n;
    double threshold;
    
    scanf("%d", &n);
    
    struct Book books[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %s %lf", books[i].title, books[i].author, &books[i].price);
    }

    scanf("%lf", &threshold);

    printf("Books above price %.2lf:\n", threshold);

    for (int i = 0; i < n; i++) {
        if (books[i].price > threshold) {
            printf("Title: %s, Author: %s, Price: %.2lf\n", books[i].title, books[i].author, books[i].price);
        }
    }

    return 0;
}
