#include <stdio.h>

int main() {
    char light;

    // Display instructions
    
    scanf(" %c", &light);

    // Process input and display corresponding action
    switch (light) {
        case 'R':
        case 'r':
            printf("Stop");
            break;
        case 'G':
        case 'g':
            printf("Go");
            break;
        case 'Y':
        case 'y':
            printf("Slow Down");
            break;
        default:
            printf("Invalid input");
    }

    return 0;
}
