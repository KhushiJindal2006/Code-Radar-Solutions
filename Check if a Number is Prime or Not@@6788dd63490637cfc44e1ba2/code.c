#include <stdio.h>

int main() {
    int n;
    sacnf("%d",&n);
    if(n<=1){
        print("Not Prime");
    }
    else {
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                printf("Not Prime");
            }
            else {
                printf("Prime");
            }
        }
    }
    return 0;
}