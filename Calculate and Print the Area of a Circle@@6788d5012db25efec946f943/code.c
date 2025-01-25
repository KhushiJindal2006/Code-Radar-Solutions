#include <stdio.h>


int main() {
    float r;
    scanf("%r",&r);

    const float pi=3.14;

    float area=(pi*r*r);
    printf("Area: %.2f",area);
    return 0;
}