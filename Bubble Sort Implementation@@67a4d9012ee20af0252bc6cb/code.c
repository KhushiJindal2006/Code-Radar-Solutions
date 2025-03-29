// Your code here...
#include<stdio.h>
void bubbleSort(int arr[n],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int printArray(int arr[n],int n){
    for(int k=0;k<n;k++){
        printf("%d ",arr[i]);
    }
}