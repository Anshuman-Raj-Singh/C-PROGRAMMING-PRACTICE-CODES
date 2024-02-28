#include<stdio.h>
int main(){
    int cost_price;
    int selling_price;
    printf("enter the cost price and selling price:");
    scanf("%d%d",&cost_price,&selling_price);
    if(selling_price>cost_price){
        printf("profit made:%d percent",(selling_price/cost_price)*100);
    }else if(selling_price<cost_price){
        printf("loss of:%d percent",(selling_price/cost_price)*100);
    }
    return 0;
}
