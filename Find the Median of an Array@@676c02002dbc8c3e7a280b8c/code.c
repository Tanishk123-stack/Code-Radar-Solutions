// Your code here...
#include <stdio.h>
#include <stdlib.h>  // For qsort

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N;
    
    // Read the size of the array
    scanf("%d", &N);
    
    int arr[N];
    
    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sort the array
    qsort(arr, N, sizeof(int), compare);
    
    int median;
    
    // Find the median
    if (N % 2 == 1) {
        median = arr[N / 2];  // Odd case: middle element
    } else {
        median = (arr[N / 2] + arr[(N / 2) - 1]) / 2;  // Even case: average of two middle elements
    }
    
    // Print the median
    printf("%d\n", median);
    
    return 0;
}
