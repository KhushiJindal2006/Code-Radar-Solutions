// Your code here...
#include<stdio.h>
int main(){
    int n;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int evenos=-1;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            if(evenos==-1 || arr[i]>evenos){
                evenos=arr[i];
            }
        }
    }
    printf("%d",evenos);
    
    
}