#include<stdio.h>
#include<string.h>

typedef struct bank_account{
    int ifsc;
    char branch[100];

}bank;

int info(struct bank_account a1);

int main(){
    bank a1={12323423123,"JAMMU"};
    info(a1);
    return 0;
}

int info(struct bank_account a1){
    printf("%u\n",a1.ifsc);
    printf("%s\n",a1.branch);
    return 0;
}
