#include<stdio.h>
void main(){
    int day;
    printf("enter the day:");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("\nday 1 is monday");
        break;
        case 2:
        printf("\nday 2 is tuesday");
        break;
        case 3:
        printf("\nday 3 i wednesday");
        break;
        case 4:
        printf("\nday 4 is thursday");
        break;
        case 5:
        printf("\nday 5 is friday");
        break;
        case 6:
        printf("\nday 6 is saturday");
        break;
        case 7:
        printf("\nday 7 is sunday");
        break;
    }
}
