#include<stdio.h>
int main(){
    int a,b,sum,diff,mult,rem;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum); 
    diff=a-b;
    printf("difference=%d\n",diff);
    mult=a*b;
    printf("multiplication=%d\n",mult);
    rem=a/b;
    printf("remainder=%d",rem);
    return 0; 
} 
