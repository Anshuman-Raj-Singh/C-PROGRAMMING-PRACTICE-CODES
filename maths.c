#include<stdio.h>
int main(){
    int a,b,sum,diff,mult,rem;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d\t",sum); 
    diff=a-b;
    printf("diff=%d\t",diff);
    mult=a*b;
    printf("mult=%d\t",mult);
    rem=a/b;
    printf("rem=%d\t",rem);
    return 0;
}
