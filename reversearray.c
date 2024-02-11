#include<stdio.h>

int reversearray(int arr[],int n);

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    reversearray(arr,n);
    return 0;
}

int reversearray(int arr[],int n){
    for(int i=(n-1);i>=0;i--){
        printf("%d\t",arr[i]);
    }
}
