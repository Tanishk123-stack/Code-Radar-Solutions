// Your code here...
#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    int price;
};

int main() {
    int n, threshold;
    scanf("%d", &n);
    
    struct Book books[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %s %d", books[i].title, books[i].author, &books[i].price);
    }

    scanf("%d", &threshold);

    for (int i = 0; i < n; i++) {
        if (books[i].price > threshold) {
            printf("Title: %s, Author: %s, Price: %d\n", books[i].title, books[i].author, books[i].price);
        }
    }

    return 0;
}
