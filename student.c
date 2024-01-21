#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks of the student:");
    scanf("%d",&marks);
    if(marks>30)
    {
        printf("PASSED");
    }else if(marks<=30){
        printf("FAILED");
    }
    return 0;
}
