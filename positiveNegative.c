#include<stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    (n>0)?printf("positive number"):printf("Negative number");
    return 0;
}