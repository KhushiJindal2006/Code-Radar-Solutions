// Your code here...
#include<stdio.h>
int ispalindrome(int num){
    int original=num,reversed=0,remainder;
    while(num>0){
        remainder=num%10;
        reversed=reversed*10+remainder;
        num=num/10;
    }
    return original==reversed;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(ispalindrome(arr[i])){
            count++;
        }
    }
    printf("%d",count);
}