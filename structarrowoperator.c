#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[120];
};

void main(){
    struct student s1={202345,9.7,"Anshuman"};
    struct student *ptr=&s1;
    printf("%s\n",(*ptr).name);
    printf("%s\n",ptr->name);
}
