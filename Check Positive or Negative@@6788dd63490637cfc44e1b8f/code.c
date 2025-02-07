#include <stdio.h>


int main() {
    int n ;
    scanf("%d", &n);

    if(n>0){
        printf("Positive");
    }else{
        printf("Negative");
    }
    else if(n=0){
        printf("Zero");
    }
   
    return 0;
}