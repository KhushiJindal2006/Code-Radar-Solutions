// Your code here...
#include<stdio.h>
int ispalindrome(int n){
    int original=n,reversed=0,remainder;
    while(n>0){
        remainder=n%10;
        reversed=reversed*10+remainder;
        n=n/10;
    }
    return original=reversed;

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
        if((arr[i]ispalindrome){
            count++;
        }
    }
    printf("%d",count);
}