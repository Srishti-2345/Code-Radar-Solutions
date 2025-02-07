#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    
    // Check for divisibility up to the square root of num
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;
    
    
    scanf("%d", &number);
    
    if (isPrime(number)) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }
    
    return 0;
}
