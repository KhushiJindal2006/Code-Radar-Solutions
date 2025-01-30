#include <stdio.h>

int main() {
    int a,b;
    char d;
    scanf("%d %d %c",&a,&b,&d);  
    if(d=='+'){
        printf("%d",a+b);
    }
    else if(d=='-'){
        printf("%d",a-b);
    }
    else if(d=='*'){
        printf("%d",a*b);
    }
    else if(d=='/'){
        if(b!=0){
        printf("%d",a/b);
        }
        else {
            printf("error");
        }
    }
    else {
        printf("error");
    }
    return 0;
}