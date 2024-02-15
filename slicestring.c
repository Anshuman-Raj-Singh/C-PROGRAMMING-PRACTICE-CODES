#include<stdio.h>
#include<string.h>

void slice(char name[100],int n,int m);

int main(){
    char name[100];
    scanf("%s",&name);
    int n=3,m=8;
    slice(name,n,m);
    return 0;
}

void slice(char name[100],int n,int m){
    char newname[100];
    int j;
    for(int i=n,j=0;i<=m;i++,j++){
        newname[j]=name[i];
    }
    puts(newname);
    newname[j]='\0';
}
