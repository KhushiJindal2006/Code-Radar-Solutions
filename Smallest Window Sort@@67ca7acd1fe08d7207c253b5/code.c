// Your code here...
#include<stdio.h>
int findUnsortedSubarray(int arr[], int n) {
    int k =0;
    for(int i=0; i<n-1; i++) {
        int swapped=0;
        for(int j=0; j<n-i-1; j++) {
            if(arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                k++;
                swapped=1;
             }
         }
         if(swapped==0)  break;
     }
     return k;
}