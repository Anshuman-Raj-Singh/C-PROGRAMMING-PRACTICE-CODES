#include<stdio.h>
void table(int n);

int main(){
    int n;
    table(n);
}

void table(int n){
    printf("enter n:");
    scanf("%d",&n);
    int mult=1;
    for(int i=1;i<=10;i++){
        mult=n*i;
        printf("%d\n",mult);
    }
}
