#include<stdio.h>
int main(){
    int mult=1;
    int n;
    int i=1;
    printf("enter the limit:");
    scanf("%d",&n);
    do{
        mult=mult*i;
        i++;
    }while(i<=n);
    printf("%d",mult);
    return 0;
}
