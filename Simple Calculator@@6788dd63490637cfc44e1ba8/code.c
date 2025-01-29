#include <stdio.h>

int main() {
    int a,b;
    char d;
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