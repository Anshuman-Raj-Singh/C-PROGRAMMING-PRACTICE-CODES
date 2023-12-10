#include <stdio.h>
#include <string.h>
int main() {
    char str1[50], str2[50];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 
   
    printf("\nEntered strings:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    printf("\nLength of String 1: %lu\n", strlen(str1));
    printf("Length of String 2: %lu\n", strlen(str2));

    strcat(str1, str2);
    printf("\nConcatenated string: %s\n", str1);

    int compareResult = strcmp(str1, str2);

    if (compareResult == 0) {
        printf("The strings are equal.\n");
    } else if (compareResult < 0) {
        printf("String 1 is lexicographically smaller than String 2.\n");
    } else {
        printf("String 1 is lexicographically greater than String 2.\n");
    }

    return 0;
}
