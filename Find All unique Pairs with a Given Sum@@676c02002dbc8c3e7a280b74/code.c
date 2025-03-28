// Your code here...
#include <stdio.h>
#include <stdlib.h>

// Comparison function for sorting
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N, T;
    
    // Read the size of the array
    scanf("%d", &N);
    
    int arr[N];
    
    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read the target sum
    scanf("%d", &T);
    
    // Sort the array to handle uniqueness
    qsort(arr, N, sizeof(int), compare);
    
    // Use two-pointer technique to find unique pairs
    int left = 0, right = N - 1;
    
    while (left < right) {
        int sum = arr[left] + arr[right];
        
        if (sum == T) {
            printf("%d %d\n", arr[left], arr[right]);
            // Move both pointers to the next unique elements
            int lastLeft = arr[left], lastRight = arr[right];
            while (left < right && arr[left] == lastLeft) left++;
            while (left < right && arr[right] == lastRight) right--;
        } else if (sum < T) {
            left++;
        } else {
            right--;
        }
    }
    
    return 0;
}
