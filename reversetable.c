#include<stdio.h>
int main(){
    int n;
    int mult=1;
    scanf("%d",&n);
    for(int i=10;i>=1;i--)
    {
        mult=n*i;
        printf("%d\n",mult);
    }
    return 0;
}
