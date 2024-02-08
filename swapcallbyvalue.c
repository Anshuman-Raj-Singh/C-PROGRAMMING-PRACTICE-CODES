#include<stdio.h>

void swap(int a,int b);

int main(){
    int a=8,b=9;
    printf("a=%d and b=%d\n",a,b);
    swap(a,b);
    printf("a=%d and b=%d\n",a,b);
    return 0;
}

void swap(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("a=%d and b=%d\n",a,b);
}
