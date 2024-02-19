#include<stdio.h>
#include<string.h>

typedef struct anshumanrajsingh{
    int age;
    char name[120];
}sweet;

void main(){
    sweet a1,a2;
    a1.age=18;
    strcpy(a1.name,"anshuman");
    a2.age=19;
    strcpy(a2.name,"anshu");
    printf("%d\t",a1.age);
    printf("%s\n",a1.name);
    printf("%d\t",a2.age);
    printf("%s\n",a2.name);
}
