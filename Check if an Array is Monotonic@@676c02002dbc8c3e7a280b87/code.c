// Your code here...
#include<stdio.h>
int main(){
    int n;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int isAscending=1;
    int isDescending=1;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            isDescending=0;
        }
        if(arr[i]>arr[i+1]){
            isAscending=0;
        }      
    }
    if(isAscending || isDescending){
        printf("YES");
    }
    else {
        printf("NO");
    }
}