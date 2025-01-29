#include <stdio.h>

int main() {
    int a,b;
    char d;
    scanf("%d %d",&a,&b);  
    scanf("%c",&d);
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
        printf("%d",a/b);
    }
    return 0;
}