#include<stdio.h>
int main(){
    int i=1234;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("%u\n",&ptr);
    printf("%d\n",**pptr);
    return 0;
}
