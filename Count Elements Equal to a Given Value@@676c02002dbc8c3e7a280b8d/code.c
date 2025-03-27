// Your code here...
#include <stdio.h>

int main() {
    int size, target;
    int value = 0;

   
   
    scanf("%d", &size);

    int array[size];

   
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    
    scanf("%d", &target);

 
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            value++;
        }
    }


    printf("%d", value);

    return 0;
}
