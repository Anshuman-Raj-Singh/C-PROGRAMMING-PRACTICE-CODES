//program to find a number is of two digits or not
#include<stdio.h>
int main(){
    int num;
    printf("enter num:");
    scanf("%d",&num);
    if (num>9 && num<100)
    {
        printf("it is a two digit number");
    }
    else{
        printf("not a two digit number");
    }
    return 0;
}
