// Your code here...
#include<stdio.h>
int main(){
    int n;
    int a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
       if(i==0 &&(n==1 || a[i]>a[i+1])){
        printf("%d",a[i]);
        return 0;
       }
       else if(i==n-1 && a[i]>a[i-1]){
        printf("%d",a[i]);
        return 0;
       }
       else if(i>0 && i<n-1 && a[i]>a[i-1] && a[i]>a[i+1]){
        printf("%d",a[i]);
        return 0;
       }
    }
    printf("%d",-1);
}