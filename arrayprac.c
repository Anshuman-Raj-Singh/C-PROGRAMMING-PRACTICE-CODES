#include<stdio.h>
void printarray(int arr[],int n);

int main(){
    int arr[3]={1,2,3};
    int n=3;
    printarray(arr,n);
    return 0;
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
