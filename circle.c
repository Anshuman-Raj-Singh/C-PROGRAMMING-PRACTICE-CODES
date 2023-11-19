//to find out the area and perimeter of a circle
#include <stdio.h>
int main(){
    float radius;
    printf("enter the radius");
    scanf("%f",&radius);
    printf("area:%f\n",3.14*radius*radius);
    printf("perimeter:%f\n",2*3.14*radius);
    return 0;
}
