#include <stdio.h>
int main(){
    float length,breadth;
    printf("enter the length");
    scanf("%f",&length);
    printf("enter the breadth");
    scanf("%f",&breadth);
    printf("area:%f\n",length*breadth);
    printf("perimeter:%f\n",2*(length+breadth));
    return 0;
}
