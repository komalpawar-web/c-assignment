#include<stdio.h>
int main()
{
    int n,palin=0,digit,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        digit=n%10;
        palin=palin*10+digit;
        n=n/10;
    }
    if(temp==palin)
    printf("Palindrome.");
    else
    printf("not palindrome.");
    return 0;
}