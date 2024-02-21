#include<Stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("even.txt","a");
    int ch;
    char name;
    fprintf(fptr,"%d",5765);
    fprintf(fptr,"%a","A");
    fprintf(fptr,"%s","n");
    fprintf(fptr,"%s","s");
    fprintf(fptr,"%s","h");
    fprintf(fptr,"%s","u");
    fprintf(fptr,"%s","m");
    fprintf(fptr,"%s","a");
    fprintf(fptr,"%s","n");


    return 0;
}
