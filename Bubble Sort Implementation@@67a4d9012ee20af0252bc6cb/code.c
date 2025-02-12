#include<stdio.h>
int main(){
    int a[100], n, i, j;
        printf("enter the size of an array:-");
        scanf("%d", &n);
        printf("enter the %d elements:-",n);
        for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
        for(int i = 0; i < n; i++)
        if(a[i]>a[i+1]){
            int temp = a[i+1];
            a[i+1]=a[i];
            a[i] = temp;
        }
        for(int i = 0; i <n; i++)
        printf("%d", a[i]);
            return 0;

}
