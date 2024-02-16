#include<stdio.h>
#include<string.h>

int c(char str[]);

int main(){
    char str[100]="human";
    c(str);
    return 0;
}

int c(char str[]){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'){
            printf("yes");
        };
    }
    return 0;
}
