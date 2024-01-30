#include<stdio.h>
void greet1();
void greet2();

int main(){
    char breed;
    printf("enter your breed:");
    scanf("%c",&breed);
    if(breed=='I'){
        greet1();
    }else if(breed=='F'){
        greet2();
    }
    return 0;
}
 
void greet1(){
    printf("namaste");
}

void greet2(){
    printf("bonjour");
}
