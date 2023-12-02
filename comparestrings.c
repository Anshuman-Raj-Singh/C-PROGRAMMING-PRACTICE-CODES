#include<stdio.h>
#include<string.h>
int main(){
    char com,str1[10],str2[10];
    int d;
    printf("enter the string1:");
    //gets(Str1);
    scanf("%d",&str1);
    printf("enter the string2:");
    //gets(Str2);
    scanf("%d",&str2);
    com=strcmp(str1,str2);
    if(d==0)
    {
        printf("the strings are equal");
    }
    else{
        printf("these are not equal");
    }
    return 0;
}
