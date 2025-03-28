// Your code here...
#include<stdio.h>
int isPrime(int x){
    if(x<=1) return 0;
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            return 0;
        }
        return 1;
    }
}
int main(){
    int n;
    int count=0;
    int arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(isPrime(arr[i])){
            count++;
        }
    }
    printf("%d",count);
}