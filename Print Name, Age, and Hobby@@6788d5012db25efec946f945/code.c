#include <stdio.h>

int main() {
    char str1[100];
    int n;
    char str2[100];

    scanf("%s",&str1);
    scanf("%d",&n);
    scanf("%s",&str2);

    printf("Name: %s\n",str1);
    printf("Age: %d\n",n);
    printf("Hobby: %s\n",str2);
    return 0;
}