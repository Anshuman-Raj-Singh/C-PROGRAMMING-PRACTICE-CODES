#include<stdio.h>
int main(){
    int n;
    float a=100;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%.2f\t",a);
        a/=2;
    }
    return 0;
}
