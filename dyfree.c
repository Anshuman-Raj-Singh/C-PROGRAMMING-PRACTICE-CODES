#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter n:\n");
    scanf("%d",&n);
    int *ptr;
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("%d\n",ptr[i]);
    }
    
    free(ptr);

    ptr=(int*)calloc(2,sizeof(int));
    for(int j=0;j<2;j++){
        printf("%d\n",ptr[j]);
    }
    return 0;
}
