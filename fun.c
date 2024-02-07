#include<stdio.h>

int sum(int a,int b);
int avg(int a,int b);
int prod(int a,int b);

int main(){
    int a=5,b=7;
    sum(a,b);
    avg(a,b);
    prod(a,b);
    printf("thankyou");
    return 0;
}

int sum(int a,int b){
    int sum=(a+b);
    printf("%d\n",sum);
    return 0;
}

int avg(int a,int b){
    int avg=((a+b)/2);
    printf("%d\n",avg);
    return 0;
}

int prod(int a,int b){
    int prod=(a*b);
    printf("%d\n",prod);
    return 0;
}
