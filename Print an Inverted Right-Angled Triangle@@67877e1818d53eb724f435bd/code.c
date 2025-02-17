#include <stdio.h>
int main() {
    int a,i,j;
    scanf("%d", &a);
    for(i=0;i<=a-1;i++)
    {
        for(j=1;j<=a-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}