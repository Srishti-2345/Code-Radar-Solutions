#include <stdio.h>



int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    if(a==b^2){
        printf("Yes");
    }else if(a!=b^2){
        printf("No");
    }
    return 0;
}