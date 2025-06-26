#include<stdio.h>
int main()
{
    int sum=0,i,n;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum==n)
    printf("Perfect Number.");
    else
    printf("Not perfect Number.");

    return 0;
}