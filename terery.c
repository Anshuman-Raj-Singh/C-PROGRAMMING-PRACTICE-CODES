//algorithm to check if a number is a multiple or not
#include<stdio.h>
int main(){
    int a;
    printf("enter the value of a:");
    scanf("%d",&a);
    (a%6==0)? printf("it is a multiple of the number") : printf("it is not a multiple");
    return 0;
}
