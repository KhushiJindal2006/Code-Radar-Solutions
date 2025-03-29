// Your code here...
#include<stdio.h>
int sum_of_digits(int n){
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum+=digit;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(sum_of_digits(arr[i])){
            for(int i=0;i<n;i++){
                printf("%d ",arr[i]);
            }
        }
    }
}