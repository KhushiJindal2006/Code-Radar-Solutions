// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a=-1;
    for(int i=n-1;i>=0;i--){
        int temp=arr[i];
        arr[i]=a;
        if(temp>a) a=temp;
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}