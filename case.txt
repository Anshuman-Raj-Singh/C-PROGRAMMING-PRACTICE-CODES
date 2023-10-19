//program to find if a character is uppercase or lowercase
#include<stdio.h>
int main(){
    char character;
    printf("enter the character:");
    scanf("%c",&character);
    (character>65,character<90)? printf("uppercase"): printf("lowercase");
    return 0;
}
