#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    printf("The %c is vowel",ch);
    else
    printf("The %c is consonant",ch);

    return 0;
}