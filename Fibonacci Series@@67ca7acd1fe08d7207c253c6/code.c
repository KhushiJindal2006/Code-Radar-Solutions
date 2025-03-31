// Your code here...
#include<stdio.h>
int fibonacciSeries(int n){
    int t1=0;
    int t2=1;
    int nextTerm;
    while(n>0){
        nextTerm=t1+t2;
        printf("%d",nextTerm);
        t1=t2;
        t2=nextTerm;
    }

}