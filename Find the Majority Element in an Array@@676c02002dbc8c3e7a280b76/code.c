// Your code here...#include <stdio.h>
#include<stdio.h>

void findFrequency(int arr[], int n) { int visited[n]; for (int i = 0; i < n; i++) { visited[i] = 0; }

int max=0;

for (int i = 0; i < n; i++) {
    if (visited[i] == 1)
        continue;
    
    int count = 1;
    for (int j = i + 1; j < n; j++) {
        if (arr[i] == arr[j]) {
            count++;
            if(count>max){
                max=arr[i];
            }
            if(count==max){
                max=-1
            }
            visited[j] = 1;
        }
    }

    
}
 printf("%d",max);

}

int main() { int n; scanf("%d", &n);

int arr[n];

for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}

findFrequency(arr, n);

return 0;

}