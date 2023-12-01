//program to delete an element in an array
#include<stdio.h>
int main(){
    int arr[20],n,d,i,count=0,pos;
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("enter the elements to be deleted: \n");
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        if(d==arr[i])
        {
            count=1;
            pos=i;
            break;
        }
    }
    for(i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
    printf("enter the elements after deletion:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
