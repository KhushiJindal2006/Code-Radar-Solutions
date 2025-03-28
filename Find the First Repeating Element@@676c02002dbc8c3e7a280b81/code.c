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
    int found=0;
    for(int i=0;i<n && !found;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
            temp=arr[i];
            found=1;
            break;
            }

        }
    }
    printf("%d",temp);
}