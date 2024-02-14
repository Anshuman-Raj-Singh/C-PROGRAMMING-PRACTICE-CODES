#include<stdio.h>
#include<string.h>

void salting(char pass[]);

int main(){
    char pass[100];
    printf("enter the password:");
    scanf("%s",&pass);
    salting(pass);
    return 0;
}

void salting(char pass[]){
    char newpass[100];
    char salt[100]="skew";
    strcpy(newpass,pass);
    strcat(newpass,salt);
    puts(newpass);
}
