// Your code here...
#include<stdio.h>
int main(){
    int n;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=1;j<n;j++){
        arr[j]=arr[j]+arr[j-1];
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}