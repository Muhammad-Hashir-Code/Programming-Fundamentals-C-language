#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char reversed[100];

    printf("Enter a word: ");
    scanf("%s", str);

    // Reverse the string
    strcpy(reversed, str); // Copy original string to reversed
    strrev(reversed);      // Reverse the copied string

    // Compare original and reversed strings
    if (strcmp(str, reversed) == 0) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
m
