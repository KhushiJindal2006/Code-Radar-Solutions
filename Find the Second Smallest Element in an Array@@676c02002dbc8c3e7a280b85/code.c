// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int smallest=arr[0];
    int second_smallest=100000;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<second_smallest && arr[i]>smallest){
            second_smallest=arr[i];
        }
    }
    if(second_smallest==100000){
        printf("-1");
    }
    else {
        printf("%d",second_smallest);
    }
}

