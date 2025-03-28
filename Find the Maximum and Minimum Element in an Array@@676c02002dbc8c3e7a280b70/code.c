// Your code here...
#incude<stdio.h>
int main(){
    int n;
    int a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int mini=a[0];
    int maxi=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<mini){
            mini=a[i];
        }
    }
    for(int i=1;i<n;i++){
        if(a[i]>maxi){
            maxi=a[i];
        }
    }
    printf("%d %d",mini,maxi);
}