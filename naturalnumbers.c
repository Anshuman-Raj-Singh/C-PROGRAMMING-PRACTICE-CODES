//algorithm to check if the given number is a natural number
#include<stdio.h>
int main(){
    int num=1;
    printf("enter a number\n");
    scanf("%d",&num);
    if (num>=1){
        printf("number is natural");
    }else{
        printf("number is not natural");
    } 
    return 0;   
}
