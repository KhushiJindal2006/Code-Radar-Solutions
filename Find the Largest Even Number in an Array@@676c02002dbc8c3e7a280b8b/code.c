// Your code here...
#include<stdio.h>
int main(){
    int n;
    int arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int evenos=a[0];
    for(int i=0;i<n;i++){
        if((arr[i]%2==0)&&(arr[i]>evenos)){
            printf("%d",arr[i]);
        }
    }
}