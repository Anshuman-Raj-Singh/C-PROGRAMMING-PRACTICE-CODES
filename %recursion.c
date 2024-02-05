#include<stdio.h>

float marks(float m,float sc,float sans);

int main(){
    float m=54;
    float sc=56.5;
    float sans=99.1;
    marks(m,sc,sans);
}

float marks(float m,float sc,float sans){
    float percentage=((m+sc+sans)/300)*100;
    printf("%f\n",percentage);
    return percentage;
}
