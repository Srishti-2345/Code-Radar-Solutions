// Your code here...
#include <stdio.h>
int main(){

    int elements;
    int odd=0;
    int even=0;
    scanf("%d",&elements);
    int array[elements];
    for(int i=0;i<elements;i++){
        scanf("%d",&elements[i]);
    }
    for (int i=0;i<elements;i++){
        if(array[i]/2==0){
            even=even+1;
        }
        else{
            odd=odd+1;
        }
    }

}
