#include <stdio.h>

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            printf(" *");
        }
        
    }
    return 0;
}