// Your code here...
#include<stdio.h>
int findUnsortedSubarray(int arr[], int n) {
    int k =0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                k++;
             }
         }
     }
     return k;
}