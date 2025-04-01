#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int isSorted = 1; // Assume the array is sorted
    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) {
            isSorted = 0; // Found an unsorted pair
            
        }
    }
    
    if(isSorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }
    
    return 0;
}