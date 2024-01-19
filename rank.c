#include<stdio.h>
int main(){
    int rank;
    printf("enter the rank:");
    scanf("%d",&rank);
    switch(rank)
    {
        case 1:
        printf("topper");
        break;
        case 2:
        printf("runner up");
        break;
        default:
        printf("try again");
    }
    return 0;
}
