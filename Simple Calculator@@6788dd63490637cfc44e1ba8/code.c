#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    char operator;
    int result;

    if (scanf("%d %c %d", &num1, &operator, &num2) != 3) {
        
        return 1;
    }

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            if (num2 == 0) {
                fprintf(stderr, "Error: Division by zero.\n");
                return 1;
            }
            result = num1 / num2;
            printf("%d\n", result);
            break;
        default:
            fprintf(stderr, "Error: Invalid operator.  Use +, -, *, or /.\n");
            return 1;
    }

    return 0;
}