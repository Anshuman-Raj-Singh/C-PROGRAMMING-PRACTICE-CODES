//to add 10 consecutive numbers 
#include<stdio.h>
int main(){
    int i=1;
    int sum=0;
    while(i<=10)
    {
        sum+=i;
        i++;
    }
    printf("the sum of 10 consecutive numbers is:%d\n",sum);
    return 0;
}
