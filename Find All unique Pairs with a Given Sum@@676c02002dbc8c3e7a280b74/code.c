#include <stdio.h>
#include <stdlib.h>

// Structure to store pairs
typedef struct {
    int first;
    int second;
} Pair;

// Comparison function for sorting pairs
int comparePairs(const void *a, const void *b) {
    Pair *p1 = (Pair *)a;
    Pair *p2 = (Pair *)b;
    
    if (p1->first != p2->first)
        return p1->first - p2->first; // Sort by first element
    return p1->second - p2->second; // Sort by second element if first elements are equal
}

// Comparison function for sorting the array
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
    
    // Sort the array to ensure uniqueness
    qsort(arr, N, sizeof(int), compare);
    
    // Store valid pairs
    Pair pairs[N]; 
    int count = 0;
    
    int left = 0, right = N - 1;
    
    while (left < right) {
        int sum = arr[left] + arr[right];
        
        if (sum == T) {
            pairs[count].first = arr[left];
            pairs[count].second = arr[right];
            count++;
            // Skip duplicates
            int lastLeft = arr[left], lastRight = arr[right];
            while (left < right && arr[left] == lastLeft) left++;
            while (left < right && arr[right] == lastRight) right--;
        } else if (sum < T) {
            left++;
        } else {
            right--;
        }
    }
    
    // Sort pairs to match expected output order
    qsort(pairs, count, sizeof(Pair), comparePairs);
    
    // Print sorted pairs
    for (int i = 0; i < count; i++) {
        printf("%d %d\n", pairs[i].first, pairs[i].second);
    }
    
    return 0;
}
