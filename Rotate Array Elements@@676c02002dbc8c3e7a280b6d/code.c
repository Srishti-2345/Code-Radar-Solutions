// Your code here...
#include <stdio.h>

void rotateArray(int arr[], int size, int n) {
    n = n % size; // Handle cases where n > size
    int temp[size];
    
    // Copy the last n elements to the temp array
    for (int i = 0; i < n; i++) {
        temp[i] = arr[size - n + i];
    }
    
    // Shift the remaining elements to the right
    for (int i = size - 1; i >= n; i--) {
        arr[i] = arr[i - n];
    }
    
    // Copy the temp elements back to the beginning
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int size, n;
    
    
    scanf("%d", &size);
    
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    scanf("%d", &n);
    
    rotateArray(arr, size, n);
    
    
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
    
    
    return 0;
}