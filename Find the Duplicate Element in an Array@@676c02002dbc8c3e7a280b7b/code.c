// Your code here...
#include<stdio.h>
int main(){
    int n;
    int arr[100];
    scand("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
            }
        }
    }
}