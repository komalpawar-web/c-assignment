#include<stdio.h>
int main()
{
    int n;
    printf("ENter the number:");
    scanf("%d",&n);
    if(n%5==0&&n%7==0)
    printf("Number is divisible by 5 and 7");
    else
    printf("Number is not divisible by 5 and 7");
    return 0;
}