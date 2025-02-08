#include <stdio.h>

int main() {
    int cost_price, selling_price;
    
    scanf("%d %d", &cost_price, &selling_price);

    if (selling_price > cost_price)
        printf("Profit\n");
    else if (selling_price < cost_price)
        printf("Loss\n");
    else
        printf("No Profit No Loss\n");

    return 0;
}
