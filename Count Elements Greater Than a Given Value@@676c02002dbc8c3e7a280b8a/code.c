// Your code here...
#inlcude<stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<3;i++){
        if(arr[i]>k){
            count++;
        }
    }
    printf("%d",count);
}