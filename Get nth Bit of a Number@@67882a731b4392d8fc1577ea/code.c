
#include <stdio.h>

int main() {
    int num, n;
    
    
    scanf("%d %d", &num, &n);
    
    if (num & (1 << n))
        printf("1");
    else
        printf("Not Set\n");

    return 0;
}
