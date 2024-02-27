#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    if(n>0){
        printf("absolute value:%d",n);
    }else if(n<0){
        printf("absolute value:%d",n-(2*n));
    }
    return 0;
}
