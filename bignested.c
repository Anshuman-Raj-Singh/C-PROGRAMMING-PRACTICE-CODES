#include<stdio.h>
int main(){
    int rows,coloumns;
    printf("enter the rows and coloumns:");
    scanf("%d%d",&rows,&coloumns);
    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<coloumns;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
