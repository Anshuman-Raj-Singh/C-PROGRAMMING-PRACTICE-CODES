#include<stdio.h>
#include<string.h>

int countlen(char arr[]);

int main(){
    char name[100]="ANSHUMAN RAJ SINGH";
    printf("%d\n",strlen(name));
    return 0; 
}

int countlen(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}
