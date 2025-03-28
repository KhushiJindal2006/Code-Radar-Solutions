// Your code here...
#include<stdio.h>
int main(){
    int n;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int isfound=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                isfound=0;
                break;
            }
        }
        if(isfound){
            printf("%d",arr[i]);
        }
    }
}