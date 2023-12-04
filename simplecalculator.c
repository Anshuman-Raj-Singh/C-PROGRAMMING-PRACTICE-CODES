//c program to make a simple calculator
#include<stdio.h>
void main(){
    int choice;
    float num1,num2;
    printf("1:Addition\n");
    printf("2:Subtraction\n");
    printf("3:Multiplication\n");
    printf("4:Division\n");
    printf("5:ERROR\n");
    printf("enter the choice:");
    scanf("%d",&choice);
    printf("enter the two numbers:");
    scanf("%f%f",&num1,&num2);
    switch (choice)
    {
    case 1:
    printf("%.3f",num1+num2);
    break;
    case 2:
    printf("%.3f",num1-num2);
    break;
    case 3:
    printf("%.3f",num1*num2);
    break;
    case 4:
    printf("%.3f",num1/num2);
    break;
    case 5:
    printf("ERROR");
    break;
    }
}
