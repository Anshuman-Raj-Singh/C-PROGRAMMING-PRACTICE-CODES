//program to check if the given character is even or odd
#include<stdio.h>
void main(){
    char a;
    printf("enter the character:");
    scanf("%c",&a);
    (a%2==0)? printf("character is even"):printf("character is odd");
}
