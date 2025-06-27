#include<stdio.h>
int main()
{
    int i,n,rem,rev=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    while(rev>0)
    {
        printf("%d ",rev%10);
        rev=rev/10;
    }
    return 0;
}