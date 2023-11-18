#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("num is completely divisible");
    }
    else{
        printf("it is not divisible");
    }
    return 0;
}
