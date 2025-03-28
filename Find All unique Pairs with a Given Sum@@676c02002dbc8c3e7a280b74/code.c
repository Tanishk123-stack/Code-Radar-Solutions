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
    
    // Store valid pairs
    Pair pairs[N * N]; // Maximum possible pairs
    int count = 0;
    
    // Find all unique pairs
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] + arr[j] == T) {
                pairs[count].first = arr[i];
                pairs[count].second = arr[j];
                count++;
            }
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
