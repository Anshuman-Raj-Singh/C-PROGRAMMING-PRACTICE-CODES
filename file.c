#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("even.c","r");
    if(fptr!=NULL){
        printf("file exists");
    }else{
        printf("file does not exist");
    }
    fclose(fptr);
    
    return 0;
}
