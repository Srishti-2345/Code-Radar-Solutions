// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the number of elements
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    int min = arr[0], max = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Update minimum
        }
        if (arr[i] > max) {
            max = arr[i]; // Update maximum
        }
    }

    printf("%d %d\n", min, max); // Print min and max values

    return 0;
}