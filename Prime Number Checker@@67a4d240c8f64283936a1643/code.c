#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0;  // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Not a prime number
        }
    }
    return 1;  // Prime number
}

int main() {
    int t;
    
    // Read number of test cases
    scanf("%d", &t);
    
    while (t--) {
        int num;
        scanf("%d", &num);

        // Print 1 if prime, otherwise 0
        printf("%d\n", isPrime(num));
    }
    
    return 0;
}
