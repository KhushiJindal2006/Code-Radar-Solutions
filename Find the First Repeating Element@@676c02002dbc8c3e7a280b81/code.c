// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp=-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;i++){
            if(arr[i]==arr[j]){
            temp=arr[i];
            break;
            }

        }
    }
    printf("%d",temp);
}