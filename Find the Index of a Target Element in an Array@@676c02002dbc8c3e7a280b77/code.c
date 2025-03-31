// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    scanf("%d",&t);
    int temp=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            printf("%d",i);
            return 0;
        }
        else {
            printf("-1");
        }       
    }
    
}