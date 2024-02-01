#include<stdio.h>

void dreams(int n);

int main(){
    int n;
    dreams(10);
    return 0;
}

void dreams(int n){
    if(n==0){
        return;
    }
    printf("I AM GOING TO BE AN ARMY OFFICER ONE DAY\n");
    dreams(n-1);
}
