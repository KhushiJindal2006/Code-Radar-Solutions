// Your code here...
#include<stdio.h>
int main(){
    int n;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    int second_largest=-1;
    for(int i=1;i<n;i++){
       if(arr[i]>largest){
       largest=a[i];
       }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>second_largest && arr[i]<largest){
            second_largest=arr[i];
        }
    }
    if(second_largest==-1){
        printf("%d",-1);
    }
    else {
        printf("%d",second_largest);
    }
}