#include<stdio.h>
int main()
{
    int i,n,x,result=1;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("\nEnter its power:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    result*=x;
    printf("\n%d^%d=%d",x,n,result);
    return 0;
}