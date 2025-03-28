// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int mini=arr[0];
    int smallest=100000;
    for(int i=1;i<n;i++){
        if(arr[i]<mini){
            smallest=mini;
        }
        else if(arr[i]<smallest && arr[i]>mini){
            smallest=arr[i];
        }
    }
    if(smallest==100000){
        printf("-1");
    }
    else {
        printf("%d",smallest);
    }

}