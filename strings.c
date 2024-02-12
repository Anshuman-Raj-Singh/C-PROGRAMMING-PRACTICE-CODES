#include<stdio.h>

void print(char arr[]);

int main(){
    char first_name[]="ANSHUMAN";
    char last_name[]=" RAJ SINGH";
    print(first_name);
    print(last_name);
}

void print(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
}
