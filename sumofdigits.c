#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0){
        int lastdigit=(n%10);
        sum+=lastdigit;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
