// Your code here...
#include<stdio.h>
int kthSmallest(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[k-1]);
    }
}