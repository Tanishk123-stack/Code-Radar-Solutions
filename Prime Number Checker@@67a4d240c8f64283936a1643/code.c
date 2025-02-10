#include <stdio.h>

int isPrime(int n) {
    if (n < 2) {
        return 0; // 0 and 1 are not prime
    }
    for (int i = 2; i * i <= n; i++) { // Loop till sqrt(n)
        if (n % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}