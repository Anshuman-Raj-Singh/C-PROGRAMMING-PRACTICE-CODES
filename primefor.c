#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            printf("composite\n");
            break;
        }else{
            printf("prime\n");
            break;
        }
    }
    return 0;
}
