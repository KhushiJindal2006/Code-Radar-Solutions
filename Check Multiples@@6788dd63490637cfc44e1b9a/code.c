#include <stdio.h>

int main() {
    
    int n,i;
    scanf("%d %d",&n,&i);
    if(n%i==0){
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}