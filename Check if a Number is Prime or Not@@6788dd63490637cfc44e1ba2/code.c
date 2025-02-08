#include <stdio.h>
#include <stdbool.h>  // for using bool, true, false

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    
    scanf("%d", &n);

    if (is_prime(n)) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}
