// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);

    }
int target;
scanf("%d",&target);
for(int i=0;i<n;i++){
    if(target==array[i]){
    //     printf("%d",i);
    //     break;
    }
    printf("%d",i);

    

}
}