#include<stdio.h>
int main(){
    int size=5,sum=0;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum:%d",sum);
    printf("\naverage:%d",(sum/size));
    return 0;
}
