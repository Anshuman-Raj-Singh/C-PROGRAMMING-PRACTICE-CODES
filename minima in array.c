#include<stdio.h>
int main(){
    int n;
    printf("enter the length of the array:");
    scanf("%d",&n);
    int a[n],index=0,min=0,i;
    printf("enter the elements in the array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {min=a[i];
        index=i;}
    }
    printf("the minima is:%d\t",min);
    printf("the index is:%d",index);
    return 0;
}
