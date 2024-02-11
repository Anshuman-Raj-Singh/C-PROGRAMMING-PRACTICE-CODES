#include<stdio.h>

int countodd(int arr[],int n);

int main(){
    int arr[5]={11,234,40,543,563};
    int n=5;
    countodd(arr,n);
    return 0;
}

int countodd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count+=1;
        }
    }
    printf("%d\n",count);
}
