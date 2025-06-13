#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'){
    printf("\nThe previous character is=%c",ch-1);
    printf("\nThe next character is =%c",ch+1);
    }
    else if(ch>='A'&&ch<='Z'){
    printf("\nThe previous character is=%c",ch-1);
    printf("\nThe next character is =%c",ch+1);
    }
    else{
        printf("\nPlease enter a character.");
    }

    return 0;
}