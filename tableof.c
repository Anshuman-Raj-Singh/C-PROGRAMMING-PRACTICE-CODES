#include<stdio.h>
int main(){
    int n,mult;
    printf("enter the table of:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        mult=n*i;
        printf("%d\n",mult);
    }
    return 8;
}
