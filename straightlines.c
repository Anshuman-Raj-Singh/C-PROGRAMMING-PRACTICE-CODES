#include<stdio.h>
int main(){
    int x1,x2,y1,y2,x3,y3;
    printf("enter the three coordinates:");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    if((y2-y1)/(x2-x1)==(y3-y2)/(x3-x2)){
        printf("coordinates of straight line");
    }else{
        printf("cannot be a straight line");
    }
    return 0;
}
