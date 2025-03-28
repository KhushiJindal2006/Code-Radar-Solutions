// Your code here...
#include<stdio.h>
int main(){
    int n;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int coe=0;
    int coo=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            coe++;
        }
        else {
            coo++;
        }
    }
    printf("%d %d",coe,coo);

}