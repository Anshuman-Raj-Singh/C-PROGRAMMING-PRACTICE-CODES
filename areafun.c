#include<stdio.h>
#include<math.h>

void square(int a);
void rectangle(int a,int b);
void circle(int r);

int main(){
    int a,b,r;
    square(a);
    rectangle(a,b);
    circle(r);
    return 0;
}

void square(int a){
    printf("enter side:\n");
    scanf("%d",&a);
    int area=a*a;
    printf("%d\n",area);
}

void rectangle(int a,int b){
    printf("enter the length and breadth:\n");
    scanf("%d%d",&a,&b);
    int area=a*b;
    printf("%d\n",area);
}

void circle(int r){
    printf("enter the radius:\n");
    scanf("%d",&r);
    float area=r*r*(3.14);
    printf("%f",area);
}
