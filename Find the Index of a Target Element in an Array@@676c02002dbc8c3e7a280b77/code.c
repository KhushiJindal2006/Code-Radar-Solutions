// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int t;
    scanf("%d",&t);
    int temp=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            temp=i;
            break;
        }       
    }
    printf("%d",temp);
}