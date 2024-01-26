#include<stdio.h>
int main(){
    int n;
    do{
        scanf("%d",&n);
        if(n%7==0){
            break;
        }
    printf("%d",n);
    }while(1);
    printf("thanks");
    return 0;
}
