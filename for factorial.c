//program to calculate the factorial using for loop
#include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("enter the value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact*=i;    
    }
    printf("factorial:%d",fact);
    return 0;
}
