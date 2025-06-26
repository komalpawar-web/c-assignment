#include <stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    fact*=i;

    printf("\nFactorial of %d is %d",n,fact);
    return 0;
}
