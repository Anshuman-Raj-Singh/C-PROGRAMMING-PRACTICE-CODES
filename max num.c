#include<stdio.h>
int main(){
    int array[5] = {45,12,67,34,89,56};
    int max=array[4];
    for(int i=1;i<6;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    printf("largest element in the array is:%d\n",max);
    return 0;

}
