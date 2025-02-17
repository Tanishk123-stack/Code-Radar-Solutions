#include <stdio.h>
int main() {
    int i, j , k , a;
    scanf("%d", &a);
    for(i = 1; i<= a;i++){
        for(j = 1; j<= 2*a-1; j++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}