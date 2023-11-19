//to check the given value is even or odd using bitwise operators
//by using bitwise &
#include<stdio.h>
int main(){
    int value;
    printf("enter the value:");
    scanf("%d",&value);
    if ((value&1)==0)
    printf("even");
    else
    printf("odd");
    return 0;
}
