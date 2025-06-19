#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character to convert:");
    scanf(" %c",&ch);

    if(ch>='a'&&ch<='z'){
        ch=ch-32;
        printf("Uppercase:%c",ch);
    }
    else if(ch>='A'&&ch<='Z'){
        ch=ch+32;
        printf("Lowercase:%c",ch);

    }
    else
    printf("Not an alphabet Charecter:");

    return 0;
}