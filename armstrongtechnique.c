//to check if the given number is armstrong or not
#include<stdio.h>
#include<math.h>

int main(){
    int num;
    int x,y,z;
    printf("enter the numbers:");
    scanf("%d%d%d",&x,&y,&z);
    num=(x*100+y*10+z);
    while((pow(x,3)+pow(y,3)+pow(z,3))==num)
    {
        printf("%d is armstrong\n",num);
        break;
    }
    return 0;
}
