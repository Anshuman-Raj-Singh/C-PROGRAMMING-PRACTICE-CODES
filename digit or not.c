#include<stdio.h>
int main(){
    int character;
    printf("enter the character:");
    scanf("%d",&character);
    if(character>=48,character<=57)
    {
        printf("character is a digit");
    }
    else{
        printf("character is not a digit");
    }
    return 0;
    
}
