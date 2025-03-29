// Your code here...
#include<stdio.h>
void bubblesort(char arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                char temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int printArray(char arr[],int n){
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
}