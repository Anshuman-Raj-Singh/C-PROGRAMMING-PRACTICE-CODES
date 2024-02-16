#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    char name[100];
    float cgpa;
};
 
int main(){
    struct student s1;
    s1.roll= 57;
    s1.cgpa=9.7;
    strcpy(s1.name,"Robot");

    printf("%s\t%d\t%.2f\n",s1.name,s1.roll,s1.cgpa);

    struct student s2;
    s2.roll= 56;
    s2.cgpa=7.7;
    strcpy(s2.name,"Anshu");

    printf("%s\t%d\t%.2f\n",s2.name,s2.roll,s2.cgpa);

    struct student s3;
    s3.roll= 55;
    s3.cgpa=8.7;
    strcpy(s3.name,"Human");

    printf("%s\t%d\t%.2f\n",s3.name,s3.roll,s3.cgpa);

    struct student s4;
    s4.roll=54;
    s4.cgpa=6.7;
    strcpy(s4.name,"Aman");
    printf("%s\t%d\t%.2f\n",s4.name,s4.roll,s4.cgpa);

    return 0;
}
