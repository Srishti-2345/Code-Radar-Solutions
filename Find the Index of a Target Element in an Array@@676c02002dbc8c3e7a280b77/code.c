// Your code here...
#include <stdio.h>
#include <limits.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf ("%d",&k);
    int count=0;
    for (int i=0;i<a;i++){
        if (arr[i]==k){
            printf("%d",i);
            count+=1;
            break;
        }
    }
    if (count==0){
        printf("-1");
    }