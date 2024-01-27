#include<stdio.h>
int main(){
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        if(i%7==0){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
