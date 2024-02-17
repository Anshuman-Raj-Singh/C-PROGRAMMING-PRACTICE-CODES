#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

void main(){
    struct student s1={202357,9.7,"Anshuman"};
    struct student *ptr=&s1;
    printf("%d\n",(*ptr).roll);
    printf("%s\n",(*ptr).name);
}
