#include<stdio.h>

void alpha(int *a,int *b);

int main(){
    int a='a',b='b';
    alpha(&a,&b);
    return 0;
}

void alpha(int *a,int *b){
    *a='a';
    *b='z';
    for(int i=*a;i<=*b;i++){
        printf("%c\t",i);
    }
}
