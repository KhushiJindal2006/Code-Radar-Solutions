// Your code here...
#include<stdio.h>
int kthSmallest(int arr[],int n,int k){
    int isfound=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isfound=1;
            }
        }
    }
    if(isfound) return arr[k-1];
    else return -1;
}