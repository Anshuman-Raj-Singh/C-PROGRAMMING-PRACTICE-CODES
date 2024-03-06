#include<stdio.h>
int main(){
    int n;
    int i=1;
    scanf("%d",&n);
    do{
        printf("%d\t",i);
        i++;
    }while(i<=n);
    return 0;
}
