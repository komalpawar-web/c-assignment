#include<stdio.h>
int main()
{
    int n;
    printf("ENter the number:");
    scanf("%d",&n);

    if(n%5==0||n%7==0)
    printf("The %d is divisible by 5 or 7",n);
    else
    printf("The %d is not divisible by 5 or 7",n);
    return 0;
}