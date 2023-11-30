#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("The given number is not a natural number.\n");
    } else if (num == 0) {
        printf("0 is a natural number.\n");
    } else {
        printf("%d is a natural number.\n", num);
    }
    return 0;
}
