#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int bit;
    for(int i=31;i>=0;i--){
        bit=(num>>i)&1;
        if(bit==1){
            start=1;
        }
        else {
            start=0;
        }
    }
        if(start){
            printf("%d",bit);
        }
        else {
            printf("0");
        }
    return 0;
}