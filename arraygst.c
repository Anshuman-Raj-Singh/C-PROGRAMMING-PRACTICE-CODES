#include<stdio.h>
int main(){
    int price[3];
    printf("enter the prices:\n");
    scanf("%d%d%d",&price[0],&price[1],&price[2]);
    int final_cost=(price[0]+price[1]+price[2])+((price[0]+price[1]+price[2])*0.18);
    printf("%d\n",final_cost);
}
