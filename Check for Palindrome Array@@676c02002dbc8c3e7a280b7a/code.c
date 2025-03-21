// Your code here...

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=n-1;i>=0;i--){
        arr2[n-i-1]=arr1[i];
    }
    int equal=1;
    for(int i=0;i<n;i++){
        if(arr1[i]!=arr2[i]){
            equal=0;
        }
    }
    if(equal){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
