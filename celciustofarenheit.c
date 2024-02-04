#include<stdio.h>

float ctof(float t);

int main(){
    printf("%.2f\n",ctof(32));
}

float ctof(float t){
    float temp=(t*0.18)+32;
    return temp;
}
