//using do while to make a table of numbers and their squares
#include<stdio.h>
int main(){
    int i=1;
    int sum1=0,sum2=0;
    do
    {
        sum1+=i;
        sum2+=i*i;
        printf("%d\t",i);
        i++;
        printf("%d\n",sum2);
    } 
    while(i<=10);
    return 0;  
}
