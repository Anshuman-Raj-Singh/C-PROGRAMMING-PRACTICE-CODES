//average marks of five students
#include<stdio.h>
int main(){
    int s1,s2,s3,s4,s5;
    printf("enter the marks of s1:");
    scanf("%d",&s1);
    printf("enter the marks of s2:");
    scanf("%d",&s2);
    printf("enter the marks of s3:");
    scanf("%d",&s3);
    printf("enter the marks of s4:");
    scanf("%d",&s4);
    printf("enter the marks of s5:");
    scanf("%d",&s5);
    printf("the average is:%d",((s1+s2+s3+s4+s5)/5));
    return 0;
}
