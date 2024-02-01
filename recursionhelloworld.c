#include<stdio.h>

void helloworld(int n);

int main(){
    helloworld(10);
    return 0;
}

void helloworld(int n){
    if(n==0){
        return;
    }
    printf("hello world\n");
    helloworld(n-1);
}
