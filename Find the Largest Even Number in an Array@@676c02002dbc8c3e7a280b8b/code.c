// Your code here...
#include<stdio.h>
int main(){
    int n;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int evenos=-100000;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            if(arr[i]>evenos){
                evenos=arr[i];
            }
        }
    }
    if(evenos=-100000){
        printf("-1");
    }
    else {
        printf("%d",evenos);
    }
    
}