//fibonacci sequence
#include<stdio.h>
int main(){
    int n,a=0,b=1;
    printf("enter the number of terms for the fibonacci sequence:");
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        printf("%d",a);
        int next=a+b;
        a=b;
        b=next;
    }
    printf("\n");
    return 0;
}
