#include<stdio.h>
int main(){
    float a,b,c,sum;
    printf("enter a:");
    scanf("%f",&a);
    printf("enter b:");
    scanf("%f",&b);
    printf("enter c:");
    scanf("%f",&c);
    sum=a+b+c;
    if (sum>=100 && sum<=200)
    {
        printf("\nsum is between 100 and 200");
    }
    else
    {
        printf("\nsum is not in betweenn 100 and 200");
    }
    return 0; 
}
