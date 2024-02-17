#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

void main(){
    struct student s1={202357,9.7,"anshuman"};
    printf("%d",s1.roll);
}
