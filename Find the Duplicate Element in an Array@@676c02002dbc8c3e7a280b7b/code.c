// Your code here...
#include <stdio.h>

int main() {
    int n, i, j;
    
    // Input array size
  
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
   
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
   
    
    // Find and print duplicate elements
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break; // Avoid printing duplicates multiple times
            }
        }
    }
    
    printf("\n");
    return 0;
}
