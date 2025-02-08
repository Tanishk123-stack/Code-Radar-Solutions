#include <stdio.h>
void main() {
    int a,i,n=0;
    scanf("%d", &a);
    if(a==2 || a==1 || a==3)
    {
        printf("Prime");
    }else if(a>3) {
        for(i=2;i<=a/2;i++)
        {
            if(a%i==0){
                printf("Not Prime");
                return;
            }else{
                n=0;
            }
        }
    if(n==0){
        printf("Prime");}
        }
}