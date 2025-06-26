#include<stdio.h>
int main()
{
    int n,sum=0,digits;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        digits=n%10;
        sum+=digits;
        n=n/10;
    }
    printf("Sum=%d",sum);
    return 0;
}