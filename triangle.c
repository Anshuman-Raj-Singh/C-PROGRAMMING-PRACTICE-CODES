//to calculate the area and perimeter of a triangle
#include<stdio.h>
int main(){
    float base,height;
    printf("enter the base");
    scanf("%f",&base);
    printf("enter the height");
    scanf("%f",&height);
    printf("area:%f\n",0.5*base*height);
    printf("perimeter;%f\n",3*base);
    return 0;
}
