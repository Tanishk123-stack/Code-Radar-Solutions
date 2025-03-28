// Your code here...
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void findMinDifferencePair(int arr[], int n) {
    if (n < 2) {
        printf("-1\n");
        return;
    }

    // Step 1: Sort the array
    qsort(arr, n, sizeof(int), compare);

    // Step 2: Find the minimum difference
    int minDiff = abs(arr[1] - arr[0]);
    int num1 = arr[0], num2 = arr[1];

    for (int i = 1; i < n - 1; i++) {
        int diff = abs(arr[i + 1] - arr[i]);
        if (diff < minDiff) {
            minDiff = diff;
            num1 = arr[i];
            num2 = arr[i + 1];
        }
    }

    // Step 3: Output the pair in ascending order
    printf("%d %d\n", num1, num2);
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findMinDifferencePair(arr, n);
    
    return 0;
}
