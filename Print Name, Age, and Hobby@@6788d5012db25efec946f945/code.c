#include <stdio.h>

int main() {
    char str1[100];
    int n;
    char str2[100];

    scanf("%s",&str1);
    scanf("%d",&n);
    scanf("%s",&str2);

    printf("Name: %s",str1);
    printf("Age: %d",n);
    printf("Hobby: %s",str2);
    return 0;
}