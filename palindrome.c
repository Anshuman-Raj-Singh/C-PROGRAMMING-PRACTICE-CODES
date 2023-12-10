#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0; 
        }
        left++;
        right--;
    }

    return 1; 
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0'; 

    if (isPalindrome(inputString)) {
        printf("\nThe entered string is a palindrome.\n");
    } else {
        printf("\nThe entered string is not a palindrome.\n");
    }
    return 0;
}
