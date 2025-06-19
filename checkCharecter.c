#include <stdio.h>

int main() {
    char ch;

    
    printf("Enter a character: ");
    scanf(" %c", &ch);  

   
    if (ch >= 48 && ch <= 57) {
        printf("It is a Digit.\n");
    } else if (ch >= 65 && ch <= 90) {
        printf("It is an Uppercase Alphabet.\n");
    } else if (ch >= 97 && ch <= 122) {
        printf("It is a Lowercase Alphabet.\n");
    } else {
        printf("It is neither a Digit nor an Alphabet.\n");
    }

    return 0;
}