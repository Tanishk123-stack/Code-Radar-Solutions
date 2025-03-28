// Your code here...
#include <stdio.h>

int findDuplicate(int arr[], int n) {
    int slow = arr[0];
    int fast = arr[0];

    // Step 1: Detect cycle using Floyd's cycle detection
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    // Step 2: Find the entry point of the cycle (duplicate number)
    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findDuplicate(arr, n));

    return 0;
}
