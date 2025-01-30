#include <stdio.h>

int main() {
    int a,b;
    char d;
    float result;
    scanf("%d %d %c",&a,&b,&d);  
    if(d=='+'){
        result=a+b;
        printf("%.2f",result);
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