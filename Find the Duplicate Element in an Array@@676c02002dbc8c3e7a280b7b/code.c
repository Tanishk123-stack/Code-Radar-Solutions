int findDuplicate(int arr[], int n) {
    int slow = arr[0];
    int fast = arr[0];

    do {
        if (slow < 0 || slow >= n || fast < 0 || fast >= n) {
            printf("Error: Index out of bounds\n");
            return -1;
        }
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);
    
    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
}
