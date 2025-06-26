#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("Enter a number:");
    scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("Sum of numbers from 1 to %d is:%d\n",n,sum);
    return 0;
}