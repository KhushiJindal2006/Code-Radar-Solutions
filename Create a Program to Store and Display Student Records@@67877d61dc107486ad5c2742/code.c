// Your code here...
#include<stdio.h>
int main(){
    int tc;
    scanf("%d",tc);
    while(tc--){
        int roll_num;
        char name[100];
        int marks;
        scanf("%d %s %d",roll_num,name,marks);
        printf("Roll Number: %d, Name: %s, Marks: %d\n",roll_num,name,marks);
    }
}