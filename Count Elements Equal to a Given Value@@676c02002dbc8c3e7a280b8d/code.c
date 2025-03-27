// Your code here...
#include<stdio.h>
int main(){
    int size,target;
    int value=0;

    int array[size];
    for (int i=0;i<size;i++){
        scanf("%d",&array[i]);

    }
    for (int i=0;i<size;i++){
        if(array[i]==target){
            value=value+1;
        }
    }
    printf("%d",value);
}