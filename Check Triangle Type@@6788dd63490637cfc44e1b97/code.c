#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a + b >c && a + c >b && b +c > a){
        if(a == b && b == c)
        printf("equilateral\n");
        if(a == b && b == c && a == c)
        printf("isosceles\n");
        else
        printf("Scalene\n");}
        return 0;
}