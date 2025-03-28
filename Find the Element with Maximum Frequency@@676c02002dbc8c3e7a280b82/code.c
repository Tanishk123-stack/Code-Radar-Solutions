// Your code here...
#include <stdio.h>
#include <limits.h>

#define MAX_SIZE 100001  // Assuming the numbers in the array are within this range

int findMaxFrequencyElement(int arr[], int n) {
    int freq[MAX_SIZE] = {0};  // Frequency array initialized to 0
    int maxFreq = 0, minElement = INT_MAX;

    // Count frequency
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] > maxFreq) {
            maxFreq = freq[arr[i]];
            minElement = arr[i];  // Update minElement when a new maxFreq is found
        } else if (freq[arr[i]] == maxFreq) {
            if (arr[i] < minElement) {
                minElement = arr[i];  // Choose the smallest element in case of tie
            }
        }
    }
    
    return minElement;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("%d\n", findMaxFrequencyElement(arr, n));
    
    return 0;
}
