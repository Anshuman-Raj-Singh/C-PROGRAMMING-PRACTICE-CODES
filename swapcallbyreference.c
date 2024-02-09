#include<stdio.h>

int swap(int *a,int *b);

int main(){
    int a=8,b=3;
    printf("a=%d\t b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d\t b=%d\n",a,b);
    return 0;
}

int swap(int* a,int* b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("a=%d\t b=%d\n",*a,*b);
}
