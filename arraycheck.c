#include<stdio.h>
int main(){
    int age[]={65};
    int *ptr= age;
    (*ptr==age[0])? printf("1"):printf("2");
    return 0;
}
