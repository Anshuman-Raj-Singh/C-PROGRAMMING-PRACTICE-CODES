#include<stdio.h>
int main(){
    int loan,interest,tenure,rate;
    printf("enter the loan amount:");
    scanf("%d",&loan);
    printf("enter the tenure:");
    scanf("%d",&tenure);
    if(loan>=10000)
    {
        printf("rate:20\n");
        printf("interest:%.2f\n",((0.20)*loan)*tenure);
    }else if(loan>=8000 && loan<=9999)
    {
        printf("rate:18\n");
        printf("interest:%.2f\n",((0.18)*loan)*tenure);
    }else if(loan<8000)
    {
        printf("rate:16\n");
        printf("interest:%.2f\n",((0.16)*loan)*tenure);
    }else{
        printf("invalid loan amount");
    }
    printf("loan:%d\ntenure:%d\n",loan,tenure);
    return 0;
}
