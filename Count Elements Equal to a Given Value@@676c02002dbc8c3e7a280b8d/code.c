// Your code here...
#include <stdio.h>

int main() {
    int size, target;
    int value = 0;

    // Take input for size
   
    scanf("%d", &size);

    int array[size];

    // Take input for array elements
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Take input for target element
    
    scanf("%d", &target);

    // Count occurrences of target in the array
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            value++;
        }
    }

    // Print the count
    printf("%d", value);

    return 0;
}
