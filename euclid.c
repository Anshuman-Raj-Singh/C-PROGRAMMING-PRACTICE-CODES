//algorithm to find the euclidean distance between two points
#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2;
    printf("enter the coordinates of the first point:\n");
    scanf("%f %f",&x1,&y1);
    printf("enter the coordinates of the second point:\n");
    scanf("%f %f",&x2,&y2);
    double d=sqrt(pow(x2-x1,2)+(pow(y2-y1,2)));
    printf("the distance of the two points in plain is:%f",d);
    return 0;

}
