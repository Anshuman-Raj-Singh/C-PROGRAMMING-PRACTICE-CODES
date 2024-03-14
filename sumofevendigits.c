#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        int lastdigit=n%10;
        n=n/10;
        if(lastdigit%2==0){
            sum+=lastdigit;
        }
    }
    printf("%d",sum);
    return 0;
}
