// Your code here...
#include <stdio.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int prime=0;
    for (int j=0;j<a;j++){
        if (arr[j]>1){
            int count=0;
            for (int i=2;i<arr[j];i++){
                if (arr[j]%i==0){
                    count+=1;
                    
                }
            }
            if (count==0){
                prime+=1;
            }
        }
    }
    printf("%d",prime);
    return 0;
}