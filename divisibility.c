#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            printf("yes");
        }else if(n%15==0){
            printf("no");
        }
    }else{
        printf("wrong number");
    }
    return 0;
}
